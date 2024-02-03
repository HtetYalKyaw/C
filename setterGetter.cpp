#include<iostream>
using namespace std;

class Stove{
    private:
        int temperature = 0;

    public:
    Stove(int temperature){
        setTemperature(temperature);
    }
    int getTemperature(){
        return temperature;
    }
    void setTemperature(int temperature){
        if(temperature < 0){
            this->temperature = 0;
        }else if(temperature >= 100){
            this->temperature = 100;
        }else{
            this->temperature = temperature;    
        }
            
    }

};

int main(){

    // abstraction = hiding unnecessary data form outside class
    // getter = function that make a private attributes readable
    // setter = function that make a private attributes writable

    Stove tem1(10);

    //tem1.setTemperature(25);

    cout << "The Temperature is :" << tem1.getTemperature();




    return 0;

}