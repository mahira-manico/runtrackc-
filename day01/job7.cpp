#include <iostream>

int main(){
    int number;
    std::cout << "Enter a number" << std::endl;
    std::cin >> number;
    
    if(number%2!=0){
        std::cout << "This number is not pair";
    } else{
        std::cout << "This number is pair";
    }
}