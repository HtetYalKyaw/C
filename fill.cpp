#include<iostream>
using namespace std;

int main(){

    //fill() = fill a range of elements with a specified value fill 
    //          (begins, end, value)
    const int SIZE = 10;
    string Food[SIZE];

    fill(Food, Food + (SIZE/2), "Pizza") ;
    fill( Food + (SIZE/2), Food + SIZE, "Humburger");

    for (string food : Food){
        cout << food << " " ;
    }
    return 0;
}