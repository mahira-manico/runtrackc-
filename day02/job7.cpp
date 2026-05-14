#include <iostream>

int main(){
    int a;
    int b;
    std::cout << "enter an int" << std::endl;
    std::cin >> a ;
    
    std::cout << "enter a second" << std::endl;
    std::cin >> b;

    std::cout <<a;
    while(a!=b){
        if(a<b){
            a++;
        }else{
            a--;
        }
        std::cout << a;     
    }

    
}