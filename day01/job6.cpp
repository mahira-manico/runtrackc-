#include <iostream>

int main(){
    int number;
    int i=0;
    std::cout << "Enter a number" << std::endl;
    std::cin >> number;

    do{
        i++;
        int result=number*i;
        std::cout << number << "x" << i << "=" << result << std::endl;
    }while(i<10);

    return 0;

}