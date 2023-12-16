#include <iostream>
#include <limits>
#include <cctype> // Include this header for isspace
using namespace std;

class Employee {
public:
    string Name;
    string Profession;
    int age;

    void IntroduceYourself() {
        cout << "Name -" << Name << endl;
        cout << "Profession -" << Profession << endl;
        cout << "Age -" << age << endl;
    }
};

// Function to check if the input contains only whitespace characters
bool isValidInput(const string& input) {
    for (char c : input) {
        if (!isspace(c)) {
            return true; // Non-whitespace character found, input is valid
        }
    }
    return false; // Input is empty or contains only whitespace characters
}

int main() {
    Employee employee1;

    cout << "Enter Your Name : " << endl;
    do {
        getline(cin, employee1.Name);
        if (!isValidInput(employee1.Name)) {
            cout << "Invalid input.\n Please enter a valid name: ";
        }
    } while (!isValidInput(employee1.Name));

    cout << "Enter Your Profession : " << endl;
    do {
        getline(cin, employee1.Profession);
        if (!isValidInput(employee1.Profession)) {
            cout << "Invalid input.\n Please enter a valid profession: ";
        }
    } while (!isValidInput(employee1.Profession));

    cout << "Enter Your age : " << endl;
    while (!(cin >> employee1.age) || employee1.age < 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input.\n Please enter a valid age: ";
    }

    employee1.IntroduceYourself();

    return 0;
}
