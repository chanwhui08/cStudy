#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable:4996)

int main(void)
{
	int arr[7];
	int count = 1;
	for (int i = 0;i < 7;i++)
	{
		printf("Input numbers 7 times : ");
		scanf("%d", &arr[i]);

	}

	for (int i = 0;i < 7;i++)
	{

		if (arr[i] == arr[i + 1])
		{
			count++;
			continue;
		}
		else
		{
			printf("%d(%d) ", arr[i], count);
			count = 1;
		}
	}
	return 0;
}
