#include<iostream>
#include<ctime>

using namespace std;

int AttackHero(int HeroDamage, int enemyHP, double critchance, double critMultiplier);
// char AttackEnemy(){};
// int HeroCrit(){};
// int enemyCrit(){};


int main (){
    srand(time(0));
    char temp;
    int HeroDamage;
    int enemydamage;
    int enemyHP;
    int heroHP;
    double critchance; 
    double critMultiplier;

    while(heroHP > 0 && enemyHP > 0){
        cout << "Enter A to attack :" << endl;
        cin >> temp;

        if (temp == 'a' || temp == 'A'){
            AttackHero(5, 100, 0.35, 0.60);
        }else{
            cout << "Invalid Input !";
        }
        if (enemyHP <= 0){
            cout << "Congradulatiion, the enemy is perished !"<< endl;
            break;
        }

        AttackEnemy(5, 100, 0.20, 0.60);

        if (heroHP <= 0){
            cout << "Game Over" << endl;
            break;
            
        }

    }


    return 0;

}
int AttackHero(int HeroDamage, int enemyHP,double critchance, double critMultiplier){
    char temp;


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


int AttackEnemy(int enemydamage, int heroHP, double critchance, double critMultiplier){

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
