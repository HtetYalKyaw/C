#include<iostream>
using namespace std;

int main(){

    int age;
    cout << "Enter your Age: " << age ;
    cin >> age;
    if (age>=100){
        cout << "You should die";
    }
    else if(age <= 18){
        cout << "Your are Expired!!";
    }   
    else if(age < 0) {
        cout << "Kys dumbass!!";
    }

    else{
        cout << "You are young!!";
    }

    return 0;

}