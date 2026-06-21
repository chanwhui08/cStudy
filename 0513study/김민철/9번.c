#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

int main(void)
{
	int N;
	int arr[100] = { 0 };
	int temp = arr[0];


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
		for (int j = i; j > 0;j--)
		{
			if(arr[j]<arr[j-1])
			{
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
	for (int i = 0; i < N;i++)
		printf("%d ", arr[i]);


	return 0;
}
