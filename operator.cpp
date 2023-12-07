#include<iostream>

using namespace std;

    //&& = check if the condition are true (and)
    //|| = check if one of the two condition is true (or)
    // ! = reverse the logical state of its operand (not)

int main(){

    int temp;
    cout<< "Enter temperature :";
    cin >> temp;

    if (temp > 0 && temp < 30){
        cout << "The temperature is good.";

    }
    else{

        cout<<"The temperature is bad.";
    }
    return 0;
}