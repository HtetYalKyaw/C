#include<iostream>
#include<ctime>
using namespace std;

void board(char *spaces);
void playerMove(char *spaces , char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char computer, char player);
bool checktie(char *spaces);
int main(){
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'x';
    char computer = '0';
    bool running = true;

    board(spaces);
    while (running){
        playerMove(spaces, player);
        board(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }else if (checktie(spaces)){
            running = false;
            break;
        }

        computerMove(spaces, computer);
        board(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }else if (checktie(spaces)){
            running = false;
            break;
        }
        
    }

    cout << "Thanks for Playing !"<< '\n';


    return 0;

}
void board(char *spaces){
    cout << '\n';
    cout << "     |     |    "<< '\n';
    cout << "  "<< spaces[0]<<"  |  "<< spaces[1]<<"  |  "<< spaces[2]<<"    "<< '\n';
    cout << "_____|_____|____"<<'\n';
    cout << "     |     |    "<< '\n';
    cout << "  "<< spaces[3]<<"  |  "<< spaces[4]<<"  |  "<< spaces[5]<<"    "<< '\n';
    cout << "_____|_____|____"<<'\n';
    cout << "     |     |    "<< '\n';
    cout << "  "<< spaces[6]<<"  |  "<< spaces[7]<<"  |  "<< spaces[8]<<"    "<< '\n';
    cout << "     |     |    "<< '\n';
    cout << '\n';

}
void playerMove(char *spaces , char player){
    int number;
    do{
    cout << "Enter a number from 1 to 9 to play: ";
    cin >> number;
    number--;
    if (spaces[number] == ' '){
        spaces[number] = player;
        break; 
        }
    } while (!number > 0 || !number < 8);

}
void computerMove(char *spaces, char computer){
    int num;
    srand(time(NULL));

    while (true)
    {  num = rand () % 9;
        if (spaces[num] == ' '){
        spaces [num] = computer;
        break;
        }
    }
    
}
bool checkWinner(char *spaces, char player, char computer){

    if((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])){
        spaces[0] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])){
        spaces[3] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])){
        spaces[6] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])){
        spaces[0] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])){
        spaces[1] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])){
        spaces[2] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])){
        spaces[0] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])){
        spaces[2] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else{
        return false;
    }

    return true;
}
bool checktie(char *spaces){

    for(int i = 0; i < 9; i++){
        if(spaces[i]==' '){
            return false;
        }
    }
    cout << "IT'S A TIE!";
    return true;
}