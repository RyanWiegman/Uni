#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main() {

	int a[SIZE], value;

	printf("Printing the array...\n\n");
	srand(time(0));

	for(value = 0; value < SIZE; value++){
		a[value] = rand() % 101;

		printf("%d ", a[value]);
	}
	printf("\n");

return 0;
}
