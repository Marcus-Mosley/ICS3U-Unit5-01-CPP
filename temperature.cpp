// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on October 2020
// This program converts a celsius temperature to fahrenheit

#include <iostream>

float celsius;
float fahrenheit;

void celsius_fahrenheit() {
    // Process

    fahrenheit = (1.8) * celsius + 32.0;

    // Output

    std::cout << "" << std::endl;
    std::cout << celsius << " degrees celsius is equal to "
    << fahrenheit << " degrees fahrenheit!" << std::endl;
}

main() {
    // This function calls other functions

    std::cout << "Enter the temperature in celsius: ";
    std::cin >> celsius;

    celsius_fahrenheit();
}
