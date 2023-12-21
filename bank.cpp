#include<iostream>
#include<iomanip>
#include<limits>
using namespace std;

void showBalance(double balance){
    cout << "Your Balance is " << setprecision(2) << fixed << balance << "\n";

}
double Deposit(){
    double amount = 0;
    cout << "Enter the amount to be deposited :"<< "\n";
    cin >> amount;

    if (amount < 0){
        cout << "Invalid Input!";
    }else{
        return amount;
    }
    return 0;
}

double withdraw(double balance){
    double amount = 0;
    cout << "Enter The amount you want to withdraw :" << "\n";
    cin >> amount;
    if (amount > balance){
        cout << " Insufficient Fund!" << "\n";
    }else if (amount < 0){
        cout << "Plese Enter a Valid Amount!" << "\n";
    }
    else {
        return amount;
    }
    return 0;
}

int main(){
    double balance = 250;
    int choice =0;

    do
    {
    cout << "******************" << "\n";
    cout << "Enter Your choice !" << "\n";
    cout << "******************" << "\n";
    cout << "1. Check Your Balance!"<< "\n";
    cout << "2. Deposit Your Money!"<< "\n";
    cout << "3. Withdraw Your Money!"<< "\n";
    cout << "4. Exit!"<< "\n";
    cin >> choice;

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    switch (choice)
    {
    case 1: showBalance(balance);
        break;
    case 2: balance += Deposit();
            showBalance(balance);
        break;
    case 3: balance -= withdraw(balance);
            showBalance(balance);
        break;
    case 4: cout << "Thanks for visiting !" << "\n";
        break;
    default: cout << "Invalid Input!" << "\n";
        break;
    }
    }while (choice != 4);

    return 0;
}