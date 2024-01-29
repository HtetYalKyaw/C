#include<iostream>
#include<limits>
using namespace std;

// Define a structure named 'student'
struct student {
    string name;
    int roll;
    bool enroll;
};

// Function to input information for a student
void inputStudentInfo(student &s) {
    cout << "Enter name: ";
    getline(cin, s.name);

    cout << "Enter roll: ";
    cin >> s.roll;

    cout << "Is the student enrolled? (1 for true, 0 for false): ";
    cin >> s.enroll;

    // Clear the input buffer to handle newline characters
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    const int numStudents = 2;  // You can change this to the desired number of students

    // Declare an array of 'student' structures
    student students[numStudents];

    // Input information for each student
    for (int i = 0; i < numStudents; ++i) {
        cout << "\nEnter information for student " << i + 1 << ";" << endl;
        inputStudentInfo(students[i]);
    }

    // Print the information for each student
    cout << "\nStudent Information:\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Name: " << students[i].name << endl;
        cout << "Roll: " << students[i].roll << endl;

        // Check the value of 'enroll' and print "true" or "false" accordingly
        if (students[i].enroll) {
            cout << "Enroll: true" << endl;
        } else {
            cout << "Enroll: false" << endl;
        }
    }

    // Return 0 to indicate successful execution
    return 0;
}
