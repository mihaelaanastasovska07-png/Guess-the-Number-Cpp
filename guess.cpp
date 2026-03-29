#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 10 + 1;
    int guess;

    cout << "Guess the number (1-10): ";
    cin >> guess;

    if (guess == secret) {
        cout << "Bravo! You've guessed the number." << endl;
    } else {
        cout << "You didn't guess the number :(. The right number is: " << secret << endl;
    }

    return 0;
}
