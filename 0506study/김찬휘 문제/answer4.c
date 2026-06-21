#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable:4996)

int main(void)
{
	int N;
	printf("Input number(1~1000) : ");
	scanf("%d", &N);

	int arr[1000];
	int count = 0;
	for (int i = 0;i < N;i++)
	{
		scanf("%d", &arr[i]);
	}
	int len;
	int K;
	for (int i = 0;i < N;i++)
	{
		int sum = 0;
		int max = arr[i];
		int min = arr[i];
		for (int j = i;j < N;j++)
		{
			if (max < arr[j])
				max = arr[j];
			if (min > arr[j])
				min = arr[j];
			len = j - i + 1;
			sum = sum + arr[j];
			K = sum / len;
			if ((sum % len) == 0 && (max - min) <= K)
				count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
