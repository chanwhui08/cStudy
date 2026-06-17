#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

int binarySearch(int* arr,int start,int end, int find_number);

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
	

	printf("%d", binarySearch(arr, 1, N-1, X));

	return 0;
}

int binarySearch(int* arr, int start, int end, int find_number)
{
	if (start > end)
		return -1;
	int center = (start + end) / 2;
	if (arr[center] == find_number)
		return center;
	else if (arr[center] > find_number)
		return binarySearch(arr, start, center - 1, find_number);
	else
		return binarySearch(arr, center + 1, end, find_number);
}
