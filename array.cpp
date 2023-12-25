#include<iostream>
using namespace std;

int main (){

    // double Prices[] = {2.55, 3.56, 5.99};

    // cout << Prices[0 ] << "\n";
    
    // double prices [5];

    // prices[0] = 1.00;
    // prices[1] = 3.56;
    // prices[2] = 5.66;
    // prices[3] = 4.55;
    // prices[4] = 3.88;
    //cout << prices [2] << "\n";
    string students[] = {"Htet Yal Kyaw", "Simon", "Jack", "Shin"};

    for(int i =0; i < sizeof(students)/sizeof(string); i++)
    {
        cout << students[i] << "\n";
    }


    return 0;

}