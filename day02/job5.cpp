#include <iostream>

int main(){
    double grade;
    std::cout << "Enter your grade" <<std::endl;
    std::cin >> grade;

    if(grade<0 || grade>20){
        std::cout << "Grade not valid" << std::endl;
    } else if(grade>10){
        std::cout << "Validate" <<std::endl;
    } else{
        std::cout << "Not validated" <<std::endl;
    }
}