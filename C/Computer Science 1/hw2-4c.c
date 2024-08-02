#include <stdio.h>

int main() {

int x = 0;


	printf("Loop from 1-10, evens twice. \n");

        while(x <= 10) {

		printf("%d",x);

               	if(x%2 == 0){

                       	printf("%d",x);

               	}
/*               	else {

                       	printf("%d",x);

             	}
*/
               	x++;
       	}

        printf("\n");

return 0;
}
