#include <stdio.h>

int main() {


int i = 1, weight = 0, quantity = 0, total = 0;


	while(1) {

		printf("Input #%d. Weight of the box(lbs): ", i);
		scanf("%d",&weight);

		if(weight < 0){
			printf("\n");
			break;
		}

		printf("Enter quantity: ");
		scanf("%d",&quantity);

		printf("\n");

		total = total + weight * quantity;
		i++;
	}

	printf("The total weight is %d lbs.\n", total);

return 0;
}
