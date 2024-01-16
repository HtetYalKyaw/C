#include<iostream>
using namespace std;

int main (){

    // Null value = a special value that means something has no value. When a pointer is holding a null value,
    //              that pointer is not pointing at anything (null pointer)

    // nullptr = keyword represents a null pointer literal
    // nullptrs are helpful when determining if an address was successfully assigned to a pointer

    //when using pointer ,be careful that your code isnt 
    //dereferencing null or pointing to free memory 
    //this will cause undefined behavior.
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr){
        cout << "This address is not assigned yet.";
    }else{
        cout << "This address is assigned.\n";
        cout << *pointer;
    }
    return 0;
}