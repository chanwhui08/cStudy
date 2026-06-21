// #include <iostream>
// #include <string.h>

// #include <stdlib.h> // rand
// #include <time.h> // rand

// #include <thread> // sleep
// #include <chrono> // sleep
// using namespace std;

// class champion {	// 부모 클래스
// protected: 			// 3개의 변수 선언
// 	string name;
// 	int attack;
// 	int armor;
	
// public:			
// 	static int champion_count;			//챔피언을 생성할 떄마다, 수를 세기 위해 변수 선언
	
// 	champion(){						//객체로 선언
// 		name = "";
// 		attack = 100;
// 		armor = 30;
// 		champion_count++;
// 	}

// 	void set_data(string _name, int _attack, int _armor) {
// 		name = _name;
// 		attack = _attack;
// 		armor = _armor;
// 	}
	
// 	virtual ~champion() {		//abstract와는 또 다른 개념
// 		champion_count--;
// 	}

// 	virtual void skill_Q()		//overriding 하기 위한 관례적 표현
// 	{
// 		cout << "USE SKILL Q\n";
// 	}
// 	virtual void skill_W()
// 	{
// 		cout << "USE SKILL W\n";
// 	}
// 	virtual void skill_E()
// 	{
// 		cout << "USE SKILL E\n";
// 	}
// 	virtual void skill_R()
// 	{
// 		cout << "USE SKILL R\n";
// 	}
// };

// class isreal : public champion {
// public:
// 	isreal() {
// 		set_data("isreal", 70, 20);
// 	}
// 	void skill_Q() override
// 	{
// 		cout << "mystic arrow >> Damage : " << attack * (rand() % 80) << "\n";
// 	}
// 	void skill_W() override
// 	{
// 		cout << "flow of essence >> Damage : " << attack * (rand() % 50) << "\n";
// 	}
// 	void skill_E() override
// 	{
// 		cout << "vision movement >> Damage : " << attack * (rand() % 30) << "\n";
// 	}
// 	void skill_R() override
// 	{
// 		cout << "precise strike >> Damage : " << attack * (rand() % 300) << "\n";
// 	}
// };

// class smolder : public champion {
// private:
// 	int stack_point;
// public:
// 	smolder() {
// 		stack_point = 0;
// 		set_data("smolder", 65, 25);
// 	}
// 	void skill_Q() override
// 	{
// 		cout << "super powerful flame breath >> Damage : " << (attack + stack_point) * (rand() % 70) << "\n";
// 		if (rand() % 2 == 1)
// 		{
// 			stack_point++;
// 			cout << "stack point plus SP : " << stack_point << "\n";
// 		}
// 	}
// 	void skill_W() override
// 	{
// 		cout << "aechwi! >> Damage : " << attack * (rand() % 30) << "\n";
// 	}
// 	void skill_E() override
// 	{
// 		cout << "fluttering : peolleogpeolleog!! \n";
// 	}
// 	void skill_R() override
// 	{
// 		cout << "mommy! >> Damage : " << attack * (rand() % 300) << "\n";
// 	}
// };

// int champion::champion_count = 0;	// ::은 부모클래스의 상속자 변수를 초기화하기 위해서 사용한다.

// int main(void)
// {
// 	srand((unsigned int)time(NULL));
// 	int count = 0;

// 	champion _champion;			
// 	isreal _isreal;
// 	smolder _smolder;

// 	cout << "Champion Count : " << champion::champion_count << "\n\n";

// 	cout << "\n[Champion]\n";
// 	_champion.skill_Q();
// 	_champion.skill_W();
// 	_champion.skill_E();
// 	_champion.skill_R();

// 	cout << "\n[Ezreal]\n";
// 	_isreal.skill_Q();
// 	_isreal.skill_W();
// 	_isreal.skill_E();
// 	_isreal.skill_R();

// 	cout << "\n[Smolder]\n";
// 	_smolder.skill_Q();
// 	_smolder.skill_W();
// 	_smolder.skill_E();
// 	_smolder.skill_R();

// 	while (true)
// 	{
// 		_smolder.skill_Q();
// 		this_thread::sleep_for(chrono::seconds(1)); // 1초 정지 코드
// 		if (count >= 60)
// 			break;
// 		count++;
// 	}

// 	return 0;
// }