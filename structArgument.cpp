#include<iostream>

using namespace std;

struct Car
{
    string model;
    int year;
    string color;

};

void printCar(Car &car);
void paintCar(Car &car, string color);

int main(){

    Car car1;
    Car car2;
    
    car1.model = "Mustang";
    car1.year = 1995;
    car1.color = "Yellow";

    car2.model = "Mercedes Benz";
    car2.year = 2024;
    car2.color = "Grey";



    paintCar(car1, "red");
    printCar(car1);

    paintCar(car2, "gold");
    printCar(car2);

    return 0;

}

void printCar(Car &car){
    cout << &car << endl;
    cout << car.model << endl;
    cout << car.year << endl;
    cout << car.color << endl;
}

void paintCar(Car &car, string color){
    car.color = color;
}