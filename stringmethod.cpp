#include<iostream>
using namespace std;

int main(){
    //name.length()
    //name.empty()

    string name;
    cout << "Enter Your Name : ";
    getline(cin, name);

    if (name.length()> 32 ){
        cout << "You can't exceed 32 characters.";
    }else{
        cout << "Welcome, "<< name;
    }

    if (name.empty()){
        cout << "Please enter characters.";
    }else{
        return 0;

    }
    return 0;
}