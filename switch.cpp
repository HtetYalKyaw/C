#include<iostream>
using namespace std;

int main(){
    /*switch = alternative to using too many else if statements 
                compare one value againt matching cases */

    int month ;
    cout << "Enter month (1-12):" ;
    cin >> month;

    switch (month)
    {
    case 1:
        cout << "This is January.";
        break;
    case 2:
        cout << "This is February.";
        break;
    case 3:
        cout << "This is March.";
        break;
    case 4:
        cout << "This is April.";
        break;
    case 5:
        cout << "This is May.";
        break;
    case 6:
        cout << "This is June.";
        break;
    case 7:
        cout << "This is July.";
        break;
    case 8:
        cout << "This is August.";
        break;
    case 9:
        cout << "This is September.";
        break;
    case 10:
        cout << "This is October.";
        break;
    case 11:
        cout << "This is November.";
        break;
    case 12:
        cout << "This is December.";
        break;
    default:
        cout << "Invalid Input!!";
    }


}