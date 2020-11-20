#include <stdio.h>

int main(void)
{
	int i = 0;

	for (i=1; i<=32; i++)
	{
		if ((i % 8) == 0)
		{
			printf("$");
			printf("\n");
		}
		else
		{
			printf("$");
		}
	}
	
}