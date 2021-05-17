#include <stdio.h>

int main(void)
{
	int na = 2, nb = 4;
	long fa = 2.3, fb = -5.6, fc = 3.45;
	double da = 4.56, db = -1.35;
	char cc = 'f';

	printf("The size of variables in memory is %d\n", (2*sizeof(int))+ (3*sizeof(long))+ (2*sizeof(double))+ sizeof(char));

	return 0;
}