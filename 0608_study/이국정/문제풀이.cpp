//숫자압축 출력 프로그램
// 정수 7개를 입력받아 배열에 저장한다
// 연속 해서 같은 숫자가 나오면 숫자와 반복 횟수를 압축해서 출력하시오

#include <iostream>
using namespace std;
#include <time.h>

//int main(void)
//{
//	int arr[7];
//	int count = 1;
//	
//	cout << "input 7 numbers : ";
//
//	for (int i = 0; i < 7; i++)
//	{
//		cin >> arr[i];
//	}
//
//	for (int i = 1; i < 7; i++)
//	{
//		if (arr[i] == arr[i - 1])
//			count++;
//		else
//		{
//			cout << arr[i - 1] << "(" << count << ")";
//			count = 1;
//		}
//	}
//	cout << arr[6] << "(" << count << ")";
//
//	return 0;
//}

//컴퓨터가 1부터 100사이의 랜덤 숫자를 하나 만든다. 
//사용자는 최대 7번 까지 숫자를 입력해서 맞힌다. 
// 조건
//1. 입력값이 정답보다 작으면 up
//2. 입력값이 정답보다 크면 down
//3. 맞히면 즉시 종료
//4. 7번 안에 못 맞히면 실패
//5. 범위 밖 숫자는 횟수에 포함하지 않고 다시 입력 받는다. 
//6. 같은 숫자를 다시 입력하면 횟수에 포함하지 않는다.

int main(void)
{
	srand((unsigned int)time(NULL)); 
	int ran = rand() % 100 + 1;
	int count = 0;
	int user;
	int stop = 0;
	int arr[7];
	int i = 0;
	int duplication = 0;

	while (count < 7 && stop == 0)
	{
		cout << "input number : ";
		cin >> user;
		duplication = 0;

		if (user > 100 || user < 1)
		{
			cout << "number is out of range" << endl;
			continue;
		}

		for (i = 0; i < count; i++)
		{
			if (arr[i] == user)
			{				
				duplication = 1;
				break;
			}		
		}

		if (duplication == 1)
		{
			cout << "This is number that has already been entered" << endl;
			continue;
		}
			
		arr[count] = user;
		count++;

		if (ran > user)
		{
			cout << "Up!" << endl;
		}
		else if (ran < user)
		{
			cout << "Down" << endl;
		}
		else
		{
			cout << "Correct!! You win" << "\n";
			cout << "You " << count << " tries";
			stop = 1;
			break;
		}

		if (count == 7 && stop == 0)
		{
			cout << "You fall..." << "\n";
			cout << "The correct answer was " << ran;
		}	
	}
	return 0;
}