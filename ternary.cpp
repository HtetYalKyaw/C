#include<iostream>
using namespace std;

int main(){
    //ternary operator = replacement to if\else statements
    // condition ? expression 1: expression 2;

    /*int grade ;
    cout << "Enter Your Grade :";
    cin >> grade;*/
    //grade >= 40 ? cout << "Your Pass!." : cout << " You Fail!.";

    /*int number;
    cout << "Enter a Number :";
    cin >> number;
    number % 2 ? cout << "ODD!" : cout << "EVEN!";*/


    bool hungry = true ;

    //hungry ? cout << "Eat some Food!" : cout << " Go to sleep! ";
    cout << ( hungry ? "You are Hungry!": "You are full!");



    return 0;

}