#include<iostream>

using namespace std;

int getDigit(const int number);
int sumOddDigit(const string Cardnumber);
int sumEvenDigit(const string Cardnumber);
int main(){
    string Cardnumber;
    int result = 0;

    cout << "Enter A Credict Card Number :" ;
    cin >> Cardnumber;

    result = sumEvenDigit(Cardnumber) + sumOddDigit (Cardnumber);

    if (result % 10 == 0 ){
        cout << Cardnumber << " is Valid."<< '\n';
    }else{
        cout << Cardnumber << " is Invalid." << '\n';
    }

}
int getDigit(const int number){
     
    return number % 10 + number/10 % 10 ;
}

int sumOddDigit(const string Cardnumber){
    int sum = 0;

    for (int i = Cardnumber.size() - 1; i >= 0; i-=2){
        sum += getDigit((Cardnumber[i] - '0')*2);
    }
    return sum;
}

int sumEvenDigit(const string Cardnumber){
    int sum = 0;

    for (int i = Cardnumber.size() - 2; i >= 0; i-=2){
        sum += Cardnumber[i] - '0';
    }
    return sum;
}


