#include <stdio.h>

int main(void) {

int x, temp;

	printf("Enter unit (1: Fahrenheit, 2: Celsius):");
	scanf("%d",&x);


	printf("Enter temperature: ");
        scanf("%d",&temp);

	if(x == 1) {
//		printf("Enter temperature: \n");
//		scanf("%d",&fahr);

		if(temp >= 80) {
			printf("The temperature is hot!\n");
		}

		else if(temp >= 65 && temp < 80) {
			printf("The temperature is cool!\n");
		}

		else {
			printf("The temperture is cold!\n");
		}

	}

	if(x == 2) {
		if(temp >= 27) {
			printf("The temperature is hot!\n");
		}

		else if(temp >= 18 && temp < 27) {
			printf("The temperature is cool!\n");
		}

		else {
			printf("The temperature is cold!\n");
		}
	}

	if(x > 2) {
		printf("Invalid input! \n");
	}

return 0;
}
