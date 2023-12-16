#include<iostream>
#include<limits>
using namespace std;

class Employee{
    public:
    string Name;
    string Profession;
    int age;

    void IntroduceYourSelf ()
    {
        cout << "Name -" << Name << endl;
        cout << "Profession -" << Profession << endl;
        cout << "age -" << age << endl;        
    }
};

bool isValidInput(const string& input){
    for (char c :input){
        if(!isspace(c)){
        return true;
        }
        return false;
    
        }
    }
int main (){

    Employee employee1;

    cout << "Enter Your Name : "<< endl;
    do{    
        getline(cin,employee1.Name);
        if(!isValidInput(employee1.Name)){
            cout << "Please Enter a Valid Word: ";
        }
    
    }while (!isValidInput(employee1.Profession));
  
    cout << "Enter Your Profession : "<< endl;
    do{    
        getline(cin,employee1.Profession);
        if(!isValidInput(employee1.Profession)){
            cout << "Please Enter a Valid Word: ";
        }
    
    }while (!isValidInput(employee1.Profession));

    cout << "Enter Your age : "<< endl;
    do{    
        getline(cin,employee1.age);
        if(!isValidInput(employee1.age)){
            cout << "Please Enter a Valid number: ";
        }
    
    }while (!isValidInput(employee1.age));
  

    employee1.IntroduceYourSelf();

return 0;
}

