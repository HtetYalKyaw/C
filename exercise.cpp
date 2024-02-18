#include<iostream>
#include<ctime>

using namespace std;

int AttackHero(int HeroDamage, int &enemyHP, double herocritchance, double herocritMultiplier);
int AttackEnemy(int enemydamage, int &heroHP, double enemycritchance, double enemycritmultiplier);
int heroHeal(int &potionleft, int &heal,int &heroHP);
void Encounter(int &HeroDamage, int &heroHP, double herocritchance, double herocritMultiplier,int enemydamage,int &enemyHP , double enemycritchance, double enemycritmultiplier,int &potionleft, int &heal);

int main(){
    srand(time(0));
    char temp;
    int HeroDamage = 5;
    int enemydamage = 5;
    int enemyHP = 200;
    int heroHP = 100;
    int potionleft = 1;
    double herocritchance = 0.35; 
    double herocritMultiplier = 0.70;
    double enemycritchance = 0.20;
    double enemycritmultiplier = 0.60;
    int heal = 100 ;

    
    while(enemyHP > 0 ){
    cout << "You stand at a crossroad ! Choose Left (L) or Right (R) :";
    cin >> temp;

    if (temp == 'l' || temp == 'L' ){
        cout << "You choose Left ." << endl;
        Encounter(HeroDamage, heroHP, herocritchance, herocritMultiplier, enemydamage, enemyHP ,enemycritchance, enemycritmultiplier, potionleft, heal);
    }else if (temp == 'r' || temp == 'R'){
        cout << "You choose Right ."<< endl;
        Encounter(HeroDamage, heroHP, herocritchance, herocritMultiplier, enemydamage, enemyHP , enemycritchance, enemycritmultiplier, potionleft, heal);
    }else{
        cout << "Invalid Input ."<<endl;
    }

    }
    cout << "All Enemy has perished . You saved the world."<< endl;

    return 0;

}
void Encounter(int &HeroDamage, int &heroHP, double herocritchance, double herocritMultiplier,int enemydamage,int &enemyHP , double enemycritchance, double enemycritmultiplier,int &potionleft, int &heal){

    char encounter = rand() % 4 + 1 ;
    char temp;
        switch (encounter)
        {   
        case 1: cout << "Nothing Happened ! Your Journey continue !"<< endl;
            break;
        case 2: cout << "You found a chest . You opened and received a damage buff. " << endl;
            HeroDamage++;
            break;
        case 3: cout << "You found a chest . You opened and received a potion. " << endl;
            potionleft++;
            break;
        case 4: cout << "YOU HAVE ENCOUNTERED AN ENEMY. " << endl; 
            while(heroHP > 0 && enemyHP > 0){
                cout << "Attack( A ) or Potion( P ) :";
                cin >> temp;

                if (temp == 'a' || temp == 'A'){
                    AttackHero(HeroDamage, enemyHP, herocritchance, herocritMultiplier);
                }else if (temp == 'p' || temp == 'P'){
                    heroHeal(potionleft ,heal, heroHP);
                }else{
                    cout << "Invalid Input !";
                }
                if (enemyHP <= 0){
                    cout << "Congradulatiion, the enemy has perished !"<< endl;
                }
                    AttackEnemy(enemydamage, heroHP, enemycritchance, enemycritmultiplier);

                if (heroHP <= 0){
                    cout << "Game Over" << endl;
                break;
                }

            }break;

            default: break;
        }
    

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

int heroHeal(int &potionleft, int &heal, int &heroHP){
    if (potionleft > 0){
        int heal = 100;
        heroHP = min(heroHP+heal, 100) ;
        cout << "You Healed for "<< heal << " HP."<< endl;
        potionleft--;
        cout << potionleft<<" potion Left.";
    }else if(heroHP < 100){
        cout << "Your Hp is Full.";
    }else{
        cout << "No Potion Left.";
    }
    
    
    return heroHP;
}


int AttackEnemy(int enemydamage, int &heroHP, double enemycritchance, double enemycritmultiplier){

        bool isCritical = (rand()/ static_cast<double>(RAND_MAX)) < enemycritchance;

        int Damagedealt = enemydamage;

        if (isCritical){
            Damagedealt *= (1 + enemycritmultiplier);            
            cout << "Enemy score Critical hit! " <<endl;
        }

        heroHP = max(heroHP - Damagedealt, 0);
        cout << "Enemy hit You .Your Hp is " << heroHP <<'\n'<< endl;
        
        return heroHP;
}



