#include<iostream>

using namespace std;

class Pizza{
    public:
        string topping1;
        string topping2;
        string topping3;
    Pizza(string topping1){
        this->topping1 = topping1;
    }
    Pizza(string topping1, string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;

    }
    Pizza(string topping1,string topping2, string topping3){
        this->topping1 = topping1;
        this->topping2 = topping2;
        this->topping3 = topping3;

    }
};
int main (){

    Pizza pizza1("pepperoni");

    cout << pizza1.topping1 << endl;

    return 0;
}