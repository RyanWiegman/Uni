#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 10

void largest_vals(int a[]){

	int i, j, max1, max2;

	max1 = a[0];
	for(i = 0; i < size; i++){
		if(a[i] > max1){
			max1 = a[i];
		}
	}

	int isSame = 1;
	for(i = 0; i < size-1; i++){
		if(a[i] != a[i+1])
			isSame = 0;
	}

	if(isSame){
		printf("Maximum value: %d\n", max1);
		printf("All the values are equal.\n");
		return;
	}

	max2 = 0;
	for(i = 0; i < size; i++){
		if(a[i] > max2 && a[i] < max1){
			max2 = a[i];
		}
	}

	printf("Maximum value: %d\n", max1);
	printf("Second largest value: %d\n", max2);
return;
}


int main(){

	int a[size];

	printf("Array data \n");
	srand(time(0));

	for(int i = 0; i < size; i++){
		a[i] = rand() % 11;
		printf("%d ", a[i]);
	}

	printf("\n\n");
	largest_vals(a);

return 0;
}
