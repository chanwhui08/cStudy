//컴퓨터가 1부터 100사이의 랜덤 숫자를 하나 만든다. 
//사용자는 최대 7번 까지 숫자를 입력해서 맞힌다. 
// 조건
//1. 입력값이 정답보다 작으면 up
//2. 입력값이 정답보다 크면 down
//3. 맞히면 즉시 종료
//4. 7번 안에 못 맞히면 실패
//5. 범위 밖 숫자는 횟수에 포함하지 않고 다시 입력 받는다. 
//6. 같은 숫자를 다시 입력하면 횟수에 포함하지 않는다.

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#include <time.h>

int main(void)
{
	srand((unsigned int)time(NULL));
	int ran = rand() % 100 + 1;
	int count = 0;
	int unum;
	int stop = 0;
	int arr[7] = { 0 };
	int i = 0;
	

	while (count < 7 && stop == 0)
	{
		printf("input number : ");
		scanf("%d", &unum);

		if (unum > 100 || unum < 1)
		{
			printf("number is out of range\n");
			continue;
		}
					
		int dup = 0;

		for (i = 0; i < count; i++)
		{
			if (arr[i] == unum)
			{
				dup = 1;
				break;
			}
		}
		
		if (dup == 1)
		{
			printf("This is the number you entered.\n");
			continue;
		}

		arr[count] = unum;
		count++;

		if (ran > unum)
		{
			printf("Up!\n");			
		}
		else if (ran < unum)
		{
			printf("Down!\n");			
		}
		else
		{
			printf("Correct!! You win!\n");
			printf("%d try", count);
			stop = 1;
			break;
		}
		
		if (count == 7 && stop == 0)
		{
			printf("You fail...");
		}
		
		
	}
	return 0;
}