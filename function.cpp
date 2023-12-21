#include<iostream>
using namespace std;

string name;
int age;

void HappyBirthday (){
    cout << "Happy Birthday to "<< name << endl;
    cout << "Happy Birthday to "<< name << endl;
    cout << "Happy Birthday dear "<< name << endl;
    cout << "Happy Birthday to "<< age << " years old Boy." << endl;
}

int main(){

    cout << "Enter Your Name: " << endl;
    getline(cin, name);

    cout << "Enter Your Age: " << endl;
    cin >> age;

    HappyBirthday();
}