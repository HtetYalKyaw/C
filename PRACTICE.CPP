#include<iostream>
#include<algorithm>
using namespace std;


int main(){

    int array[] = {5, 3, 2, 1 ,6 ,7 , 8, 4, };
    int size = sizeof(array)/sizeof(int);

    sort(array, array + size);

    cout << "Sorted array : " ;
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    return 0;
}