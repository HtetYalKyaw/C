#include<iostream>
using namespace std;

bool isHungry (string yn){
    return yn == "Y" ;
}

int main (){

    string yn;
    cout << "Are you hungry? \nEnter Y/N: ";
    cin >> yn;

    if (yn == "Y" || yn == "N")
    {
        if(isHungry(yn)) 
            cout << "Go Eat some Food!"; 
        
        else 
        
            cout << "Go to sleep!";
    }
    else 
        {
        cout << "Invalid input. Please type Y/N";
        }

        return 0;





}