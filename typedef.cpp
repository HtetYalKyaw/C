#include<iostream>
#include<vector>
using namespace std;

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef string text_t;
//typedef int IN_t;
using text_t = string;
using IN_t = int;

int main(){
    /* typedef = reserved keyword used to create an additional name (alias) for another data type. 
    New identifier for an existing type Helps with readability and reduces typos
    any name u want to use +(_t) 
    Use when there is a clear benefit
    Replaced with 'using'(work better with templates)
    */
   //pairlist_t pairlist;

    text_t FirstName ="Htet Yal Kyaw";
    IN_t age = 24;
   cout << FirstName << "is " << age << " years old."<<'\n';

}