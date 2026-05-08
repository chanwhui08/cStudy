#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1
#define FALSE 0
#define SIZE 7
int get_random_number();
void checked_number(int* arr, int target);
int main(void)
{
	int input_check[SIZE];
	int rand_num = get_random_number();

	checked_number(input_check, rand_num);
	return 0;
}

int get_random_number()
{
	srand((unsigned int)time(NULL));

	return rand() % 100 + 1;
}

void checked_number(int* arr, int target)
{
	int start_number = 1;
	int end_number = 100;

	printf("%d\n", target);
	for (int i = 0; i < SIZE; i++)
	{
		printf("Number of attempts : %d(%d ~ %d), input number : ", i + 1, start_number, end_number);
		if (scanf_s("%d", &arr[i]) != 1)
		{
			printf("input failure\n");
			return 1;
		}

		if (!(arr[i] >= start_number && arr[i] <= end_number))
		{
			printf("Value out of range\n");
			i--;
			continue;
		}

		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				printf("Enter duplicate numbers\n");
				i--;
				continue;
			}
		}

		if (arr[i] == target)
		{
			printf("That's correct\n");
			printf("Total number of attempts : %d\n", i + 1);
			break;
		}
		else
		{
			if (i == SIZE - 1)
			{
				printf("It's failure\n");
				break;
			}

			if (arr[i] > target)
			{
				printf("DOWN\n");
				end_number = arr[i] - 1;
			}
			else
			{
				printf("UP\n");
				start_number = arr[i] + 1;
			}
		}
	}

}