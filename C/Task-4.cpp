/*__________________Create a table for AscII code: Second Methode________________________*/


#include <iostream>

int main() {
    // Display ASCII codes of lowercase letters 'a' to 'z'
    std::cout << "ASCII codes of lowercase letters:\n";
    for (char c = 'a'; c <= 'z'; ++c) {
        std::cout << "ASCII of '" << c << "' : " << int(c) << std::endl;
    }

    // Display ASCII codes of uppercase letters 'A' to 'Z'
    std::cout << "\nASCII codes of uppercase letters:\n\n";
    for (char c = 'A'; c <= 'Z'; ++c) {
        std::cout << "ASCII of '" << c << "' : " << int(c) << std::endl;
    }

    return 0;
}
