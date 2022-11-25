// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/11/24
// Gets the user input for the base and height
// Then calculates the area of a triangle. Uses arguments
// And parameters

#include <iostream>
#include <string>

void CalculateArea(float base, float height) {
    // Variable for the area
    float area;

    // Calculating the area
    area = (base * height) / 2;

    // Displaying the area back to the user
    std::cout << "The area of your triangle is " << area << "cm^2!\n";
}

int main() {
    // Variables for the base and height
    std::string baseInputString;
    std::string heightInputString;
    float baseUserInput;
    float heightUserInput;

    // Title of the program
    std::cout << "Area of a Triangle\n";

    // User input for the base and height
    std::cout << "Enter the base of your triangle (cm): ";
    std::cin >> baseInputString;
    std::cout << "Enter the height of your triangle (cm): ";
    std::cin >> heightInputString;

    // Try Catch statement to make sure the answer is not a string
    try {
       float baseUserInput = stof(baseInputString);
       float heightUserInput = stof(heightInputString);

       if (baseUserInput <= 0) {
            std::cout << "Please enter a positive number!\n";
       } else if (heightUserInput <= 0) {
            std::cout << "Please enter a positive number!\n";
       } else {
            CalculateArea(baseUserInput, heightUserInput);
       }
    } catch (std::invalid_argument) {
        std::cout << "Please enter a number!\n";
    }
}
