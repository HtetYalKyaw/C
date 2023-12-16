#include<iostream>
#include<ctime>
using namespace std;

int main() {
    int guess;
    int randomNum;
    int tries;
    
    srand(time(NULL));
    randomNum = (rand() % 6 + 1);
    do{
        cout << "Guess a number from 1-6 for a chance to win awesome PRIZES! :";
    
        if (!(cin >> guess)) {
        // Input was not successful (e.g., user entered a non-integer)
        cout << "Invalid input. Please enter a number." << endl;
        return 1; // Return a non-zero value to indicate an error
        }
        tries++;
        if (randomNum == guess) {
        cout << "Congratulations! You have won an iPhone 14 Max Pro!\n";
        } else {
        cout << "Try again!"<< endl;
        }
    }while(guess != randomNum);
    cout << "Number of tries " << tries << '!'<<endl;
    return 0;
}
