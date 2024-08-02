#include <stdio.h>

int even(int size, int a[size]){

	int even_num;

	for( int index = 0; index < size; index++){
		if( a[index] % 2 == 0){
			even_num = a[index];
			break;
		}
	}
return even_num;
}


int main() {

	int size;

	printf("Enter size of array: ");
	scanf("%d", &size);
	printf("Enter values of array: ");

	int a[size];

	for(int index = 0; index < size; index++) {
		scanf("%d",&a[index]);
	}

	printf("First even value: %d \n", even(size, a));

return 0;
}

