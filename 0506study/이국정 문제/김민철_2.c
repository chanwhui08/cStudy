#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable:4996)

int main(void)
{
	int num;
	int randomNumber;
	int count = 0;
	int arr[7] = { 0 };

	srand((unsigned int)time(NULL));
	randomNumber = rand() % 100 + 1;
	while (1)
	{
		int notnew = 0;
		printf("Input Number(1~100) : ");
		scanf("%d", &num);
		if (num < 1 || num>100)
		{
			printf("Input correct number!\n");
			continue;
		}
		for (int i = 0;i < 7;i++)
		{
			if (num == arr[i])
			{
				notnew = 1;
				break;
			}
		}
		if (notnew == 1)
		{
			printf("Already input number!!\n");
			continue;
		}
		if (num < randomNumber)
			printf("UP\n");
		else if (num > randomNumber)
			printf("DOWN\n");
		else
		{
			printf("CORRECT!\n");
			printf("COUNT : %d", count);
			break;
		}
		arr[count] = num;
		count++;
		if (count == 7)
			break;
	}
	return 0;
}