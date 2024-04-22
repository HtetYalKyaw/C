#include<iostream>

using namespace std;

int main (){
    int a;

    cout << "Calculate the volume of a sphere "<<endl;
    cout << "---------------------------------"<<endl;
    cout << "Input the radius of a sphere :"<< endl;
    cin >> a ;

    cout << "The volume of a sphere is : "<< (1.3333 * 3.14 *a*a*a) <<endl;

    return 0;

}