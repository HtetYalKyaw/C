#include<iostream>
// template <typename T, typename U> 
// auto max(T x, U y){ // auto = system will automatically choose which data type to return
//     return (x > y) ? x : y;
// }
// int main(){
//     cout << max(1, 2.1) << endl;
//     return 0;
// }
template<typename T>

void swap(T& a, T& b){
    T temp = a ;
    a = b ;
    b = temp;
}

int main(){

    int a = 1 , b = 7;
    swap (a , b);

    std::cout << a << "-" << b << '\n';

    return 0;
}
