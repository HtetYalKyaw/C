#include <iostream>
#include <algorithm>

int main() {
    char charArray[] = {'b', 'a', 'd', 'c', 'e'};
    int arraySize = sizeof(charArray) / sizeof(char);

    // Using std::sort to sort the array
    std::sort(charArray, charArray + arraySize);

    // Displaying the sorted array
    std::cout << "Sorted array: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << charArray[i] << " ";
    }

    return 0;
}
