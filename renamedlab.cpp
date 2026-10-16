#include <iostream>

int main() {
    // Declare two double variables for input
    double firstNumber;
    double secondNumber;

    // Prompt the user to enter values
    std::cout << "Enter first number: ";
    std::cin >> firstNumber;
    
    std::cout << "Enter second number: ";
    std::cin >> secondNumber;

    // Calculate sum, difference, and product
    double sum = firstNumber + secondNumber;
    double difference = firstNumber - secondNumber;
    double product = firstNumber * secondNumber;

    // Display each result on a separate line
    std::cout << "Sum = " << sum << "\n";
    std::cout << "Difference = " << difference << "\n";
    std::cout << "Product = " << product << "\n";
    std::cout<<"haha";

    return 0;
}