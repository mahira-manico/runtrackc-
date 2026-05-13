#include <iostream>

using namespace std;

int main(){
    int i,n,som;
    i=0;
    som=0;
    while(i<4){
        i++;
        cout << "give an int" << std::endl;
        cin>>n;
        som+=n;
    }

    cout<< "Sum: " <<som << std::endl;

    do{
        i++;
        cout << "give an int" << std::endl;
        cin>>n;
        som+=n;

    } while(i<4);
    cout<< "Sum: " <<som;
}