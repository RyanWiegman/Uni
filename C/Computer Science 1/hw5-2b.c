#include <stdio.h>
#define SIZE 8

int ind(int size, int a[SIZE]){

	int even_ind;

	for(int i = 0; i < SIZE; i++){
		if(a[i] % 2 == 0){
			even_ind = i;
			break;
		}
	}
return even_ind;
}


int main(){

	int a[SIZE] = {1, 7, 5, 9, 2, 0, 13, 23}, i;

	printf("Array....\n");

	for( i = 0; i < SIZE; i++){
		printf("%d ",a[i]);
	}


	printf("\n");
	printf("First even value at index: %d \n", ind(SIZE, a));


return 0;
}
