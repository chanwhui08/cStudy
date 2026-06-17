#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	int arr[7];
	int count = 1;

	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 1; i < 7; i++)
	{
		if (arr[i] == arr[i - 1])
		{
			count++;
		}
		else
		{
			printf("%d(%d)", arr[i - 1], count);
			count = 1;
		}
	}

	printf("%d(%d)", arr[6], count);

	return 0;
}