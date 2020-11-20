#include <stdio.h>

int power(int, int);

int main(void)
{
	int base = 5, exp = 3;
	int result = power(base, exp);
	printf("The %dth power of %d is %d. \n", exp, base, power(base, exp));

	return 0;
}

int power(int base, int exp)
{
	int result = 1;
	for (exp = 1; exp <= 3; exp++)
	{
		result *= base;

	}
	return result;
}