#include<iostream>
using namespace std;

int main(){
    string Foods[5];
    int size = sizeof(Foods)/sizeof(string);
    string temp;
    for(int i= 0; i < size ; i++){
        cout << "Enter foods you like to order or Press 'Q' to quit #"<< i+1 << ":";
        getline(cin, temp);

        if(temp == "Q" || temp == "q" ){
            break;
        }else{
            Foods[i] = temp;
        }
    }

    cout << "Here is the Following Order of you. "<< '\n';
    for(int i= 0; !Foods[i].empty(); i++){
        cout << Foods[i] << '\n';
    }

    return 0;

}