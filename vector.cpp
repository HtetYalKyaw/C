#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>numbers;
    numbers.push_back(0);

    for (int i = 1; i <= 10; i++){
        numbers.push_back(i);
    }

    // for (int number : numbers){
    //     cout << number << endl;
    // }
    // for (auto it= numbers.begin(); it != numbers.end(); it++){
    //     cout << *it << endl; //value of iteration 
    //     cout << &it << endl; //address of iteration
    //     cout << &(*it) << endl; //address of value of iteration

                        // constant cant change value
    // for (auto it= numbers.cbegin(); it != numbers.cbegin(); it++){ 
    //     *it = 20;
    //     cout << *it << endl;


cout<<"Size: "<< numbers.size() <<endl;
cout<<"Max size: "<<numbers.max_size()<< endl;
cout<<"Capacity: " << numbers.capacity() << endl; 
numbers.resize(5);
cout << "Size: " << numbers.size() << endl;

if (numbers.empty())
    {cout << "Vector is empty\n";}
else
    {cout << "Vector is not empty\n";}
    
cout << "Element [0] is: " << numbers[0]<<endl;
cout << "Element at(0) is: " << numbers.at (0) << endl;
cout << "Front:" << numbers.front() << endl;
cout << "Back: " << numbers.back() << endl;
numbers.pop_back(); // remove the last numbers
numbers.clear();

    // }

    cin.get();
}