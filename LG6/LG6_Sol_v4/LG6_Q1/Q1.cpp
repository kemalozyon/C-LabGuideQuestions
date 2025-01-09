// LG6_Q1 -> Purpose is reading employee type and current salary and calculateing and displaying their new salary

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

#define INTERN 12
#define JUNIOR 19
#define SENIOR 25
#define MANAGER 35
#define OTHER 9

int main(void)
{
	char e_type;
	double raiseRate, c_salary, f_salary;;

	/*input the type of the employee*/
	printf("Enter type of employee: ");
	scanf("%c", &e_type);

	/*input the current salary of the employee*/
	printf("Enter the current salary: ");
	scanf("%lf", &c_salary);

	/* check the employee type and find the raiseRate*/
	switch (e_type)
	{
	case 'I':
	case 'i':
		raiseRate = INTERN;
		printf("\nInterns will have %.1f%% raise\n", raiseRate);
		break;
	case 'J':
	case 'j':
		raiseRate = JUNIOR;
		printf("\nJunior employees will have %.1f%% raise\n", raiseRate);
		break;
	case 'S':
	case 's':
		raiseRate = SENIOR;
		printf("\nSenior employees will have %.1f%% raise\n", raiseRate);;
		break;
	case 'M':
	case 'm':
		raiseRate = MANAGER;
		printf("\nManagers will have %.1f%% raise\n", raiseRate);
		break;
	default:
		raiseRate = OTHER;
		printf("\nThe employee will have %.1f%% raise\n", raiseRate);
	}

	f_salary = c_salary * (100 + raiseRate) / 100;
	printf("\nFinal salary of the employee is: %.2f TL\n", f_salary);

	return(0);
}
