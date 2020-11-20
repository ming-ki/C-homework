#include <stdio.h>
#define N 3

int main(void)
{
	char* s[N] = { "IoT, ", "MLs, ", "SCH" };
	char str[100];
	int i, j, k;
	char* p;

	k = 0;
	for (i = 0; i < N; i++)
	{
		p = s[i];
		j = 0;
		while (p[j] != '\0')
		{
			str[k++] = p[j++];
		}
	}
	str[k] = '\0';

	printf(str);

	return 0;
}