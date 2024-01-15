#include<iostream>
using namespace std;

int main (){
    //pointer = variable that stores a memory address of another variable 
    //          sometime it is easier to work with an address

    //& address of an operator
    //* deference of and operator



    string name = "Htet";
    int age = 25;
    string freePizzas [5] = {"Pizza1","Pizza2","Pizza3","Pizza4","Pizza5"};

    string *pName = &name;
    int *pAge = &age;
    string *pFreePizzas = freePizzas;

    cout << *pName << '\n';
    cout << *pAge << '\n';
    cout << *pFreePizzas << '\n';
    
    return 0;
}