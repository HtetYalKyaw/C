#include<iostream>
using namespace std;

template <typename T, typename U> 

 
auto max(T x, U y){ // auto = system will automatically choose which data type to return
    return (x > y) ? x : y;
}

int main(){

    cout << max(1, 2.1) << endl;

    return 0;
}
