#include<iostream>
#include<ctime>
using namespace std;

int main(){
    int guess;
    int tries;
    int randomNum;

    srand(time(NULL));
    randomNum = (rand() % 6) + 1;

    do{
        cout << "Choose A number Between 1 - 6 to win awsome PRICES!!\n";

        if(!(cin >> guess)){
            cout << "Please Enter a number:" << endl;
            return 1;
        }
        tries++;

        if(guess == randomNum){
            cout << "Congradulations ! You are WINNER!!" << "\n" ;
        }else{
            cout << "Try again!\n";
        }
        
    }while(guess!=randomNum);
 cout << "Number of tries : " << tries << endl;
    return 0;
}
