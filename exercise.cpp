#include<iostream>
#include<ctime>

using namespace std;

int AttackHero(int HeroDamage, int &enemyHP, double critchance, double critMultiplier);
int AttackEnemy(int enemydamage, int &heroHP, double critchance, double critMultiplier);

int main(){
    srand(time(0));
    char temp;
    int HeroDamage = 5;
    int enemydamage = 5;
    int enemyHP = 100;
    int heroHP = 100;
    double critchance = 0.20; 
    double critMultiplier = 0.60;

    while(heroHP > 0 && enemyHP > 0){
        cout << "Enter A to attack :";
        cin >> temp;

        if (temp == 'a' || temp == 'A'){
            AttackHero(HeroDamage, enemyHP, critchance, critMultiplier);
        }else{
            cout << "Invalid Input !";
        }
        if (enemyHP <= 0){
            cout << "Congradulatiion, the enemy is perished !"<< endl;
            break;
        }

        AttackEnemy(enemydamage, heroHP, critchance, critMultiplier);

        if (heroHP <= 0){
            cout << "Game Over" << endl;
            break;
        }

    }
    return 0;

}
int AttackHero(int HeroDamage, int &enemyHP,double critchance, double critMultiplier){

    bool isCritical = (rand()/ static_cast<double>(RAND_MAX)) < critchance;

    int Damagedealt = HeroDamage;
        if (isCritical){
            Damagedealt *= (1 + critMultiplier);            
            cout << "You score Critical hit! " <<endl;
        }

    enemyHP = max(enemyHP - Damagedealt, 0);
    cout << "The Enemy HP is " << enemyHP << endl;

    return enemyHP;
}


int AttackEnemy(int enemydamage, int &heroHP, double critchance, double critMultiplier){

        bool isCritical = (rand()/ static_cast<double>(RAND_MAX)) < critchance;

        int Damagedealt = enemydamage;

        if (isCritical){
            Damagedealt *= (1 + critMultiplier);            
            cout << "Enemy score Critical hit! " <<endl;
        }

        heroHP = max(heroHP - Damagedealt, 0);
        cout << "You got hit .Your Hp is " << heroHP <<'\n'<< endl;
        
        return heroHP;
}
