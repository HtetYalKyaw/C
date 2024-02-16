#include<iostream>
#include<ctime>

using namespace std;

int AttackHero(int HeroDamage, int &enemyHP, double criticalChance, double criticalDamageMultiplier);

int main (){
    srand(time(0)); // Seed for random number generation

    char temp;
    int HeroDamage = 5;
    int enemyHP = 100;
    double criticalChance = 0.20;
    double criticalDamageMultiplier = 0.60;

    AttackHero(HeroDamage, enemyHP, criticalChance, criticalDamageMultiplier); 

    cout << "Congratulations, the enemy has perished." << endl;

    return 0;
}

int AttackHero(int HeroDamage, int &enemyHP, double criticalChance, double criticalDamageMultiplier){
    char temp;
    do {
        cout << "Enter A to attack: ";
        cin >> temp;
        if (temp == 'a' || temp == 'A') {
            // Check for critical hit
            bool isCritical = (rand() / static_cast<double>(RAND_MAX)) < criticalChance;

            // Calculate damage
            int damageDealt = HeroDamage;
            if (isCritical) {
                damageDealt *= (1 + criticalDamageMultiplier);
                cout << "Critical Hit! ";
            }

            // Apply damage to enemy
            enemyHP = max(enemyHP - damageDealt, 0);
            cout << "The Enemy HP is " << enemyHP << endl;
        } else {
            cout << "Please Enter a referred character." << endl;
        }
    } while (enemyHP > 0);

    return enemyHP;
}
