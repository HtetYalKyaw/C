#include<iostream>
using namespace std;

    //cout << (insertion operator)
    //cin  >> (extraction operator)

int main() {

    string name ;
    int age;

    cout << "How old are you?"<< "\n";
    cin >> age ;

    cout << "What is your name?" << "\n"; // getline function gets all the characters
    getline(cin >> ws, name) ;  /*since getline function dont work before another cin function
                                we put "cin >> ws"*/

    cout << "Your name is " << name << "." << "\n";
    cout << "You are " << age << " years old." ;

    return 0;
}