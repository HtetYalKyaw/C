#include<iostream>
#include<limits>

using namespace std;

struct student
{
    string name;
    int roll;
    double gpa;
    bool enroll;

};

void studentInfo(student &s);

int main(){
    const int studentsnum = 3;

    student students[studentsnum];

    do{
        for(int i = 0; i < studentsnum; i ++){
            cout << "<" <<" Enter information for student "<< i + 1 << ">"<<'\n';
            studentInfo(students[i]);
        }

        cout << "Students Information :"<< '\n';
        for (int i = 0; i < studentsnum; i ++){
            cout << "Name :" << students[i].name << '\n';
            cout << "Roll :" <<students[i].roll << '\n';
            cout << "GPA :" << students[i].gpa << '\n';
        
            if (students[i].enroll){
            cout << "Enroll : true" <<'\n';
            }else{
            cout << "Enroll : False" << '\n';
            }
        }
    } while (studentsnum != 3);
    
    return 0;
}

void studentInfo(student &s){
    cout << "\nEnter Name :";
    getline(cin, s.name);

    cout << "\nEnter Roll :";
    cin >> s.roll ;

    cout << "\nEnter GPA :";
    cin >> s.gpa;

    cout << "\nIs the students Enrolled ? (1 for Yes , 0 for No) :";
    cin >> s.roll;



}