#include<iostream>
#include<limits>
using namespace std;

class AbstractEmployee{
    virtual void askforPromotion() = 0;
};

class Employee:AbstractEmployee {
private:
    string Name;
    string Profession;
    int Age;

public:
    void setName(string name){ //setter method 
        Name = name;
    }
    string getName(){  //getter method 
        return Name;
    }

    void setProfession(string profession){
        Profession = profession;
    }
    string getProfession(){
        return Profession;
    }

    void setAge (int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }

    void IntroduceYourSelf ()
    {
        cout << "Name -" << Name << endl;
        cout << "Profession -" << Profession << endl;
        cout << "age -" << Age << endl;        
    }
    Employee(string name, string profession, int age){
        Name = name;
        Profession = profession;
        Age = age;
    }
    void askforPromotion(){
        if(Age >= 18){
            cout << Name << " got Promoted.";
        }else{
            cout << Name << " ,You didn't got promoted. ";
        }
    }


};

int main(){

    Employee employee1("Htet Yal Kyaw", "Unreal Engine", 24);
    employee1.IntroduceYourSelf();
  

    Employee emplyoee2("Shin Min Thwe", "HYK's wife", 24);
    emplyoee2.IntroduceYourSelf();

    employee1.setAge(26);
    cout << employee1.getName() << " is " << employee1.getAge() << " Years old. ";
   
    emplyoee2.setProfession(" bitch ");
    cout << emplyoee2.getName() << " is " << employee1.getName() << "'s " << emplyoee2.getProfession()<< endl;

    employee1.askforPromotion();
    emplyoee2.askforPromotion();

}