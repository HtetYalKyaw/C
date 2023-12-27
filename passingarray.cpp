#include<iostream>
using namespace std;

double getTotal(double Prices[], int size);
int main(){

    double Prices [] = {105.66, 605.55, 1.25, 4.56};
    int size = sizeof(Prices)/sizeof(double);
    double Total = getTotal(Prices, size);

    cout << "$" << Total << "\n";
    return 0;
}

double getTotal(double Prices[], int size)
{   double Total = 0;
    for (int i =0; i < size; i++)
    {
        Total += Prices[i];

    }
    return Total;
} 