#include<iostream>
#include<ctime>

using namespace std;

int AttackHero(int HeroDamage, int &enemyHP, double criticalChance, double criticalDamageMultiplier);
int AttackEnemy(int EnemyDamage, int &heroHP, double criticalChance, double criticalDamageMultiplier);

int main (){
    srand(time(0)); // Seed for random number generation

    char temp;
    int HeroDamage = 5;
    int heroHP = 100;
    int EnemyDamage = 5;
    int enemyHP = 100;
    double criticalChance = 0.20;
    double criticalDamageMultiplier = 0.60;

    while (heroHP > 0 && enemyHP > 0) {
        cout << "Press 'A' for hero to attack: ";
        cin >> temp;
        if (temp == 'a' || temp == 'A') {
            AttackHero(HeroDamage, enemyHP, criticalChance, criticalDamageMultiplier); 
        } else {
            cout << "Invalid input. Please try again." << endl;
        }

        if (enemyHP <= 0) {
            cout << "Congratulations, the enemy has perished." << endl;
            break;
        }

        AttackEnemy(EnemyDamage, heroHP, criticalChance, criticalDamageMultiplier); 

        if (heroHP <= 0) {
            cout << "Hero has been defeated. Game over." << endl;
            break;
        }
    }

    return 0;
}

int AttackHero(int HeroDamage, int &enemyHP, double criticalChance, double criticalDamageMultiplier){
    // Check for critical hit
    bool isCritical = (rand() / static_cast<double>(RAND_MAX)) < criticalChance;

    // Calculate damage
    int damageDealt = HeroDamage;
    if (isCritical) {
        damageDealt *= (1 + criticalDamageMultiplier);
        cout << "Hero Critical Hit! ";
    }

    // Apply damage to enemy
    enemyHP = max(enemyHP - damageDealt, 0);
    cout << "Enemy HP: " << enemyHP << endl;

    return enemyHP;
}

int AttackEnemy(int EnemyDamage, int &heroHP, double criticalChance, double criticalDamageMultiplier){
    // Check for critical hit
    bool isCritical = (rand() / static_cast<double>(RAND_MAX)) < criticalChance;

    // Calculate damage
    int damageDealt = EnemyDamage;
    if (isCritical) {
        damageDealt *= (1 + criticalDamageMultiplier);
        cout << "Enemy Critical Hit! ";
    }

    // Apply damage to hero
    heroHP = max(heroHP - damageDealt, 0);
    cout << "Hero HP: " << heroHP << endl;

    return heroHP;
}
