#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // Seed for random number generation
    int number = std::rand() % 100 + 1; // Random number between 1 and 100
    int guess;

    std::cout << "Guess the number (between 1 and 100):\n";

    while (true) {
        std::cin >> guess;
        if (guess == number) {
            std::cout << "You guessed it right!\n";
            break;
        } else if (guess < number) {
            std::cout << "Too low. Try again.\n";
        } else {
            std::cout << "Too high. Try again.\n";
        }
    }

    return 0;
}