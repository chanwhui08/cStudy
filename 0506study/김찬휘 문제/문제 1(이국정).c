//정수 N이 주어진다.
//
//1부터 N까지의 모든 숫자 중에서 아래 조건을 만족하는 숫자를 오름차순으로 출력하라.
//
//[조건]
//
//어떤 숫자 X가 있을 때,
//
//X의 각 자리 숫자의 합을 구한다.
//X를 각 자리 숫자로 나누었을 때, 모두 나누어 떨어져야 한다.
//
//즉,
//
//자리수 합 = S
//각 자리 숫자 d에 대해
//→ X % d == 0 이어야 한다(단, d ≠ 0)
//
//이 두 조건을 모두 만족하는 숫자만 출력한다.
//
//[주의사항]
//숫자에 0이 포함된 경우는 무조건 제외(0으로 나눌 수 없음)
//자리수는 직접 분리해서 처리해야 한다(문자열 사용 금지)
//함수로 분리해서 구현할 것
//[예시 설명]
//
//예를 들어 X = 12 라면
//
//자리수 : 1, 2
//자리수 합 : 3
//12 % 1 == 0 ✔
//12 % 2 == 0 ✔
//
//→ 조건 만족 → 출력 대상
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#include <time.h>

void Discrimination(int inum, int* trigger, int* sum, int* f_zero)
{	
	int original = 0;
	int n = 0;
	
	original = inum;
	while (inum > 0)
	{	
		n = inum % 10;
		if (n == 0)
		{			
			*f_zero = 1;
			*trigger = 1;
			break;
		}		

		if (original % n != 0)
		{			
			*trigger = 1;
			break;
		}
		*sum = *sum + n;
		inum = inum / 10;		
	}
}

int main(void) 
{
	int inum;
	int sum = 0;
	int trigger = 0;
	int f_zero = 0;

	printf("Please enter the number you want to press : ");
	scanf("%d", &inum);

	Discrimination(inum, &trigger, &sum, &f_zero);

	if (f_zero != 0)
	{
		printf("This number contains zero\n");
	}
	
	if (trigger == 0)
	{
		printf("Conditions are met.\n");
		printf("That sum of number : %d\n", sum);
	}			
	else
		printf("The conditions are not met.\n");
}