#include <stdio.h>

int main(void)
{
	char str[100] = "Yesterday \"All\" My \'Troubles\' Seemed So Far Away.";
	int nArr[3] = { 0,0,0 }, i = 0;
	int j = 0;
	while (str[i] != '\0')
	{
		
		j=str[i];

		if (64 < j && j < 91)
			nArr[0] += 1;

		else if (96 < j && j < 123)
			nArr[1] += 1;
		
		else 
			nArr[2] += 1;

		i++;
	}

	for (i = 0; i < 3; i++)
		printf("%d,", nArr[i]);
	
	return 0;
}