#include <stdio.h>

int main(void)
{
	int i, j = 0;

	i = 1;
	while (i <= 5)
	{
		j = 1;
		while (j <= 5) 
		{
			if (j == i) 
			{
				{
					if (j % 2 == 0)
						printf("O");
					else
						printf("X");
				}
			}
			else
			{
				printf(" ");
			}
			j++;
		}
		printf("\n");
		i++;
	}
}