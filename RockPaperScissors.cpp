#include<iostream>
#include<ctime>
using namespace std;

char getUserChoice();
char getComputerchoice();
void showchoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    cout << "Your choice is " ;
    showchoice(player);

    computer = getComputerchoice();
    cout << "Computer choice is ";
    showchoice(computer);

    chooseWinner(player, computer);

    return 0;

}

char getUserChoice(){
    char player;
    cout << "Rock Paper Sicssors Game!\n";

    do{
    cout << "Choose One Of the Following!\n";
    cout << "****************************\n";
    cout << "'r' for Rocks\n";
    cout << "'p' for Paper\n";  
    cout << "'s' for Scissors\n"; 
    cin >> player;

    }while(player !=  'r' && player != 's' && player != 'p');
    
    return player;

}
char getComputerchoice(){
    
    srand(time(0));
    int num = (rand()% 3) + 1;

    switch (num)
    {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';

    }

    return 0;
}
void showchoice(char choice){
    switch (choice)
    {
    case 'r':
        cout << "Rocks.\n";
        break;
    case 'p':
        cout << "Paper.\n";
        break;
    case 's':
        cout << "Scissors.\n";
        break;

    default: cout << "Invalid Input"<< "\n";
        break;
    }

}
void chooseWinner(char player, char computer){
    switch (player)
    {
    case 'r': if(computer == 'r'){
        cout << "It is A tie ";
        }else if (computer == 's' ){
        cout << "You Win !";
        }else{
        cout << "You lose";
        }
        break;
    case 'p': if(computer == 'p'){
        cout << "It is A tie ";
        }else if (computer == 'r' ){
        cout << "You Win !";
        }else{
        cout << "You lose";
        }
        break;
    case 's': if(computer == 's'){
        cout << "It is A tie! ";
        }else if (computer == 'p' ){
        cout << "You Win !";
        }else{
        cout << "You lose";
        }
        break;

    }

}