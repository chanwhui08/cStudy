#include <iostream>
#include <string>

#include <stdlib.h> // rand
#include <time.h> // rand

#include <thread> // sleep
#include <chrono> // sleep
using namespace std;

class anich {
protected:
    string job;
    int attack;
    int armor;
    int hp;
    int mp;
    int targetNum;

public:
    anich() {
        job = "";
        attack = 100;
        armor = 30;
        hp = 3000;
        mp = 2500;
      
    }

    void set_data(string job, int attach, int armor, int hp, int mp, int targerNum)
    {
        this->job = job;
        this->attack = attack;
        this->armor = armor;
        this->hp = hp;
        this->mp = mp;
        this->targetNum = targetNum;
    }

    virtual void skill_HyperAwakeningSkill()
    {
        cout << "USE SKILL Hyper Awakening Skill\n";
    }
    virtual void skill_HyperAwakening()
    {
        cout << "USE SKILL Hyper Awakening\n";
    }
};

class BattleMaster : public anich {
public:
    BattleMaster() {
        set_data("BattleMaster", 70, 20, 3000, 2200 , 1);
    }
    void skill_HyperAwakeningSkill() override
    {
        cout << "BattleMaster use HyperAwakeningSkill\n";
        cout << "Skyward Kick >> Damage : " << attack * (rand() % 80) << "\n";
    }
    void skill_HyperAwakening() override
    {
        cout << "BattleMaster use HyperAwakening\n";
        cout << "Flash Rage Blow >> Damage : " << attack * (rand() % 150) << "\n";
    }
};

class Lancer : public anich {
public:
    Lancer() {
        set_data("Lancer", 80, 25, 4000, 2100, 2);
    }
    void skill_HyperAwakeningSkill() override
    {
        cout << "Lancer use HyperAwakeningSkill\n";
        cout << "Red Dragon Horn >> Damage : " << attack * (rand() % 70) << "\n";
    }
    void skill_HyperAwakening() override
    {
        cout << "Lancer use HyperAwakening\n";
        cout << "Starfall Blossom >> Damage : " << attack * (rand() % 160) << "\n";
    }
};

class Infighter : public anich {
public:
    Infighter() {
        set_data("Infighter", 85, 20, 4300, 0, 3);
    }
    void skill_HyperAwakeningSkill() override
    {
        cout << "Infighter use HyperAwakeningSkill\n";
        cout << "Blazing Bombardment >> Damage : " << attack * (rand() % 60) << "\n";
    }
    void skill_HyperAwakening() override
    {
        cout << "Infighter use HyperAwakening\n";
        cout << "Blazing Bombardment >> Damage : " << attack * (rand() % 140) << "\n";
    }
};

class Soulfist : public anich {
public:
    Soulfist() {
        set_data("Soulfist", 75, 20, 3700, 3000, 4);
    }
    void skill_HyperAwakeningSkill() override
    {
        cout << "Soulfist use HyperAwakeningSkill\n";
        cout << "Rule the World >> Damage : " << attack * (rand() % 50) << "\n";
    }
    void skill_HyperAwakening() override
    {
        cout << "Soulfist use HyperAwakening\n";
        cout << "Spirit Bomb >> Damage : " << attack * (rand() % 200) << "\n";
    }
};

int main(void)
{
    int count = 0;
    srand((unsigned int)time(NULL));

    anich anich;
    BattleMaster battleMaster;
    Lancer lancer;
    Soulfist soulfist;
    Infighter infighter;

    cout << "\n[anich]\n";
    anich.skill_HyperAwakening();
    anich.skill_HyperAwakeningSkill();

    cout << "\n[BattleMaster]\n";
    battleMaster.skill_HyperAwakening();
    battleMaster.skill_HyperAwakeningSkill();

    cout << "\n[Lancer]\n";
    lancer.skill_HyperAwakening();
    lancer.skill_HyperAwakeningSkill();

    cout << "\n[Soulfist]\n";
    soulfist.skill_HyperAwakening();
    soulfist.skill_HyperAwakeningSkill();

    cout << "\n[Infighter]\n";
    infighter.skill_HyperAwakening();
    infighter.skill_HyperAwakeningSkill();


    while (true)
    {
        cout << "\n";

        if (rand() % 2 == 1) {
            lancer.skill_HyperAwakeningSkill();
            this_thread::sleep_for(chrono::seconds(1));
            if (count >= 60)
                break;
            count++;
        }
        else
        {
            lancer.skill_HyperAwakening();
            this_thread::sleep_for(chrono::seconds(1));
            if (count >= 60)
                break;
            count++;
        }

        if (rand() % 2 == 1) {
            battleMaster.skill_HyperAwakeningSkill();
            this_thread::sleep_for(chrono::seconds(1));
            if (count >= 60)
                break;
            count++;
        }
        else
        {
            battleMaster.skill_HyperAwakening();
            this_thread::sleep_for(chrono::seconds(1));
            if (count >= 60)
                break;
            count++;
        }

        if (rand() % 2 == 1) {
            soulfist.skill_HyperAwakeningSkill();
            this_thread::sleep_for(chrono::seconds(1));
            if (count >= 60)
                break;
            count++;
        }
        else
        {
            soulfist.skill_HyperAwakening();
            this_thread::sleep_for(chrono::seconds(1));
            if (count >= 60)
                break;
            count++;
        }

        if (rand() % 2 == 1) {
            infighter.skill_HyperAwakeningSkill();
            this_thread::sleep_for(chrono::seconds(1));
            if (count >= 60)
                break;
            count++;
        }
        else
        {
            infighter.skill_HyperAwakening();
            this_thread::sleep_for(chrono::seconds(1));
            if (count >= 60)
                break;
            count++;
        }
    };

}