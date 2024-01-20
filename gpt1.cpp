#include<iostream>
#include<cctype>  // Include cctype for toupper function
using namespace std;

// Function to convert all grades to uppercase
void convertToUppercase(char grades[], int size) {
    for (int i = 0; i < size; i++) {
        grades[i] = toupper(grades[i]);
    }
}

int main() {
    char *pGrades = nullptr;
    int size;

    cout << "How many grades to enter: ";
    cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter grade #" << i + 1 << ": ";
        cin >> pGrades[i];
    }

    // Convert all grades to uppercase
    convertToUppercase(pGrades, size);

    cout << "Entered grades (uppercase): ";
    for (int i = 0; i < size; i++) {
        cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}
