//LG11-Q2
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define YEAR 365
#define MONTH 30

void convertDays(int days, int *year, int *month, int *day);

int main(void)
{
	int tot_days, year, month, day;

	//get the total day from the user
	printf("Enter the number of days (-1 to stop): ");
	scanf("%d", &tot_days);

	while (tot_days != -1)
	{
		//convert the dat to year,month and day
		convertDays(tot_days, &year, &month, &day);
		printf("%d days is %d year(s), %d month(s), %d day(s) \n\n", tot_days, year, month, day);

		printf("Enter the number of days (-1 to stop): ");
		scanf("%d", &tot_days);
	}
	return(0);
}

//function that gets the day converts the day to year,month and remaining day
void convertDays(int days, int *year, int *month, int *day)
{
	*year = days / YEAR;
	*month = days % YEAR / MONTH;
	*day = days % YEAR % MONTH;
}