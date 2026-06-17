#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

int main(void)
{

	int N;
	int result;
	int a = 0;
	int b = 1;
	printf("Input number(0~50) : ");
	scanf("%d", &N);
	if (N < 0 || N>50)
	{
		printf("Increct number!");
		return;
	}
	else if (N == 0)
	{
		printf("F(%d) = 0", N);
		return;
	}
	else if (N == 1)
	{
		printf("F(%d) = 1", N);
		return;
	}
	else
	{
		for (int i = 2;i <= N;i++)
		{
			result = a + b;
			a = b;
			b = result;

		}
		printf("F(%d) =  %d\n", N, result);
	}	

	return 0;
}
