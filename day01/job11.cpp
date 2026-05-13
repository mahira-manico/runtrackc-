#include <iostream>

int main(){
    int n;
    int m;
    int temp;
    std::string answer;

    std::cout << "Enter an integer" << std::endl;
    std::cin >> n;

    std::cout << "Enter a second one" <<std::endl;
    std::cin >> m;

    std::cout << "Do you want to switch them ?" << std::endl;
    std::cin >> answer;
    if(answer=="yes"){
        std::cout << "n = " << n << " and m = " << m << " ";
        temp=n;
        n=m;
        m=temp;
        std::cout << "now, n = " << n << " and m = " << m; 

    }
}