#include <stdio.h>

int main() {

int x, clas, total = 0, gpa;
float average1, avg2, avg3;

	for(x = 1; x <= 3; x++) {
		printf("Student: %d\n",x);

		for(clas = 1; clas <= 4; clas++) {
			printf("Class %d:",clas);
			scanf("%d",&gpa);

			if(gpa < 0)
				gpa = 0;

			total += gpa;
		}

		printf("\n");

		if(x == 1)
			average1 = total / 4.00;
		if(x == 2)
			avg2 = total / 4.00;
		if(x == 3)
			avg3 = total / 4.00;
		total = 0;
	}

	printf("student 1 GPA: %.2f\n",average1);
	printf("Student 2 GPA: %.2f\n",avg2);
	printf("Student 3 GPA: %.2f\n",avg3);
return 0;
}
