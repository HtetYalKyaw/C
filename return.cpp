#include<iostream>
using namespace std;

string concatstring(string string1, string string2){
    return string1 + " " + string2;
}

int main(){

    string firstname = "Htet Yal" ;
    string secondname = "Kyaw" ;
    string fullname = concatstring(firstname, secondname);

    cout << fullname << endl;

}
