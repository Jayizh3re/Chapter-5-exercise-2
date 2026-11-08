#include <iostream>
#include <sstream>
#include <string>

int main()
{
    std::string input;
    long long number = 0;
    bool validInput = false;

    while (!validInput)
    {
        std::cout << "Enter a positive integer: ";
        std::getline(std::cin, input);

        std::stringstream stream(input);
        char extraCharacter;

        if (stream >> number && !(stream >> extraCharacter) && number > 0)
        {
            validInput = true;
        }
        else
        {
            std::cout << "Invalid input. Please try again.\n";
            return 1;
        }
    }

    long long sum = 0;

    for (long long value = 1; value <= number; ++value)
    {
        sum += value;
    }

    std::cout << "The sum of the integers from 1 to " << number
              << " is " << sum << ".\n";

    return 0;
}