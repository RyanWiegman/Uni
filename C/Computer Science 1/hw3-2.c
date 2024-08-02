#include <stdio.h>

int main() {

int x, gpa = 0, cls = 1, total = 0, counter = 0;
float average1, avg2, avg3;

	for(x = 1; x <= 3; x++) {
		printf("Student %d\n",x);

		while(gpa != -1) {
			printf("Class %d:",cls++);
			scanf("%d",&gpa);

		if(gpa < 0){
			if(gpa == -1)
				break;
			else{
				counter++;
			}
		}
		else{
			total += gpa;
			counter++;
		}

		}

	        if(x == 1){
//			printf("%d %d", total, counter);
                        average1 = total / (float)counter;
		}
                if(x == 2)
                        avg2 = total / (float)counter;
                if(x == 3)
                        avg3 = total / (float)counter;

                total = 0;
		gpa = 0;
		cls = 1;
		counter = 0;
	}

	printf("student 1 GPA: %.2f\n",average1);
        printf("Student 2 GPA: %.2f\n",avg2);
        printf("Student 3 GPA: %.2f\n",avg3);


return 0;
}
