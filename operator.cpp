#include<iostream>

using namespace std;

    bool isSunny(string weather){
        return weather == "Sunny";
    }

    //&& = check if the condition are true (and)
    //|| = check if one of the two condition is true (or)
    // ! = reverse the logical state of its operand (not)

int main(){

    string weather;
    int temp;
    cout << "Enter temperature :";
    cin >> temp;
    cout << "Is the weather Sunny or Rainy ?";
    cin >> weather;

    if (temp > 0 && temp < 30){
        cout << "The temperature is good.\n";

    }
    else{

        cout<<"The temperature is bad.\n";
    }

    if (weather == "Sunny" || weather == "Rainy"){
        if (isSunny(weather))
        cout << "The weather is good. Go outside!";
    }else{
        cout << "Stay Inside!";
    }
    return 0;
}