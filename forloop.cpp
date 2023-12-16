#include<iostream>
using namespace std;

int main(){
    int i;
    /*for(i = 1; i<= 10; i++){ // i+=(1,2,3,....etc)
        cout << i << endl;

    }
        cout << "Hello World!"<< endl;
    return 0;*/

    for(i = 1; i<= 20; i++){
    if (i == 15){
        continue;} // break; continue;
    cout << i << endl;
    }



    return 0;
}