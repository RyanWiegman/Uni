#include <stdio.h>

int value(int x, int y, int z) {

int a[3], i;

	a[0] = x;
	a[1] = y;
	a[2] = z;
 	int max = a[0];
	int min = a[0];

	for(i = 0; i < 3; i++) {
		if(a[i] > max)
			max = a[i];

		if(a[i] < min)
			min = a[i];
	}

	printf("In function\n");
	printf("Min value: %d\n",min);
	printf("Max value: %d\n\n", max);


	if(x == y || x == z || y == z)
		return 1;

return 0;
}


int main() {

int x,y,z,ret;

	printf("In main - Enter three integers: ");
	scanf("%d%d%d", &x, &y, &z);
	printf("\n");

	ret = value(x,y,z);


	printf("In main - Function returned: %d\n",ret);
return 0;
}
