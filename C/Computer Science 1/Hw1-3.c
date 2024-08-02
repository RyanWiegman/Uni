#include <stdio.h>

int main(){

	int x,y,z;

	printf("Enter integer a: \n");
	scanf("%d",&x);

	printf("Enter integer b: \n");
	scanf("%d",&y);

	z = x + y;

	printf("a+b = %d+%d = %d \n",x,y,z);

	z = x - y;

	printf("a-b = %d-%d = %d \n",x,y,z);

 	z = x * y;

	printf("a*b = %d*%d = %d \n",x,y,z);

	//z = x / y;
	//z = x % y;

	if( y == 0 ){
		printf("a/b = cannot divide by zero.\n");
		printf("a%%b = cannot divide by zero.\n");
	}
	else{

		z = x / y;

       		printf("a/b = %d/%d = %d \n", x, y, z);

		z = x % y;

		 printf("a%%b = %d%%%d = %d\n", x, y, z);
	}
  return 0;
}
