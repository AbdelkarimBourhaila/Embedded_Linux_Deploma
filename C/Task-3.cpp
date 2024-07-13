/*__________________Create a table for AscII code: First Methode________________________*/


#include <iostream>
#include <string>

int countDigits(int number) {
    if (number == 0) return 1; 

    int digitCount = 0;
    int absNumber = std::abs(number);

    while (absNumber != 0) {
        absNumber /= 10;
        digitCount++;
    }

    return digitCount;
}

int main() {
    std::string finalSpace;
    char lowercase = 'a';
    char uppercase = 'A';

    std::cout << "/*____ASCII Code Table____*/" << std::endl;
    std::cout << "    Char    " << "   ASCII   " << std::endl;

    for (int i = 0; i < 26; ++i) {
        int lowerAscii = int(lowercase);
        int upperAscii = int(uppercase);

        int lowerDigits = countDigits(lowerAscii);
        int upperDigits = countDigits(upperAscii);

        if (lowerDigits == 2 | upperDigits == 2) {
            finalSpace = "      "; // 3 chiffres pour l'affichage ASCII
        } 
        if (upperDigits == 3 | lowerDigits == 3) {
            finalSpace = "    "; // 2 chiffres pour l'affichage ASCII
        }

        std::cout << "||    " << lowercase << "    |    ";
        std::cout  << lowerAscii;
        std::cout << finalSpace <<  "||" << std::endl;

        std::cout << "||    " << uppercase << "    |    ";
        std::cout  << upperAscii;
        std::cout << finalSpace << "||" << std::endl;

        lowercase++;
        uppercase++;
    }

    return 0;
}
