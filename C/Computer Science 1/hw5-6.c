#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 11

void value_counter(int a[], int size){

	int *checkarr = (int *)malloc(sizeof(int)*size);
	int i;

	for(i = 0; i < size; i++){
		checkarr[i] = 0;
	}

	printf("Array: ");
	for(i = 0; i < size; i++){
		printf("%d ", a[i]);
	}
	printf("\n\n");

	for(i = 0; i < size; i++){
			checkarr[a[i]]++;
		}

	for(i = 10; i >= 0; i--)
		if(checkarr[i])
			printf("Value %d:\t %d times\n", i, checkarr[i]);
	free(checkarr);

return;
}


int main() {

	int a[SIZE];

	printf("Original data \n-------------\n");
	srand(time(0));

	for(int i = 0; i < SIZE; i++){
		a[i] = rand() % 11;
	}

	value_counter(a, SIZE);

return 0;
}
