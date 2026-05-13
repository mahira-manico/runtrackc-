#include <iostream>

int main() {
    double ht_price;
    double kilos;
    double tva_percent;

    std::cout << "Enter the ht price of the carrots" << std::endl;
    std::cin >> ht_price;

    std::cout << "Enter the number of kilos" << std::endl;
    std::cin >> kilos;

    std::cout << "Enter the tva" << std::endl;
    std::cin >> tva_percent;

    double tva=ht_price*(tva_percent/100);
    double total_ttc=ht_price+tva;
    double total=total_ttc*kilos;

    std::cout << "The TTC price for " << kilos << " kilos is "<< total << "$" << std::endl;



}