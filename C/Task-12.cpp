/*__________change from decimal to binary and vice versa____________*/

#include <iostream>
#include <bitset>
#include <string>

// Function to convert decimal to binary using std::bitset
std::string decimalToBinary(int decimal) {
    std::bitset<sizeof(int) * 8> binary(decimal);
    return binary.to_string();
}

// Function to convert binary to decimal using std::bitset
int binaryToDecimal(const std::string& binaryStr) {
    std::bitset<sizeof(int) * 8> binary(binaryStr);
    return int(binary.to_ulong());
}



int main() {
    int choice;
    std::cout << "Enter 1 to convert Decimal to Binary or 2 for Binary to Decimal: ";
    std::cin >> choice;
    
    if (choice == 1) {
        int decimal;
        std::cout << "Enter a decimal number: ";
        std::cin >> decimal;
        
        std::string binaryStr = decimalToBinary(decimal);
        
        // Print the binary representation
        std::cout << "Binary representation: " << binaryStr << std::endl;
    }
    else if (choice == 2) {
        std::string binaryStr;
        std::cout << "Enter a binary number: ";
        std::cin >> binaryStr;
        
        int decimal = binaryToDecimal(binaryStr);
        
        // Print the decimal representation
        std::cout << "Decimal representation: " << decimal << std::endl;
    }
    else {
        std::cout << "Invalid choice. Please enter 1 or 2." << std::endl;
    }
    
    return 0;
}


