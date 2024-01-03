#include<iostream>
using namespace std;

int main(){

    string question [] ={"1. What year was the C++ created ?",
                         "2. Who invented C++ ?",
                         "3. What is the predecessor of C++ ?",
                         "4. Is the Earth Flat ?"};

    string Option [][4]= {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                        {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack ", "D. Mark Zuckerburg"},
                        {"A. C", "B. C+", "C. C--", "D. B++"},
                        {"A. yes", "B. no", "C. sometimes", "D. What's Earth"}};
                    
    char Answer[] = {'C', 'B', 'A', 'B'};

    int size =sizeof(question)/sizeof(question[0]);

    char guess;
    int Score = 0;

    for(int i = 0;i < size; i++ ){
        cout << "--------------------------- " << '\n';
        cout << question[i] << '\n';
        cout << "--------------------------- " << '\n';

        for(int j = 0; j < sizeof(Option[i])/sizeof(Option[i][0]); j++){
            cout << Option[i][j] << '\n';
        }
        
        cin >> guess;
        guess = toupper(guess);

        if (guess == Answer[i]){
            cout << "----CORRECT-----\n";
            Score++;
        }else {
            cout << "-----WORNG!-----\n" ;
            cout << "Answer is :" << Answer[i] << '\n';
        }
    }
    cout << "-----------RESULTS-----------" << '\n';
    cout << "Number of Question :" << size << '\n';
    cout << "CORECT GUESS : " << Score << '\n';
    cout << "Score : " << (Score/(double) size)*100 << " %" << '\n';
    
    return 0;
}