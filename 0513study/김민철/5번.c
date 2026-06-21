#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

int GCD(int a, int b)
{
	if (b == 0)
		return a;
	return GCD(b, a % b);
}
int main(void)
{
	int A, B;	
	int result;
	printf("Input two number(1~10000) : ");
	scanf("%d %d", &A, &B);
	if (1 > A || 1 > B || A > 10000 || B > 10000)
	{
		printf("Incorrect number!");
		return;
	}

	result = GCD(A,B);
	printf("MAX : %d", result);

	return 0;
}
