#include <iostream>
#include <vector>
#include<limits>
using namespace std;

int main() {
    vector<string> Foods;
    vector<int> Quantities;

    string temp;
    int amount;

    cout << "*Enter the Foods you'd like to order and the quantity (or enter 'Q' to finish)*" << endl;

    while (true) {
        cout << "Food: ";
        getline(cin, temp);

        if (temp == "Q" || temp == "q") {
            break;
        }

        cout << "Quantity: ";
        while (!(cin >> amount) || amount <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid quantity. Please enter a positive number: ";
        }

        cin.ignore(); // Clear the newline character from the input buffer

        Foods.push_back(temp);
        Quantities.push_back(amount);
    }

    cout << "\nHere is the List of Orders:\n";
    for (int i = 0; i < Foods.size(); i++) {
        cout << "Food: " << Foods[i] << " ( " << Quantities[i] << " )" << '\n';
    }

    return 0;
}
