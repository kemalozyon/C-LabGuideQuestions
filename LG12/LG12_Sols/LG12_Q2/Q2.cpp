// LG12_Q2
//Read grades of students from grade.txt and display the number of students, the minimum and the average grade as in the following example run

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main(void)
{
	FILE *inp;
	inp = fopen("grades.txt", "r");	//open the input file

	if (inp == NULL)					
		printf("Error! File NOT found!\n");
	else  			
	{
		int 	count = 0, cntAbv40 = 0,
				min = 100,				
				status,					
				grade;					
		double 	sum = 0.0,				
				average;			

		status = fscanf(inp, "%d", &grade); 

		while (status != EOF)	
		{
			if (grade < min)	//if the grade is less than the min
				min = grade;	//the min is that number

			if (grade >= 40)	//if the grade is 40 or above then
			{
				sum = sum + grade;	//Add the grade to sum
				cntAbv40++;			//count the number of grades 40 or above to find the average
			}

			count++; 				//find the total number of students 

			status = fscanf(inp, "%d", &grade); 	
		}

		/*Display the results*/
		printf("Number of students is %d\n", count);
		printf("Minimum grade is %d\n", min);

		printf("Number of students with grades >= 40 is: %d\n", cntAbv40);
		
		//Calculate the average of the grades 40 or above 
		average = sum / cntAbv40;

		printf("Average of the grades >= 40 is %.2f\n", average);
	}

	fclose(inp); //close the grades input file

	return(0);
}
