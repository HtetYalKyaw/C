#include<iostream>
using namespace std;

int main(){

    //fill() = fill a range of elements with a specified value fill 
    //          (begins, end, value)

    string Food[10];

    fill(Food, Food + 10, "Pizza");

    for (string food : Food){
        cout << food << " " ;
    }
    return 0;
}