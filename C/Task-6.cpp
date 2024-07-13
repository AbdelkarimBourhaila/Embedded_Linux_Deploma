/*____________________RIGHT angle triangle_______________________*/

#include <iostream>

int main() {
    
    int n;

    // Ask the user to enter the number of rows
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    // Loop through each row
    for (int i = 1; i <= n; ++i) {
        // Loop through each column in the row
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        // New line after each row
        std::cout << "\n";
    }

    return 0;
}
