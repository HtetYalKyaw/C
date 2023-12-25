#include<iostream>
using namespace std;

int main (){
    //size of = determine the size in bytes of a : variable , data type, class , objects

    string name = "Htet Yal Kyaw";
    double gpa =2.5;
    string students[] ={"Htet", "Simon", "Jack"};
    cout << sizeof(string) << "\n";
    cout << sizeof(students)/sizeof(string) <<" elements" << "\n";
    

}