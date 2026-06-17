#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

int fac_fac(int n)
{
	if (n == 1)
		return 1;
	return n * fac_fac(n - 1);
}

int main(void)
{
	
	int N;
	int fac = 1;
	printf("Input number(0~12) : ");
	scanf("%d", &N);

	if (N < 0 || N>12)
	{
		printf("Incrret number!");
		return;
	}
	else if (N == 0)
	{
		printf("N! = 0");
	}
	fac = fac_fac(N);
	printf("N! = %d", fac);

	return 0;
}