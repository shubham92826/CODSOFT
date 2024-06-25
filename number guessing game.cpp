//number guessing game in cpp
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout << "Welcome to the Number Guessing Game by Shubham! :-)" << endl;
    cout << "I have picked a random number between 1 and 100. :-)" << endl;
    cout << "Can you guess what it is?" << endl;

    srand(static_cast<unsigned int>(time(0)));
    int r = rand() % 100 + 1;

    int p = 0;
    int a = 0;

    while (p != r) {
        cout << "Enter your guess: ";
        cin >> p;
        a++;

        if (p < r) {
            cout << "Too low! Try again. :-(" << endl;
        } else if (p > r) {
            cout << "Too high! Try again. :-(" << endl;
        } else {
            cout << "Congratulations KING! You've guessed the number in " << a << " attempts." << endl;
        }
    }

    return 0;
}
