/*C Basics:t's not possible to assign an int value to a character variable greater than the char limit*/

#include <iostream>

int main() {
    char a = 'A'; // Type of 'a' before using printf
    std::cout << "Type of a before: " << typeid(a).name() << std::endl; 
    printf("char A: %d\n", a); // Print 'a' as an integer (ASCII code)
    std::cout << "Type of a after: " << typeid(a).name() << std::endl; // Type of 'a' after using printf

    std::cout << "_________________________________________________" << std::endl;

    char b = 25; // Type of 'b' before using printf
    std::cout << "Type of b before: " << typeid(b).name() << std::endl;
    printf("char 25: %d\n", b); // Print 'b' as an integer
    std::cout << "Type of b after: " << typeid(b).name() << std::endl; // Type of 'b' after using printf

    std::cout << "_________________________________________________" << std::endl;

    char c = 255; // Type of 'c'
    std::cout << "Type of c before: " << typeid(c).name() << std::endl;
    printf("char 255: %d\n", c); // Print 'c' as an integer
    std::cout << "Type of c after: " << typeid(c).name() << std::endl; // Type of 'c' after using printf

    std::cout << "_________________________________________________" << std::endl;

    char d = 258; // Type of 'd'
    std::cout << "Type of d before: " << typeid(d).name() << std::endl;
    printf("char 258: %d\n", d); // Print 'd' as an integer
    std::cout << "Type of d after: " << typeid(d).name() << std::endl; // Type of 'd' after using printf

    std::cout << "_________________________________________________" << std::endl;

    unsigned char e = -1; // Type of 'e' (unsigned char)
    std::cout << "Type of e before: " << typeid(e).name() << std::endl;
    printf("char -1: %d\n", e); // Print 'e' as an integer
    std::cout << "Type of e after: " << typeid(e).name() << std::endl; // Type of 'e' after using printf
    

    return 0;
}
