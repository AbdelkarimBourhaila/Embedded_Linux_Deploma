/*______________summation the digits of integer entered by user_______________*/






ther is error







#include <iostream>

int main() {
    int sum = 0;
    int x = 0;
    std::cout << "Enter digits one by one (0 to stop): " << std::endl;
    
    do {
        std::cin >> x;
        sum += x; // Add the input value to the sum
    } while (x != 0); // Stop if the input is 0

    std::cout << "Sum of digits: " << sum << std::endl;

    return 0;
}
