#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

int main(void)
{
	int N;
	int arr[100] = { 0 };
	int result[100] = { 0 };
	

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
	
	for (int i = 0; i < N;i++)
	{
		int count = 0;
		for (int j = 0;j < N;j++)
		{
			if (arr[i] < arr[j])
				count++;					
		}
		result[i] = count + 1;
	}


	for (int i = 0; i < N;i++)
		printf("%d ", result[i]);


	return 0;
}
