//삽입정렬
//정수 N개가 주어졌을 때, 삽입 정렬을 이용하여 오름차순으로 정렬하는 프로그램을 작성하시오.
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#include <time.h>

int main(void)
{
	int arr[100] = { 0 };
	int n = 0;

	do
	{
		printf("input number of integers : ");
		scanf("%d", &n);

		if (n < 1 || n > 100)
		{
			printf("long number, retry ");
			continue;
		}		
	}while (n < 1 || n > 100);

	int size = n;	

	printf("input number : ");

	for (int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < size; i++)
	{
		int min = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > min)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = min;
	}

	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}