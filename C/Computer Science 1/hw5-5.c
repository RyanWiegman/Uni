#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int change_val(int a[], int size){



	for(int i = 0; i < size - 1; i++) {
		for(int j = i + 1; j < size; j++){
			if(a[i] == a[j]){
				a[j] = -1;
			}
		}
	}

return 0;
}


int main(){

	int a[SIZE], i;

	printf("Array data \n");
	srand(time(0));

	for(i = 0; i < SIZE; i++){
		a[i] = rand() % 11;
		printf("%d ", a[i]);
	}

	printf("\n\n");
	printf("After processing\n");
	change_val(a, SIZE);

	for(i = 0; i < SIZE; i++){
		printf("%d ", a[i]);
	}
	printf("\n");

return 0;
}
