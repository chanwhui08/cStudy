#include <iostream>
#include <string>

using namespace std;


class magician
{
public:
	int 마력;
	int 무기마법력;
	int 주스텟;
	int 부스텟;

	virtual void setting()
	{
		마력 = 39;
		무기마법력 = 25;
		주스텟 = 39;
		부스텟 = 13;
	}

	virtual double 기본공격()
	{
		return ((마력 + 무기마법력) * (마력 + 무기마법력) / 1000 + (마력 + 무기마법력)) / 30 + 주스텟 / 200;
	}
	virtual double 스킬계수()
	{
		return 20.0;
	}
	virtual void attack()
	{
		double 데미지 = 기본공격() * 스킬계수();
		cout << "에너지볼트데미지 : " << 데미지 << endl;
	}
};

class archmageFP : public magician
{
public:
	virtual void setting()
	{
		마력 = 129;
		무기마법력 = 44;
		주스텟 = 129;
		부스텟 = 33;
	}

	virtual double 스킬계수() override
	{
		return 33.0;
	}
	void attack() override
	{
		double 데미지 = 기본공격() * 스킬계수();
		cout << "파이어애로우데미지 : " << 데미지 << endl;
	}
};

class archmageSC : public magician
{
public:
	virtual void setting()
	{
		마력 = 129;
		무기마법력 = 44;
		주스텟 = 129;
		부스텟 = 33;
	}
	virtual double 스킬계수() override
	{
		return 30.0;
	}
	void attack() override
	{
		double 데미지 = 기본공격() * 스킬계수();
		cout << "콜드빔데미지 : " << 데미지 << endl;
	}
};

class cleric : public magician
{
public:
	virtual void setting()
	{
		마력 = 129;
		무기마법력 = 44;
		주스텟 = 129;
		부스텟 = 33;
	}
	virtual double 스킬계수() override
	{
		return 22.0;
	}
	void attack() override
	{
		double 데미지 = 기본공격() * 스킬계수();
		cout << "홀리애로우데미지 : " << 데미지 << endl;
	}
};

int main()
{
	magician _magician;
	archmageFP _archmageFP;
	archmageSC _archmageSC;
	cleric _cleric;

	_magician.setting();
	_archmageFP.setting();
	_archmageSC.setting();
	_cleric.setting();

	_magician.attack();
	_archmageFP.attack();
	_archmageSC.attack();
	_cleric.attack();

	return 0;
}