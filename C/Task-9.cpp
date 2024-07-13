/*___________ALL multiplication tables_____________*/


#include <iostream>

int main() {

    std::string underscores(80, '_');

    // Loop for the levels (2 levels with 5 multiplication tables each)
    for (int level = 0; level < 2; ++level) {
        // Loop for the rows (1 to 10)
        for (int j = 1; j <= 10; ++j) {
            // Loop for the multiplication tables (5 per level)
            for (int i = 1 + level * 5; i <= 5 + level * 5; ++i) {
                std::cout << i << " x " << j << " = " << (i * j) << "\t";
            }
            std::cout << std::endl; // New line after each row of products
        }
        std::cout << underscores << std::endl;
    }
    return 0;
}

