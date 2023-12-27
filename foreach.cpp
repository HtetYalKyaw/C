#include<iostream>
using namespace std;

//for each loop = loop that eases the traversal over an iterable data set

int main()
{

    // string students[] = {"Htet Yal Kyaw", "Simon", "Jack", "Shin"};

    // for(int i =0; i < sizeof(students)/sizeof(string); i++)
    // {
    //     cout << students[i] << "\n";
    // }

    // for(string student : students){
    //     cout << student << "\n";
    int grade[] ={56, 45, 89, 69, 98};

    for(int GRADE : grade){
        cout << GRADE << "\n";
    }

}
