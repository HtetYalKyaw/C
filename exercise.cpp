#include<iostream>
#include<ctime>

using namespace std;

int AttackHero(int HeroDamage, int &enemyHP, double herocritchance, double herocritMultiplier);
int AttackEnemy(int enemydamage, int &heroHP, double enemycritchance, double enemycritMultiplier);
int heroHeal(int &potionleft, int &potion,int &heroHP);
int main(){
    srand(time(0));
    char temp;
    int HeroDamage = 6;
    int enemydamage = 5;
    int enemyHP = 300;
    int heroHP = 100;
    int potionleft = 2;
    double herocritchance = 0.35; 
    double herocritMultiplier = 0.70;
    double enemycritchance = 0.20;
    double enemycritmultiplier = 0.60;
    int potion = 100 ;

 

    while(heroHP > 0 && enemyHP > 0){
        cout << "Attack(A) or Potion(P) :";
        cin >> temp;

        if (temp == 'a' || temp == 'A'){
            AttackHero(HeroDamage, enemyHP, herocritchance, herocritMultiplier);
        }else if (temp == 'p' || temp == 'P'){
            heroHeal(potionleft ,potion, heroHP);
        }else{
            cout << "Invalid Input !";
        }
        if (enemyHP <= 0){
            cout << "Congradulatiion, the enemy has perished !"<< endl;
            break;
        }

        AttackEnemy(enemydamage, heroHP, enemycritchance, enemycritmultiplier);

        if (heroHP <= 0){
            cout << "Game Over" << endl;
            break;
        }

    }
    return 0;

}
int AttackHero(int HeroDamage, int &enemyHP,double herocritchance, double herocritMultiplier){

    bool isCritical = (rand()/ static_cast<double>(RAND_MAX)) < herocritchance;

    int Damagedealt = HeroDamage;
        if (isCritical){
            Damagedealt *= (1 + herocritMultiplier);            
            cout << "You score Critical hit! " <<endl;
        }

    enemyHP = max(enemyHP - Damagedealt, 0);
    cout << "The Enemy HP is " << enemyHP << endl;

    return enemyHP;
}

int heroHeal(int &potionleft, int &potion, int &heroHP){
    if (potionleft > 0){
        int potion = 100;
        heroHP = min(heroHP+potion, 100) ;
        cout << "You Healed for "<< potion << " HP."<< endl;
        potionleft--;
        cout << potionleft<<" potion Left.";
    }else if(heroHP < 100){
        cout << "Your Hp is Full.";
    }else{
        cout << "No Potion Left.";
    }
    
    
    return heroHP;
}


int AttackEnemy(int enemydamage, int &heroHP, double enemycritchance, double enemycritMultiplier){

        bool isCritical = (rand()/ static_cast<double>(RAND_MAX)) < enemycritchance;

        int Damagedealt = enemydamage;

        if (isCritical){
            Damagedealt *= (1 + enemycritMultiplier);            
            cout << "Enemy score Critical hit! " <<endl;
        }

        heroHP = max(heroHP - Damagedealt, 0);
        cout << "Enemy hit You .Your Hp is " << heroHP <<'\n'<< endl;
        
        return heroHP;
}
