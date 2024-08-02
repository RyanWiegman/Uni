#include <stdio.h>
#include <stdlib.h>

int main() {

	int stones, pounds, ounces;

	printf("Enter stones: ");
	scanf("%d",&stones);

	printf("Enter pounds: ");
	scanf("%d",&pounds);

	printf("Enter ounces: ");
	scanf("%d",&ounces);

	if(stones < 0 || pounds < 0 || ounces < 0) {
		printf("This input is invalid!\n");
		exit(1);
	}

	printf("The total weight is %d oz.\n",stones*14 *16  + pounds*16 + ounces);



	return 0;
}
