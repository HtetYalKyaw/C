#include<iostream>
using namespace std;

bool isHungry(string yn) {
    return yn == "Y";
}

int main() {
    string yn;
    cout << "Are you hungry? \nEnter Y/N: ";
    cin >> yn;

    if (yn == "Y" || yn == "N") {
        if (isHungry(yn)) {
            cout << "Go eat some food!";
        } else {
            cout << "Go to sleep!";
        }
    } 
    else 
    {
        cout << "Invalid input. Please enter either Y or N." << endl;
    }

    return 0;
}
