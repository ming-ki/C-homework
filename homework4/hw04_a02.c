#include <stdio.h>

int main(void)
{
	int cr;
	while (1)
	{
		printf("Input color value :");

		scanf("%d", &cr);
		
		if (0 <= cr && cr < 25)
			printf("Black!\n");
		if (25 <= cr && cr < 50)
			printf("Dark gray!\n");
		if (50 <= cr && cr< 75)
			printf("Light gray!\n");
		if (75 <= cr && cr <= 100)
			printf("White!\n");
		if (100 < cr)
			printf("Wrong value!\n");
	}
	return 0;
}