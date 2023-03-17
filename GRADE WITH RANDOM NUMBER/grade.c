

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SENTINEL -1

int main(void)
{
	int num, count, sum, grade;
	double avarage;
	srand(time(NULL));

	count=0;
	sum=0;

	do{
		printf("Enter 1 to enter a grade, or enter -1 to exit: ");
		scanf("%d", &num);
		if(num == SENTINEL || num != 1)
			break; /* Exit from the loop*/
		grade = rand() %101;
		sum = sum + grade;
		count++;
	}while(num != SENTINEL);

	printf("\nSum of grade is: %d\n\n", sum);
	printf("The total number of students: %d\n\n", count);

	if(count == 0)
		printf("\nNo grades are entered\n\n");
	else{
		avarage = (double)sum/count;
		printf("The avarage of grades is: %0.2f", avarage);
	}

	printf("\n\n");
		      "	                                                    *****************\n"
          "			                                    * OMER GOKDERE  *\n"
          "	                                                    *****************\n");

	return 0;
}
