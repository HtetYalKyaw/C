#include<iostream>
#include<ctime>

using namespace std;

int AttackHero(int HeroDamage, int &enemyHP);
// char AttackEnemy(){};
// int HeroCrit(){};
// int enemyCrit(){};


int main (){
    char temp;
    int HeroDamage=5;
    int enemyHP=100;

    AttackHero(HeroDamage,enemyHP); 

    cout << "congradulation , the enemy has perished."<<endl;


    return 0;

}
int AttackHero(int HeroDamage, int &enemyHP){
    char temp;
    do{
        cout << "Enter A to attack :";
        cin >>temp;
        if(temp == 'a' || temp == 'A'){
            enemyHP = enemyHP - HeroDamage;
            cout << "The Enemy HP is "<< enemyHP <<endl;
        }else{
            cout << "Please Enter a referred character .";
        }

    }while(enemyHP > 0);


    return enemyHP;
}


// char AttackEnemy(){

// }
// int HeroCrit(){

// }
// int enemyCrit(){

// }