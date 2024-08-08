#include <iostream>
#include <cstdlib>
#include <ctime>

void playGuessingGame() {
    std::srand(static_cast<unsigned int>(std::time(0))); // Seed random number generator
    int secretNumber = std::rand() % 100 + 1; // Random number between 1 and 100
    int guess = 0;
    int attempts = 0;

    std::cout << "Welcome to the Guessing Game!" << std::endl;
    std::cout << "I have selected a number between 1 and 100." << std::endl;
    std::cout << "Can you guess what it is?" << std::endl;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
        }
    } while (guess != secretNumber);
}

int main() {
    char playAgain;

    do {
        playGuessingGame();
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Thank you for playing!" << std::endl;
    return 0;
}
