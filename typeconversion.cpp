#include<iostream>
using namespace std;

int main(){
    //type conversion = converting a value of one data type to another 
    // implicit = automatic 
    // Explicit = Precede value with new data type 

    //double x = 3.14;
    //double x = (int) 3.14;

    //char x = 100;
    //cout << (char) 100;

    double correct = 7.5;
    int question = 10;
    double score = (double)correct/question*100;

    cout << score <<"%";


    //cout<< x ;


}