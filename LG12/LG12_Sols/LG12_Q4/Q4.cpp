/* LG12_Q4 -> Reading lines from a text file and writing the lines in the uncompressed manner as in the below */

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	FILE* inp, * outp;
	char first;
	int occ,i ;
	int count = 1, status, dum;

	inp = fopen("mytext.txt", "r");
	outp = fopen("final.txt", "w");

	if (inp == NULL)
		printf("\nFile can not be opened!\n");
	else
	{
		status = fscanf(inp, "%c %d", &first,&occ);
		
		while (status != EOF)
		{			
			for(i=1;i<=occ;i++)
				fprintf(outp, "%c", first);
							
			status = fscanf(inp, "%c %d", &first, &occ);

			fprintf(outp, "\n");
		}

	}//end of else

	fclose(inp);
	fclose(outp);

	return (0);
}