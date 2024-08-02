#include <stdio.h>

int main() {

	int a = 4, b = 5;
	float avg;

	avg = (a + b) / 2;
	printf("Integer division result: %f \n",avg);

	avg = (float)(a + b) / 2;
	printf("Floating-point division result #1: %f \n",avg);

	avg = (a + b) / 2.0;
	printf("Floating-point division result #2: %f \n",avg);


return 0;
}
