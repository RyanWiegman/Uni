#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void occurrence( int *arr, int size, int key) {

	int counter = 0, last_occ, first_occ, index, x;

	for(index = 0; index < size; index++){
		if(arr[index] == key){
			if(counter == 0){
				first_occ = index;
				counter++;
			}
			else{
				last_occ = index;
				counter++;
			}
		}

	}
	if(counter == 0){
		printf("First occurrence at index: %d\n", -1);
	        printf("Last occurrence at index: %d\n", -1);
        	printf("Total number of occurences: %d\n", -1);
	}
	else if(counter == 1){
		printf("First occurrence at index: %d\n", first_occ);
                printf("Last occurrence at index: %d\n", first_occ);
                printf("Total number of occurences: %d\n", counter);
	}
	else{
		printf("First occurrence at index: %d\n", first_occ);
		printf("Last occurrence at index: %d\n", last_occ);
		printf("Total number of occurences: %d\n", counter);
	}
return;
}


int main(){

	int a[10], num;
	srand(time(0));

	printf("Array data: \n");

	for(int i = 0; i < 10; i++){
		a[i] = rand()  % 11;

		printf("%d, ", a[i]);
	}

	printf("Enter the key:");
	scanf("%d", &num);

	occurrence(a, 10, num);

return 0;
}
