//============================================================================
// Name        : CSC450-MOD2-CT.cpp
// Author      : AG
// Version     :
// Copyright   : NA
// Description : String concatenation with loops.
//============================================================================
#include <iostream>
#include <string>

int main() {
    const int NUM_ITERATIONS = 3;

    for (int i = 0; i < NUM_ITERATIONS; ++i) {
        std::string str1, str2;

        std::cout << "Iteration " << i + 1 << ":\n";

        std::cout << "Enter the first string: ";
        std::getline(std::cin, str1);

        std::cout << "Enter the second string: ";
        std::getline(std::cin, str2);

        std::string result = str1 + str2;

        std::cout << "Concatenated string: " << result << "\n\n";
    }

    return 0;
}
