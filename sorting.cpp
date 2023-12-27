#include<iostream>
using namespace std;

void SortArray(int Num[], int size);

int main(){

    int Num [] = {10,5,6,7,8,9,1,2,3,4,};
    int size = sizeof(Num)/sizeof(int);

    SortArray(Num, size);

    for (int element : Num){
        cout << element << " ";
    }
    return 0;
}
void SortArray(int Num[], int size){

    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(Num[j] > Num[j+1]){
                temp = Num[j];
                Num[j] = Num[j+1];
                Num[j+1] = temp;
            }
        }
    }
}