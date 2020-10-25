// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on October 2020
// This program converts a celsius temperature to fahrenheit

#include <iostream>

void fahrenheit() {
    // This function converts celsius temperatures to fahrenheit

    float celsius;
    float fahrenheit;

    // Input

    std::cout << "Enter the temperature in celsius: ";
    std::cin >> celsius;

    // Process

    fahrenheit = (9.0 / 5.0) * celsius + 32.0;

    // Output

    std::cout << "" << std::endl;
    std::cout << celsius << " degrees celsius is equal to "
    << fahrenheit << " degrees fahrenheit!" << std::endl;
}

main() {
    // This function calls other functions

    fahrenheit();
}
