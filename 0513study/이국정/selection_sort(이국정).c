//선택 정렬
// 정수 N개가 주어졌을 때, 선택 정렬을 이용하여 오름 차순으로 정렬하는 프로그램을 작성하시오.
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#include <time.h>

int main(void)
{
	int arr[100] = { 0 };
	int n = 0;
	int i;

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
	int index = 0;
	
	printf("input  number : ");

	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < size; i++)
	{
		int min_index = i;
		for (int j = i+1; j < size; j++)
		{
			if (arr[j] < arr[min_index])
			{
				min_index = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
	}

	for (i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
	}
}