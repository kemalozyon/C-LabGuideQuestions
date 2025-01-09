#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define LOSS 0.04
#define PROFIT 0.1
int main(void) {
	double sales, profit;
	int years;
	double totalSales = 0, totalProfit = 0;


	printf("Enter the sales of the firm: ");
	scanf("%lf", &sales);
	printf("Enter the number of years: ");
	scanf("%d", &years);

	printf("\nYEAR   SALES           PROFIT\n");
	printf("-------------------------------\n");

	for (int year = 1; year <= years; year++) {
		sales -= sales * LOSS;
		profit = sales * PROFIT;

		totalSales += sales;
		totalProfit += profit;

		printf("%-6d %-15.2lf %.2lf\n", year, sales, profit);
	}

	printf("------------------------------\n");
	printf("TOTAL  %-15.2lf %.2lf\n", totalSales, totalProfit);

	return 0;
}
