#include <stdio.h>

int main() {

	int a[100], num, index = 0;


	printf("Printing the array... \n\n");

	for(num = 101; num > 1; num--) {
		a[num] = num - 1;
		printf("Index %d: %d\n", index++, a[num]);
	}



return 0;
}
