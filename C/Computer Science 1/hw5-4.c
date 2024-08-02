#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define size 8

int arrcheck(int a[]) {

	for(int i = 0; i < size; i++){
		if(abs(a[i] - a[i+1]) == 1)
			return 1;
	}

return 0;
}

int main(){

	int a[size], i;

	printf("Array... \n");
	srand(time(0));

	for(i = 0; i < size; i++){
		a[i] = rand() % 101;
		printf("%d ", a[i]);
	}
	printf("\n\n");

	if(arrcheck(a) == 1){
		printf("The array data is corrupt! \n");
	}
	else{
		printf("The array date is good!\n");
	}

return 0;
}
