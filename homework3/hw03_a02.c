#include <stdio.h>

void printm(int, int);

int main() 
{
	int row = 5, column = 5;

	printm(row, column);

	return 0;
}

void printm(int r, int c) 
{
	   int i;

		for (i = 0; i<=24; i++) 
		{
			if (i == 5)
				printf("\n");

			if (i == 10)
				printf("\n");

			if (i == 15)
				printf("\n");

			if (i == 20)
				printf("\n");

			if (i % 2 == 0)
				printf("X");
			
			else
				printf("O");
			
		}
	
}