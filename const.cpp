#include<iostream>

int main(){
    /* a constant keyword specifies a variable's value is constant tell the complier 
    to prevent anything from modifying it.
    (read only) have to use Uppercase when using const 
    */

    const double PI = 3.14159;    
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout<<circumference<< " cm";


}