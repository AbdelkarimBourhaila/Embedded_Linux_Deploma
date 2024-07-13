/*__________________Maximum number between three values______________________*/
/*_____________Neeeeeeeeeeeeeeeeeeeeeed to verfy Inpyuuuuuuuuuuuuuuuuuuuuuuuuuuuuuut______________*/



#include <iostream>

double maxOfThree(double a, double b, double c) {
    double max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

int main() {
    double num1, num2, num3;
    
    // Input three numbers
    std::cout << "Enter three Vlues: " << std::endl;
    
    std::cin >> num1 
             >> num2 
             >> num3;

    // Find the maximum using maxOfThree function
    double maximum1 = maxOfThree(num1, num2, num3);

    // Find the maximum using std::max
    double maximum2 = std::max(num1, std::max(num2, num3));

    // Output the maximum number
    std::cout << "The maximum number is: " << maximum1 << std::endl;
    std::cout << "The maximum number is: " << maximum2 << std::endl;

    return 0;
}
