#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

int dispMenu();
void displaySalaries(int idArr[SIZE], int salaryArr[SIZE], int count);
void displayAverages(int salaryArr[SIZE], char genderArr[SIZE], int count);
int findEmployee(int idArr[SIZE], int count, int searchID);

void main(void)
{
	int menuInp, status, idArr[SIZE], ageArr[SIZE], salaryArr[SIZE], count = 0, empIndex, searchID;
	char genderArr[SIZE];
	FILE* fp = fopen("employees.txt", "r");

	if (fp == NULL)
	{
		printf("The file couldn't be opened\n");
		return;
	}

	// Reading data from the file
	status = fscanf(fp, "%d %c %d %d", &idArr[count], &genderArr[count], &ageArr[count], &salaryArr[count]);
	while (status != EOF && count < SIZE)
	{
		count++;
		status = fscanf(fp, "%d %c %d %d", &idArr[count], &genderArr[count], &ageArr[count], &salaryArr[count]);
	}
	fclose(fp);

	menuInp = dispMenu();

	while (menuInp != 4)
	{
		switch (menuInp)
		{
		case 1:
			displaySalaries(idArr, salaryArr, count);
			break;
		case 2:
			displayAverages(salaryArr, genderArr, count);
			break;
		case 3:
			printf("Enter Employee ID: ");
			scanf("%d", &searchID);

			empIndex = findEmployee(idArr, count, searchID);

			if (empIndex == -1)
				printf("Employee not found!\n\n");
			else
			{
				printf("Employee Info:\n");
				printf("ID     : %d\n", idArr[empIndex]);
				printf("Gender : %c\n", genderArr[empIndex]);
				printf("Age    : %d\n", ageArr[empIndex]);
				printf("Salary : %d\n\n", salaryArr[empIndex]);
			}
			break;
		}
		menuInp = dispMenu();
	}
}

int dispMenu()
{
	int choice;

	printf("1. Display Salaries\n");
	printf("2. Display Average Salaries\n");
	printf("3. Display Employee Info\n");
	printf("4. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	while (choice < 1 || choice > 4)
	{
		printf("Wrong choice! Enter again: ");
		scanf("%d", &choice);
	}

	return choice;
}

void displaySalaries(int idArr[SIZE], int salaryArr[SIZE], int count)
{
	printf("Employee ID   Salary\n");
	printf("***********   ******\n");
	for (int i = 0; i < count; i++)
		printf("%11d   %6d\n", idArr[i], salaryArr[i]);
	printf("\n");
}

void displayAverages(int salaryArr[SIZE], char genderArr[SIZE], int count)
{
	int sumMale = 0, sumFemale = 0, total = 0, countMale = 0, countFemale = 0;

	for (int i = 0; i < count; i++)
	{
		if (genderArr[i] == 'M')
		{
			sumMale += salaryArr[i];
			countMale++;
		}
		else if (genderArr[i] == 'F')
		{
			sumFemale += salaryArr[i];
			countFemale++;
		}
		total += salaryArr[i];
	}

	printf("Average salary for male employees: %d\n", sumMale / countMale);
	printf("Average salary for female employees: %d\n", sumFemale / countFemale);
	printf("Average salary for all employees: %d\n\n", total / count);
}

int findEmployee(int idArr[SIZE], int count, int searchID)
{
	for (int i = 0; i < count; i++)
		if (idArr[i] == searchID)
			return i;

	return -1;
}
