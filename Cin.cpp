#include<iostream>
using namespace std;

    //cout << (insertion operator)
    //cin  >> (extraction operator)

int main() {

    string name ;
    int age;
    cout << "What is your name?" << "\n";
    getline(cin , name) ;

    cout << "How old are you?"<< "\n";
    cin >> age ;

    cout << "Your name is " << name << "." << "\n";
    cout << "You are " << age << " years old." ;


}