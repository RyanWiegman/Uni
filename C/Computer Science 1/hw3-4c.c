#include <stdio.h>

int main() {

int size, i, j, height, width;

        printf("Enter the height you want: ");
        scanf("%d",&height);
	printf("Enter the width you want: ");
	scanf("%d",&width);
	printf("\n");

        for(i = 1; i <= height; i++) {
                for(j = i; j < width; j++){
                        printf(" ");
                }

                for(j = 1; j <= i; j++) {
                        printf("*");
                }

                printf("\n");
        }

return 0;
}

