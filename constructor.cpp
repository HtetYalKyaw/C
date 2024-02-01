#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        int age;
        int rollNum;
        double gpa;
    
    Student(string x, int y, int z, double a){
        name = x;
        age = y;
        rollNum = z;
        gpa = a;
    }


};
int main(){

    Student student1("Shin", 24, 1, 2.5);

    cout << student1.name<<endl;
    cout << student1.age<<endl;
    cout << student1.rollNum<<endl;
    cout << student1.gpa<<endl;

    return 0;
    


}