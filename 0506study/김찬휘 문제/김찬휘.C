#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)


void calc(int num);
void range(int num);


int main(void) {
	//1. 정수 N이 주어진다. 1부터 N까지 모든 숫자 중에서 아래 조건을 만족하는 숫자를 오름차순으로 출력하라
	//어떤 숫자 X가 있을 때, X의 각 자리의 합을 구한다. X를 각 자리 숫자로 나누었을 때, 모두 나누어 떨어져야 한다
	//0은 무조건 제외. 자리수는 직접 분리해서 처리해야 한다. 함수로 분리해서 구현할 것.

	int num;
	range(&num);
	calc(num);


	
	return 0;
}
void range(int* num) {
	printf("Input right number : ");
	scanf("%d", num);
	
	if(*num<1 || *num>100){
		range(num);

	}
}


void calc (int num) {
	for (int i = 1; i <= num; i++) {
		int orin = i;
		int flag = 0;
		int ber;
		int sum = 0;
		while (orin > 0) {
			ber = orin % 10;
			if (ber == 0) {
				break;
			}
			if (i % ber == 0) {
				orin /= 10;
				flag = 1;
				sum += ber;
			}
			else {
				flag = 0;
				break;
			}

		}
		if (flag == 1)
			printf("%d ", i);

	}
}

