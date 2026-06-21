#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

int sum_recursive(int n)
{
	if (n == 1)
		return 1;
	
	return n + sum_recursive(n - 1);
}

int main(void)
{
	while(1)
	{
		int N;
		int sum = 0;

		printf("Input number(1~100) : ");
		scanf("%d", &N);
		if (N < 1 || N>100)
		{
			printf("Increct number!\n");
			continue;
		}	
		sum = sum_recursive(N);
	
		printf("Sum = %d", sum);
		
	
		return 0;
	}
}