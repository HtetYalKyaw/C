#include<iostream>
using namespace std;

int main(){

    /*string name;

    while(name.empty()){
    cout << "Please Enter Your Name: ";
    getline(cin, name); 

    }
    cout << "Hello, " << name << endl;
    return 0;*/

    string name;

    do{
        cout << "Please Enter Your Name: ";
        getline(cin, name);

    }while (name.empty());
    
    cout << "Hello," << name << endl;
    return 0;

}