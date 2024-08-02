#include <stdio.h>
#include <stdlib.h>

int main() {

	int pollution;

	printf("Enter the pollution scale value: ");
	scanf("%d",&pollution);

	if(pollution > 100) {
		printf("\nInvalid input! Valid range is (0-100). \n");
		exit(1);
	}

	if(pollution >= 80) {
		printf("\nThe pollution level is high.\n");
		exit(1);
	}

	if(pollution >= 70) {
		printf("The pollution level is medium.\n");
		exit(1);
	}

	 if(pollution >= 50) {
                printf("The pollution level is moderate.\n");
                exit(1);
        }

	printf("The pollution level is Low.\n");
	return 0;
}
