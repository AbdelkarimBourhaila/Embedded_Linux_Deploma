/*_________________Ecide the letter is vowel or not_____________________*/


#include <iostream>
#include <set>

bool isVowel_1(char letter) {
    // Chaîne de caractères contenant toutes les voyelles
    std::string vowels = "aeiouAEIOU";
    
    // Vérifie si la lettre est présente dans la chaîne de caractères des voyelles
    return vowels.find(letter) != std::string::npos;
}


bool isVowel_2(char letter) {
    // Set of vowels
    std::set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    
    // Check if the letter is in the set of vowels
    return vowels.find(letter) != vowels.end();
}


int main() {
    char letter;
    
    // Ask the user to enter a letter
    std::cout << "Enter a letter: ";
    std::cin >> letter;
    
    // Check if the letter is a vowel First Methode
    if (isVowel_1(letter)) {
        std::cout << "First Methode : " << letter << " is a vowel." << std::endl;
    } else {
        std::cout << "First Methode : " << letter << " is not a vowel." << std::endl;
    }

    // Check if the letter is a vowel Second Methode
    if (isVowel_2(letter)) {
        std::cout << "Second Methode : " << letter << " is a vowel." << std::endl;
    } else {
        std::cout << "Second Methode : " << letter << " is not a vowel." << std::endl;
    }
    
    return 0;
}
