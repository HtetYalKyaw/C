#include<iostream>
#include<ctime>

using namespace std;

int AttackHero(int HeroDamage, int &enemyHP, double herocritchance, double herocritMultiplier);
int AttackEnemy(int enemydamage, int &heroHP, double enemycritchance, double enemycritmultiplier);
int heroHeal(int &potionleft, int &heroHP);
void Encounter(int &HeroDamage, int &heroHP, double herocritchance, double herocritMultiplier, int enemydamage, int &enemyHP, double enemycritchance, double enemycritmultiplier, int &potionleft);

int main() {
    srand(time(0));
    char temp;
    int HeroDamage = 5;
    int enemydamage = 5;
    int enemyHP = 200;
    int heroHP = 100;
    int potionleft = 1;

    while (enemyHP > 0) {
        cout << "You stand at a crossroad! Choose Left (L) or Right (R): ";
        cin >> temp;

        if (temp == 'l' || temp == 'L') {
            cout << "You choose Left." << endl;
            Encounter(HeroDamage, heroHP, 0.35, 0.70, enemydamage, enemyHP, 0.20, 0.60, potionleft);
        } else if (temp == 'r' || temp == 'R') {
            cout << "You choose Right." << endl;
            Encounter(HeroDamage, heroHP, 0.35, 0.70, enemydamage, enemyHP, 0.20, 0.60, potionleft);
        } else {
            cout << "Invalid Input." << endl;
        }
    }

    cout << "All enemies have been defeated. You win!" << endl;

    return 0;
}

void Encounter(int &HeroDamage, int &heroHP, double herocritchance, double herocritMultiplier, int enemydamage, int &enemyHP, double enemycritchance, double enemycritmultiplier, int &potionleft) {
    char encounter = rand() % 4 + 1;

    switch (encounter) {
        case 1:
            cout << "Nothing happened! Your journey continues." << endl;
            break;
        case 2:
            cout << "You found a chest. You opened it and received a damage buff." << endl;
            HeroDamage++;
            break;
        case 3:
            cout << "You found a chest. You opened it and received a potion." << endl;
            potionleft++;
            break;
        case 4:
            cout << "You have encountered an enemy." << endl;
            while (heroHP > 0 && enemyHP > 0) {
                cout << "Attack (A) or Potion (P): ";
                cin >> encounter;

                if (encounter == 'a' || encounter == 'A') {
                    AttackHero(HeroDamage, enemyHP, herocritchance, herocritMultiplier);
                } else if (encounter == 'p' || encounter == 'P') {
                    heroHeal(potionleft, heroHP);
                } else {
                    cout << "Invalid Input!" << endl;
                }

                if (enemyHP <= 0) {
                    cout << "Congratulations, the enemy has perished!" << endl;
                    break;
                }

                AttackEnemy(enemydamage, heroHP, enemycritchance, enemycritmultiplier);

                if (heroHP <= 0) {
                    cout << "Game Over" << endl;
                    break;
                }
            }
            break;
        default:
            cout << "Unexpected encounter!" << endl;
            break;
    }
}

int AttackHero(int HeroDamage, int &enemyHP, double herocritchance, double herocritMultiplier) {
    bool isCritical = (rand() / static_cast<double>(RAND_MAX)) < herocritchance;
    int Damagedealt = HeroDamage;

    if (isCritical) {
        Damagedealt *= (1 + herocritMultiplier);
        cout << "You scored a Critical hit!" << endl;
    }

    enemyHP = max(enemyHP - Damagedealt, 0);
    cout << "The Enemy HP is " << enemyHP << endl;

    return enemyHP;
}

int heroHeal(int &potionleft, int &heroHP) {
    if (potionleft > 0) {
        int potion = 100;
        heroHP = min(heroHP + potion, 100);
        cout << "You healed for " << potion << " HP." << endl;
        potionleft--;
        cout << potionleft << " potions left." << endl;
    } else {
        cout << "You have no potions left." << endl;
    }

    return heroHP;
}

int AttackEnemy(int enemydamage, int &heroHP, double enemycritchance, double enemycritmultiplier) {
    bool isCritical = (rand() / static_cast<double>(RAND_MAX)) < enemycritchance;
    int Damagedealt = enemydamage;

    if (isCritical) {
        Damagedealt *= (1 + enemycritmultiplier);
        cout << "The enemy scored a Critical hit!" << endl;
    }

    heroHP = max(heroHP - Damagedealt, 0);
    cout << "The enemy hit you. Your HP is " << heroHP << endl;

    return heroHP;
}
