/*___________One multiplication table_____________*/

#include <iostream>


int main() {

    int x;
    std::cout << "Press number please : ";
    std::cin >> x;
    for(int j= 1 ;j <= 10 ; j++){
        std::cout << x << "  *  " << j << " \t=  "<< x*j <<std::endl;
            }

    return 0;
}
