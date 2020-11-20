#include <stdio.h>

void printo(void);
void printx(void);
void printn(void);

int main(void)
{
	int row, column, x, y, i, j;
	while (1)
	{
		printf("Input row, column, x,y:");

		scanf("%d %d %d %d", &row, &column, &x, &y);
		
		int i = 1; 
		int j = 1;
		while (1)
		{
			if (i == x)
			{
				printx();
			}

			else if (j == y)
			{
				printx();
			}

			else
			{
				printo();
			}

			if (i * j == row * column)
			{
				printn();
				break;
			}

			if (j == column)
			{
				printn();
				j = 0;
				i++;
			}
			j++;
		}

	}
	return 0;
}

void printo(void)
{
	printf("O");
}
void printx(void)
{
	printf("X");
}
void printn(void)
{
	printf("\n");
}