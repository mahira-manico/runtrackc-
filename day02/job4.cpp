#include <iostream>

int main(){
    int a;
    int b;
    std::string op;

    std::cout << "Enter a number" <<std::endl;
    std::cin>>a;
    std::cout <<"Enter a second number"<<std::endl;
    std::cin>>b;
    std::cout<<"Choose an operator" <<std::endl;
    std::cin>>op;

    if(op=="+"){
        std::cout <<a+b<<std::endl;
    }else if(op=="-"){
        std::cout <<a-b<<std::endl;
    }else if(op=="*"){
        std::cout <<a*b<<std::endl;
    }else if(op=="/"){
        if(b==0 || a==0){
            std::cout << "Error divide by zero";
        }else{
            std::cout <<a/b<<std::endl;
        }
    }

    

}