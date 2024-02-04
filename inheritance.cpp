#include<iostream>
using namespace std;

class animal{
    public:
        bool alive = true ;
    void eat(){
        cout << "Nom Nom NOm."<< endl;
    }

};
class Dog : public animal{
    public:

    void woof(){
        cout << "The dog woof!"<< endl;
    }
};
class cat : public animal{
    public:

    void meow(){
        cout << "The cat meow!"<< endl;
    }
};
int main(){

    Dog dog1;

    cout << dog1.alive << endl;
    dog1.eat();
    dog1.woof();

    cat cat1;

    cout << cat1.alive << endl;
    cat1.eat();
    cat1.meow();

    return 0;
}
