
//숫자압축 출력 프로그램
// 정수 7개를 입력받아 배열에 저장한다
// 연속 해서 같은 숫자가 나오면 숫자와 반복 횟수를 압축해서 출력하시오

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#include <time.h>

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
		if (arr[i] == arr[i-1])
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