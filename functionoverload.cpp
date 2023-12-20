#include<iostream>
using namespace std;

void BakePizza(){
    cout<< "Here is your pizza!" << endl;
}
void BakePizza(string topping1){
    cout<< "Here is your" << topping1 << "pizza!"<< endl;
}
void BakePizza(string topping1, string topping2){
    cout<< "Here is your" << topping1 <<" and " <<topping2 << "pizza!"<< endl;
}
int main(){

    BakePizza(" Pepperroni ", " Mushroom ");

    return 0;
}