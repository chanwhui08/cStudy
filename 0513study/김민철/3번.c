#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

int F(int n)
{
	if (n == 1)
		return 1;
	if (n == 0)
		return 0;
	return F(n - 1) + F(n - 2);
}


int main(void)
{

	int N;
	int result;
	printf("Input number(0~30) : ");
	scanf("%d", &N);
	if (N < 0 || N>30)
	{
		printf("Increct number!");
		return;
	}
	result = F(N);
	printf("F(%d) =  %d\n", N, result);
		
	return 0;
}
