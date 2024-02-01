#include<iostream>
using namespace std;

enum Day{sunday = 0, monday = 1, tuesday = 2,wednesday = 3, thursday = 4, friday = 5, saturday = 6};


int main(){

    Day today = friday;

    switch (today)
    {
        case sunday : cout << "This is sunday" << endl; 
            break;
        case monday : cout << "This is Monday" << endl; 
            break;
        case tuesday : cout << "This is tuesday" << endl; 
            break;
        case wednesday : cout << "This is wednesday" << endl; 
            break;
        case thursday : cout << "This is thursday" << endl; 
            break;
        case friday : cout << "This is friday" << endl; 
            break;
        case saturday : cout << "This is saturday" << endl; 
            break;
    
    default:
        break;
    }

    return 0;
    
}