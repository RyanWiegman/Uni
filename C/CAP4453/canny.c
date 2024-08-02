#include <stdio.h>                  /*  Marr-Hildreth.c  (or marrh.c) */
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define  PICSIZE 256
#define  MAXMASK 100

         int    pic[PICSIZE][PICSIZE];
         double outpicx[PICSIZE][PICSIZE];
         double outpicy[PICSIZE][PICSIZE];
         double peak[PICSIZE][PICSIZE];
         double print_peak[PICSIZE][PICSIZE];
         int    edgeflag[PICSIZE][PICSIZE];
         double xmask[MAXMASK][MAXMASK];
         double ymask[MAXMASK][MAXMASK];
         double final[PICSIZE][PICSIZE];
         double ival[256][256];

void main(argc,argv)
int argc;
char **argv;
{
        int     i,j,p,q,s,t,mr,centx,centy;
        int high_threshold = 100;
        int low_threshold = 35;
        double  maskval,xsum,ysum,sig,maxival,minival,maxval,ZEROTOL, slope, percent;
        FILE    *fo1, *fo2,*fo3,*fp1, *fopen();
        char    *foobar;

        
        argc--; argv++;
        foobar = *argv;
        fp1=fopen(foobar,"rb");

        argc--; argv++;
        foobar = *argv;
        fo1=fopen(foobar,"wb");
       
        fo2=fopen("out2.pgm", "wb");
        fo3=fopen("out3.pgm", "wb");

        argc--; argv++;
        foobar = *argv;
        sig = atof(foobar);

      //printf("Enter amount for percent:\n");
      //scanf("%d", &percent);
      percent = .05;

      /*
        argc--; argv++;
        foobar = *argv;
        ZEROTOL = atof(foobar);
      */

        mr = (int)(sig * 3);
        centx = (MAXMASK / 2);
        centy = (MAXMASK / 2);

      fprintf(fo1,"P5\n256 256\n255\n");   // SETS OUTPUT TO BE 256X256 PIC.
      fprintf(fo2,"P5\n256 256\n255\n");
      fprintf(fo3,"P5\n256 256\n255\n");

///////////////////////////// READS PICTURE INTO PIC ARRAY
        for (i=0;i<256;i++)
        { for (j=0;j<256;j++)
                {
                  pic[i][j]  =  getc (fp1);
                }
        }

////////////////////////////// SETS MASKS FOR CONVOLUTION
        for (p=-mr;p<=mr;p++)
        {  for (q=-mr;q<=mr;q++)
           {
              maskval = q * (exp(-1*(((p*p)+(q*q))/(2*(sig*sig)))));
              (xmask[p+centy][q+centx]) = maskval;

               maskval = p * (exp(-1*(((p*p)+(q*q))/(2*(sig*sig)))));
              (ymask[p+centy][q+centx]) = maskval;
           }
        }

/////////////////////////// CONVOLUTION OF MASK AND PICTURE
        for (i=mr;i<=255-mr;i++)
        { for (j=mr;j<=255-mr;j++)
          {
             xsum = 0;
             ysum = 0;
             for (p=-mr;p<=mr;p++)
             {
                for (q=-mr;q<=mr;q++)
                {
                   xsum += pic[i+p][j+q] * xmask[p+centy][q+centx];
                   ysum += pic[i+p][j+q] * ymask[p+centy][q+centx];
                }
             }
             outpicx[i][j] = xsum;
             outpicy[i][j] = ysum;
             //conv[i][j] = sum;
          }
        }

//////////////////////////// SETS MAGNITUDE/GRADIENT (BRIGHTNESS) AT EACH PIXEL.
        maxival = 0;
        for (i=mr;i<256-mr;i++)
        { for (j=mr;j<256-mr;j++)
          {
             ival[i][j]=sqrt((double)((outpicx[i][j]*outpicx[i][j]) +
                                      (outpicy[i][j]*outpicy[i][j])));
             if (ival[i][j] > maxival)
                maxival = ival[i][j];
           }
        }

//////////////////////////// FINDING THE GRADIENTS DIRECTION
         for(i = mr; i < 256 - mr; i++) {
            for(j = mr; j < 256 - mr; j++) {
               if(outpicx[i][j] == 0.0)
                  outpicx[i][j] = .00001;
               
               slope = outpicy[i][j] / outpicx[i][j];
               if((slope <= .4142) && (slope > -.4142)) {
                  if((ival[i][j] > ival[i][j-1]) && (ival[i][j] > ival[i][j+1]))
                     peak[i][j] = 255;
               }
               else if((slope <= 2.4142) && (slope > .4142)) {
                  if((ival[i][j] > ival[i-1][j-1]) && (ival[i][j] > ival[i+1][j+1]))
                     peak[i][j] = 255;
               }
               else if((slope <= -.4142) && (slope > -2.4142)) {
                  if((ival[i][j] > ival[i+1][j-1]) && (ival[i][j] > ival[i-1][j+1]))
                     peak[i][j] = 255;
               }
               else
                  if((ival[i][j] > ival[i-1][j]) && (ival[i][j] > ival[i+1][j]))
                     peak[i][j] = 255;
            }
         }

         memcpy(print_peak, peak, sizeof(peak));

//////////////////////////// AUTOMATICALLY GET HIGH/LOW THRESHOLD 
         double histogram[PICSIZE];
         for(i = mr; i < 256 - mr; i++){
            for(j = mr; j < 256 - mr; j++){
               (histogram[(int)ival[i][j]])++;
            }
         }

         double cutoff = percent * 256 * 256;
         int array_length = sizeof(histogram) / sizeof(double);
         int array_max;

         for(i = array_length; i > 1; i--) {
            array_max += histogram[i];

            if(array_max > cutoff)
               break;
         }

         high_threshold = i;
         low_threshold = .15 * high_threshold;

//////////////////////////// THRESHOLD
/// CHECK AGAINST HIGH/LOW THRESHOLD
         for(i = mr; i < 256 - mr; i++) {
            for(j = mr; j < 256 - mr; j++) {
               if(peak[i][j] == 255) {
                  if(ival[i][j] > high_threshold){
                     peak[i][j] = 0;
                     final[i][j] = 255;
                  }
                  else if(ival[i][j] < low_threshold){
                     peak[i][j] = 0;
                     final[i][j] = 0;
                  }
               }
            }
         }

/// CHECKS ALL INBETWEEN VALUES
         int more_to_do = 1;
         while(more_to_do) {
            more_to_do = 0;

            for(i = mr; i < 256 - mr; i++) {
               for(j = mr; j < 256 - mr; j++) {
                  if(peak[i][j] == 255){
                     for(int x = -1; x < 2; x++){
                        for(int y = -1; y < 2; y++){
                           if(final[i+x][j+y] == 255) {
                              peak[i][j] = 0;
                              final[i][j] = 255;
                              more_to_do = 1;
                           }
                        }
                     }
                  }
               }
            }
         }

//////////////////////////// PRINT OUTPUT
        for (i=0;i<256;i++)
          { for (j=0;j<256;j++)
            {
             ival[i][j] = (ival[i][j] / maxival) * 255;
             fprintf(fo1,"%c",(char)((int)(ival[i][j])));
            }
          }

          for (i=0;i<256;i++)
          { for (j=0;j<256;j++)
            {
             fprintf(fo2,"%c",(char)((int)(print_peak[i][j])));
            }
          }

          for (i=0;i<256;i++)
          { for (j=0;j<256;j++)
            {
             fprintf(fo3,"%c",(char)((int)(final[i][j])));
            }
          }

         fclose(fo1);
         fclose(fo2);
         fclose(fo3);
}
