#include<iostream>

using namespace std;

int searchArray(int array[], int size, int element);

int main()
{
    int num[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(num)/sizeof(int);
    int index;
    int myNum;

    cout << "Enter an Number to search for :"<< '\n';
    cin >> myNum;

    index = searchArray(num, size, myNum);

    if(index != -1){
        cout << myNum << " is at Index " << index << '\n';
    }else{
        cout << myNum << " is not in array." << '\n';
    }
    return 0;

}
int searchArray(int array[], int size, int element){
    for(int i = 1; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;

}