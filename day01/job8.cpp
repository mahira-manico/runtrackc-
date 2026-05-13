#include <iostream>

int main(){
    int x;
    int y;
    int z;

    std::cout << "Enter a number" << std::endl;
    std::cin >> x;

    std::cout << "Enter a second number" << std::endl;
    std::cin >> y;

    std::cout << "Enter a third number" << std::endl;
    std::cin >> z;

    if(x>y && x>z){
        std::cout << x << " is greater than " << y << " and " << z;
    }else if(y>x && y>z){
        std::cout << y << " is greater than " << x << " and " << z;
    }else if(z>x && z>y){
        std::cout << z << " is greater than " << x << " and " << y;
    }else{
        std::cout << "All numbers are equals";
    }
}