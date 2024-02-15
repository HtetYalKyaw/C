#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed for random number generation

    int heroDamage = 5;
    int enemyHP = 100;
    double criticalChance = 0.20;
    double criticalDamageMultiplier = 0.60;

    while (enemyHP > 0) {
        // Check for critical hit
        bool isCritical = (rand() / static_cast<double>(RAND_MAX)) < criticalChance;

        // Calculate damage
        int damageDealt = heroDamage;
        if (isCritical) {
            damageDealt *= (1 + criticalDamageMultiplier);
            cout << "Critical Hit! ";
        }

        // Apply damage to enemy
        enemyHP -= damageDealt;

        // Ensure enemy HP doesn't go below 0
        if (enemyHP < 0)
            enemyHP = 0;

        // Display result
        cout << "Hero attacks for " << damageDealt << " damage. Enemy HP: " << enemyHP << endl;
    }

    cout << "Enemy defeated!" << endl;

    return 0;
}
