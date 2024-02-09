#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class NumberGuessingGame {
private:
    int randomNumber;
    int attempts;

public:
    NumberGuessingGame() {
        srand(time(0));
        randomNumber = rand() % 100 + 1;
        attempts = 0;
    }

    void play() {
        int guess;
        bool correct = false;

        cout << "Welcome to the Number Guessing Game!" << endl;
        cout << "I have chosen a number between 1 and 100. Try to guess it." << endl;

        // Main game loop
        while (!correct) {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;

            if (guess == randomNumber) {
                cout << "Congratulations! You've guessed the correct number in " << attempts << " attempts!" << endl;
                correct = true;
            } else if (guess < randomNumber) {
                cout << "Too low. Try again." << endl;
            } else {
                cout << "Too high. Try again." << endl;
            }
        }
    }
};

int main() {
    NumberGuessingGame game;
    game.play();
    return 0;
}
