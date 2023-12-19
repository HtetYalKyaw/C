#include<iostream>
#include<limits>
using namespace std;
class EmployeeAbstract{
    virtual void Askforpromotion() = 0;
};

class Employee:EmployeeAbstract {
private:
    int Age;
    string Name;
    string Profession;
public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }

    void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }

    void setprofession(string profession){
        Profession = profession;
    }
    string getprofession(){
        return Profession;
    }

    void IntroduceYourSelf(){
        cout << "Name -"<< Name << endl;
        cout << "Profession -"<< Profession << endl;
        cout << "Age- " << Age << endl;
    }
    Employee (string name, string profession, int age){
        Name = name;
        Age = age;
        Profession = profession;
    }

    void Askforpromotion(){
        if (Age <= 30){
            cout << Name << " got Promoted."<< endl;
        }else{
            cout << "Sorry," << Name << ", you didnt get promoted.";
        }
    }



};

int main (){

    Employee employee1("Htet Yal Kyaw", "Unreal Engine developer", 24);
    employee1.IntroduceYourSelf(); 
    employee1.Askforpromotion();   

    Employee employee2("Shin Min Thwe", "Former Bitch", 65);
    employee2.Askforpromotion();

}