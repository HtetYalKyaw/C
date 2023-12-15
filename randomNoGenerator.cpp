#include<iostream>
#include<ctime> //for random 
using namespace std;

int main(){

    //pseudo-random = Not Truly random (but close)

    srand(time(NULL));
                       //^this place indicate the value of random numbers on dice
    int num  = (rand() % 6) + 1;
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;

    cout << num << ' '<< num1 << ' '<< num2 <<endl;


    return 0;

}