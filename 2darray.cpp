#include <iostream>
#include <array>
using namespace std;

int main() 
{
   array<array<string, 3>, 3> cars = {
    {{"Mustang", "Escape", "F-150"},
     {"Corvette", "Equinox", "Silverado"},
     {"Challenger", "Durango", "Ram 1500"}}};
      

    for (const auto& row : cars) {
        for (const auto& model : row) {
            std::cout << model << " ";
        }
        std::cout << '\n';
    }

    return 0;
}
