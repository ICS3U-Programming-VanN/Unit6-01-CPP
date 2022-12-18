// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Created on: December 13, 2022
// This program generates ten random numbers and stores then in an array
// The program will then calculate the average of all the numbers
// and display it to the console


#include <iostream>
#include <random>


int main() {
    // Declared Constants
    const int MAX_ARRAY_SIZE = 10;
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;

    // Declared Array with size of 10
    int arrayOfIntegers[MAX_ARRAY_SIZE];

    // Declared Variables
    int randomNumber;
    float average;

    // Initialize Sum Variable
    int sum = 0;

    // Generates 10 random numbers and adds them to an array
    // Displays what number and where it was added to (to console)
    for (int counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        // Generates a random number (from 0-100)
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(MIN_NUM, MAX_NUM);

        // Holds the random number (in variable)
        randomNumber = idist(rgen);

        // Adds the random number to the array
        arrayOfIntegers[counter] = randomNumber;

        // Displays what number and where it was added to in the array
        std::cout << arrayOfIntegers[counter]
        << " added to the array at position " << counter << std::endl;
    }

    // Adds all of the numbers in the list to a sum variable
    for (int counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        // Adds each number in each index to sum
        sum += arrayOfIntegers[counter];
    }

    // Calculates the average of all the numbers in the array
    average = static_cast<float>(sum) / static_cast<float>(MAX_ARRAY_SIZE);

    // Displays the average of the numbers in the array to the console
    std::cout << "\nThe average of the numbers: " << average << std::endl;
}
