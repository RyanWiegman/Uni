#include <stdio.h>

int main() {

int size, i, j;

	printf("Enter size: ");
	scanf("%d",&size);

	for(i = 1; i <= size; i++) {
		for(j = i; j < size; j++){
			printf(" ");
		}

		for(j = 1; j <= i; j++) {
			printf("*");
		}

		printf("\n");
	}

return 0;
}
