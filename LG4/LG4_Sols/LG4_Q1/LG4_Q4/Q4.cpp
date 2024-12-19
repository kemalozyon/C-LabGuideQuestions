/* LG4_Q4 -> Calculates the Total Grade for Final Eligibility  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define QUIZ 0.05
#define MIDTERM 0.15
#define LABWORK 0.30
#define LABFINAL 0.20

int main(void)
{
	double lectureQ, midterm, labWork, labExam, part1, part2, total;

	//Get the inputs
	printf("Enter lecture quiz grade : ");
	scanf("%lf", &lectureQ);

	printf("Enter midterm grade : ");
	scanf("%lf", &midterm);

	printf("Enter lab work grade : ");
	scanf("%lf", &labWork);

	printf("Enter lab final grade : ");
	scanf("%lf", &labExam);

	//Calculate the grades
	part1 = QUIZ * lectureQ + MIDTERM * midterm;
	part2 = LABWORK * labWork + LABFINAL * labExam;
	total = part1 + part2;
	printf("\nTotal grade is %.2f\n", total);

	// Decide eligible or NOT
	if (part1 >= 8 && part2 >= 17)
		printf("\nThe student is eligible for lecture final exam.");
	else
		printf("\nThe student is NOT eligible for lecture final exam.");
	return 0;
}