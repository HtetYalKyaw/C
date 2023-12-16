#include<iostream>
#include<ctime>
using namespace std;

int main(){

    srand(time(0)) ;
    int randomNum = rand() % 5 +1;

    switch (randomNum)
    {
        case 1 : cout << "You win a Macbook!";
                break;
        case 2 : cout << "You win a T-shirt!";
                break;
        case 3 : cout << "You win a Mouse-pad!";
                break;
        case 4 : cout << "You win a pencil!";
                break;
        case  5: cout << "You win nothing!";
                break;
    }
    return 0;
}