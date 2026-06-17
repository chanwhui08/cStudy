#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

int main(void)
{
	int N;
	int arr[100] = { 0 };
	int X;
	printf("N = ");
	scanf("%d", &N);
	if (N < 1 || N>100)
	{
		printf("Incorrect number!");
		return;
	}

	for (int i = 0;i < N;i++)
	{
		printf("arr[] = ");
		scanf("%d", &arr[i]);
	}
	printf("X = ");
	scanf("%d", &X);

	for (int i = 0; i < N;i++)
	{
		if (arr[i] == X)
		{
			printf("X index = %d", i);
		}
		else 
		{
			printf("X index = -1");
			break;
		}
	}

	return 0;
}
