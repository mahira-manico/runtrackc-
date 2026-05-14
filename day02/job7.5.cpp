#include <iostream>

int main(){
    int a, b;
    std::cout << "Enter an int" << std::endl;
    std::cin >> a;

    std::cout << "Enter a second one" << std::endl;
    std::cin >> b;

    std::cout << a;
    for(a;a!=b;){
        if(a<b){
            a++;
        }else{
            a--;
        }
        std::cout << a;
    }
}