#include<iostream>
#include<cmath>
using namespace std;

int main(){

    double a;
    double b;
    double c;

    cout << "Enter input for A : " << a ;
    cin >> a;

    cout << "Enter input for B : " << b ;
    cin >> b;

    c = sqrt(pow(a , 2)+ pow(b , 2));

    cout << "Side C: " << c ;
    
    return 0;
}