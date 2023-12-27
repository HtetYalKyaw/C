#include<iostream>
using namespace std;

int SearchArray(string array[], int size, string element);
int main(){
    string Foods[]= {"Humbergers", "Pizza", "Coca-cola", "Pepsi"};
    int size = sizeof(Foods)/sizeof(string);
    int index;
    string myNum;

    cout << "Enter an element to search : " ;
    getline(cin, myNum);

    index = SearchArray(Foods, size, myNum);

    if(index != -1){
        cout << myNum << " is at index " << index << '\n';
    }else{
        cout << myNum << " is not in array."<< '\n';
    }
    return 0;

}
int SearchArray(string array[], int size, string element){
    for(int i =1; i < size; i++){
        if(array[i] == element){
            return i;
        }

    }
    return -1;
}