#include <iostream>
#include <string>
using namespace std;

class Character {
protected:
    string name;
    int hp;
    int attackPower;

public:
    Character(string name, int hp, int attackPower)
        : name(name), hp(hp), attackPower(attackPower) {}

    virtual void attack() {
        cout << name << "이(가) 기본 공격을 합니다. 데미지: "
             << attackPower << endl;
    }

    virtual void skill1() = 0;
    virtual void skill2() = 0;
    virtual void skill3() = 0;
    virtual void skill4() = 0;

    void showInfo() {
        cout << "이름: " << name << endl;
        cout << "체력: " << hp << endl;
        cout << "공격력: " << attackPower << endl;
    }

    virtual ~Character() {}
};

class Warrior : public Character {
public:
    Warrior(string name)
        : Character(name, 150, 20) {}

    void attack() override {
        cout << name << "이(가) 검으로 공격합니다. 데미지: "
             << attackPower << endl;
    }

    void skill1() override {
        cout << name << "의 스킬 1: 강타! 데미지: 35" << endl;
    }

    void skill2() override {
        cout << name << "의 스킬 2: 방패 돌진! 데미지: 45" << endl;
    }

    void skill3() override {
        cout << name << "의 스킬 3: 회전 베기! 데미지: 60" << endl;
    }

    void skill4() override {
        cout << name << "의 궁극기: 분노의 일격! 데미지: 100" << endl;
    }
};

class Mage : public Character {
public:
    Mage(string name)
        : Character(name, 100, 15) {}

    void attack() override {
        cout << name << "이(가) 마법 구체로 공격합니다. 데미지: "
             << attackPower << endl;
    }

    void skill1() override {
        cout << name << "의 스킬 1: 파이어볼! 데미지: 40" << endl;
    }

    void skill2() override {
        cout << name << "의 스킬 2: 아이스 스피어! 데미지: 50" << endl;
    }

    void skill3() override {
        cout << name << "의 스킬 3: 라이트닝! 데미지: 70" << endl;
    }

    void skill4() override {
        cout << name << "의 궁극기: 메테오! 데미지: 120" << endl;
    }
};

int main() {
    Warrior warrior("전사");
    Mage mage("마법사");

    cout << "=== 전사 정보 ===" << endl;
    warrior.showInfo();
    warrior.attack();
    warrior.skill1();
    warrior.skill2();
    warrior.skill3();
    warrior.skill4();

    cout << endl;

    cout << "=== 마법사 정보 ===" << endl;
    mage.showInfo();
    mage.attack();
    mage.skill1();
    mage.skill2();
    mage.skill3();
    mage.skill4();

    return 0;
}