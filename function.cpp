#include<iostream>
using namespace std;

string name;
void HappyBirthday (){
    cout << "Happy Birthday to "<< name << endl;
    cout << "Happy Birthday to "<< name << endl;
    cout << "Happy Birthday dear "<< name << endl;
    cout << "Happy Birthday to "<< name << endl;
}

int main(){

    cout << "Enter Your Name: " << endl;
    getline(cin, name);


    HappyBirthday();
}