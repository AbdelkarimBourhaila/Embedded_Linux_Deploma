
/*______________Summation the digits of integer entered by user_______________*/

#include <iostream>
#include <string>

int main() {

    // Declare and initialize variables
    int num = 0, sum = 0;

    // Prompt the user to enter an integer
    std::cout << "Enter an integer " << std::endl;
    std::cin >> num;

    // Convert the integer to a string
    std::string numStr = std::to_string(num);

    // Loop through each character in the string
    for(char digitChar : numStr){
        // Convert the character to its corresponding integer value
        int digit = digitChar - '0';
        // Add the digit to the sum
        sum += digit;
    }

    // Display the sum of the digits
    std::cout << "Sum of digits of " << num << " is : " << sum << std::endl;

    return 0;
}
