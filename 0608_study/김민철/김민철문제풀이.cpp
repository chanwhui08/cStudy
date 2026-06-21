#include <iostream>
#include <string>
#include <random>
using namespace std;

int main() {
	int com[3];
	int user[3];

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis1(1, 9);
	uniform_int_distribution<int> dis2(0, 9);
	while (1)
	{
		com[0] = dis1(gen);
		com[1] = dis2(gen);
		com[2] = dis2(gen);
		if (com[0] != com[1] && com[0] != com[2] && com[1] != com[2])
			break;
	}
	while (1)
	{
		int str = 0;
		int ball = 0;
		cin >> user[0] >> user[1] >> user[2];
		if (user[0] == user[1] || user[0] == user[2] || user[1] == user[2])
		{
			cout << "중복 숫자는 입력할 수 없습니다." << endl;
			continue;
		}
		for (int i = 0;i < 3;i++)
		{
			for (int j = 0; j < 3;j++)
			{
				if (com[i] == user[j])
				{
					if (i == j)
						str++;
					else
						ball++;
				}
			}
		}
		if (str == 3)
		{
			cout << str << " Strike! You Win!" << endl;
			break;
		}
		else
		{
			cout << str << " Strike! " << ball << " Ball!" << endl;
		}

	}

	return 0;
}