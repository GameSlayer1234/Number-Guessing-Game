#include <iostream>
#include <random>
#include <stdlib.h>

int main()
{
    int random_number;
    int guess;

    // generates number between 1 to 100
    random_number = rand() % 100 + 1;

    std::cout << "\nEnter your guess, either way you can't guess it in first try. LOL" << std::endl;
    std::cin >> guess;

    if (guess == random_number)
    {
        std::cout << "\nYou guessed because sharmaji's son didn't participate"<< std::endl;
    }

    else if (guess > random_number)
    {
        std::cout << "\nWhy you so dumb? You guessed way too high. What are you bird?" << std::endl;
    }

    else if (guess < random_number)
    {
        std::cout << "\nYou are f***ed, why are you guessing so low just like your grades" << std::endl;
    }



    while (guess != random_number)
    {
        std::cout << "\nEnter your guess, either way you can't guess it in first try. LOL" << std::endl;
        std::cin >> guess;

        if (guess == random_number)
        {
            std::cout << "\nFinally, you guessed the number, sharmaji's son guessed it in a single try"
                      << std::endl;
        }

        else if (guess > random_number)
        {
            std::cout << "\nWhy you so dumb? You guessed way too high. What are you bird?" << std::endl;
        }

        else if (guess < random_number)
        {
            std::cout << "\nYou are f***ed, why are you guessing so low just like your grades" << std::endl;
        }
    }

    return 0;
}