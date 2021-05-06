// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: May 2021
// This program checks if guessed number is correct or wrong

#include <iostream>
#include <random>

int main() {
    // this function checks if guessed number is correct or wrong
    std::string integerAsString;
    int someRandomNumber;
    int integerAsNumber;
    
    std::random_device rseed;
    std::mt19937 rgen(rseed()); // mersenne_twister
    std::uniform_int_distribution<int> idist(0,9); // [0,9]
    someRandomNumber = idist(rgen);

    std::cout << someRandomNumber << std::endl;

    // input
    std::cout << "Can you guess the number I choose from 0 to 9?" << std::endl;
    std::cout << "Enter the guessed number: ";
    std::cin >> integerAsString;
    std::cout << "" << std::endl;

    // process
    try {
        integerAsNumber = std::stoi(integerAsString);
        if (integerAsNumber == someRandomNumber)
            // output
            std::cout << "Correct!";
        else
        std::cout << "Incorrect, the number was " << someRandomNumber;
    } catch (std::invalid_argument) {
        std::cout << "That was not an integer.";
    }
}
