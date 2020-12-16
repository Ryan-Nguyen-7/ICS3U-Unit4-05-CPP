// Copyright (C) 2020 St. Mother Teresa HS All rights reserved
//
// created by Ryan Nguyen
// Created on December 2020
// This program ask the user how many numbers they want to
//     add and finds the sum


#include <iostream>
#include <string>
#include <cmath>

int main() {
    // this function calculates powers
    int addend;
    int loopCounter = 0;
    int total = 0;
    int loopStop;

    std::string loopStopAsString;
    int loopStopAsNumber;

    std::string addendAsString;
    int addendAsNumber;

    std::string loopCounterAsString;
    int loopCounterAsNumber;

    // input
    std::cout << "Enter how many numbers you want to add: ";
    std::cin >> loopStopAsString;

    // process + output
    try {
        loopStopAsNumber = std::stoi(loopStopAsString);
        if (loopStopAsNumber > 0) {
            for (loopCounter = 0; loopCounter < \
                loopStopAsNumber; loopCounter++) {
                // addend input
                std::cout << "Enter addend: ";
                std::cin >> addendAsString;
                addendAsNumber = std::stoi(addendAsString);
                // addend positive?
                if (addendAsNumber > 0) {
                    total = total + addendAsNumber;
                } else {
                    continue;
                }
            }
        } else {
            std::cout << "Integer must be positive" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid integer" << std::endl;
        }
    std::cout << "The sum is " << total << std::endl;
}
