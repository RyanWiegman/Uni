#include <stdio.h>

int main() {

int small, large, sum = 0, i;


	printf("Enter a small value: ");
	scanf("%d",&small);

	printf("Enter a large value: ");
	scanf("%d",&large);

	if(small > large) {

		printf("Invalid input! \n");
		return 0;
	}

	for(i = small; i <= large; i++){
		sum = sum + i;
	}


	printf("The sum of integers between %d and %d is: %d \n",small, large, sum);



return 0;
}
