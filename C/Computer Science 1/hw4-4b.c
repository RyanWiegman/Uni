#include <stdio.h>


void recsize(int size) {

int j;
	if(size ==  0)
		return;

	recsize(size - 1);

	for(j = 1; j <= size; j++)
		printf("*");
	printf("\n");

}


int main() {

int size;

	printf("Enter size: ");
	scanf("%d",&size);

	recsize(size);

return 0;
}
