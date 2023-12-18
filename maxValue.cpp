// Copyright (c) 2023 Julien Lamoureux All rights reserved.

// Created By: Julien Lamoureux
// Date: December 17, 2023
// This program display the maximum of 10 values

#include <cstdlib>
#include <iostream>
#include <random>
#include <time.h>
#include <array>


int maxValue(std::array<int, 10> listOfNumbers) {
    // initialize max to 0
     int max = 0;

    // use a for loop when counter < ARRAY_SIZE
    for (int counter = 0; counter < listOfNumbers.size(); counter++) {
        // if list_of_numbers[counter] > max, make listOfNumbers the max
        if (listOfNumbers[counter] > max) {
                max = listOfNumbers[counter];
            }
    }

    // return the max
    return max;
}


int main() {
    // declare variables
    int randNum, counter, max;

    // declare constants
    const int MAX = 100;
    const int MIN = 0;
    const int ARRAY_SIZE = 9;

    // declare randomNumbers
    std::array <int, 10> randomNumbers;

    // set max to 0
    max = 0;

    // tell the user what the program does
    std::cout << "This program display the maximum of the following values"
    << std::endl;

    // use a for loop when counter < ARRAY_SIZE
    for (counter = 0; counter < ARRAY_SIZE; counter++) {
        // initialize seed
        std::random_device rseed;

        std::mt19937 rgen(rseed());  // mersenne_twister

        std::uniform_int_distribution<int> idist(MIN, MAX);  // [0,100]

        // generate a random number between 0 and 100
        randNum = idist(rgen);

        // append randomNumbers to the random number
        randomNumbers[counter] = randNum;

        // display randomNumbers
        std::cout << randomNumbers[counter] << std::endl;
    }

    // call the max value function
    max = maxValue(randomNumbers);

    // display the average
    std::cout << "The maximum value is  "
              << max << std::endl;
}
