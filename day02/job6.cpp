#include <iostream>

int main(){
    int n;
    int i=0;
    std::cout << "Enter a number" <<std::endl;
    std::cin>>n;

    do{
        i++;
        if(i%3==0){
            std::cout << i << " is a mutliple of 3" <<std::endl;
        }else if(i%5==0){
            std::cout <<i<<" is a multiple of 5" << std::endl;
        }else{
            std::cout << i<< std::endl;
        }

    }while(i<n);
}