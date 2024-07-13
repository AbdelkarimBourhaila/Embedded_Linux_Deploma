/*____________________________Flush Task______________________________*/

#include <iostream>

int main() {
    int x = 10;

    // Method 1: Using std::cout with std::endl
    std::cout << "Hello, World!" << std::endl;  // Advantage: Flushing the buffer, immediate visibility
    std::cout << "X equal : " << x << std::endl;  // Advantage: Easy to use, integrates well with modern C++

    // Disadvantage: Slight performance impact due to frequent flush operation

    std::cout <<"_____________________________________________\n"<<std::endl;

    // Method 2: Using std::cout with '\n'
    std::cout << "Hello, World!\n";  // Advantage: Faster than std::endl
    std::cout << "X equal : " << x << "\n";  // Advantage: Less performance overhead

    // Disadvantage: Does not flush the buffer immediately, output may be cached longer

    std::cout <<"_____________________________________________\n"<<std::endl;

    // Method 3: Using printf
    printf("Hello, World!\n");  // Advantage: Precise formatting with specifiers
    printf("X equal : %d\n", x);  // Advantage: Fine control over formatting

    // Disadvantage: Less safe than std::cout in C++, no type checking at compile time

    return 0;
}


