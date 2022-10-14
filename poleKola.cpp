#include "iostream"
#include "math.h"
#include "iomanip"
#include "conio.h"
int main(){
    double pi=M_PI,promien,pole;
    std::cout<<"podaj wartość promienia "<<std::endl;
    std::cin>>promien;
    pole=promien * (pi*pi);
    std::cout<<std::fixed;
    std::cout<<std::setprecision(5);
    std::cout<<" wynik obliczenia "<<pole<<std::endl;
    getchar();
    return 0;
}
