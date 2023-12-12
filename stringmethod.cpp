#include<iostream>
using namespace std;
    //name.length()
    //name.empty()
    //name.clear()
    //name.append()
    //name.at() use to point number position
    //name.insert(0, "T") use to replace number
int main() {
    string name;
    cout << "Enter Your Name: ";
    getline(cin, name);

    if (name.empty()) {
        cout << "Please enter characters.";
    } else {
        if (name.length() > 32) {
            cout << "You can't exceed 32 characters.";
        } else {
            cout << "Welcome, " << name;
        }
    }

    return 0;
}
