#include <iostream>
#include <conio.h>
#include <iomanip>
void printScore(float a, float b,float pole){
    pole=a*b;
    std::cout<<std::fixed; //flaga
    std::cout<<std::setprecision(2); //precision position in output
    std::cout<<pole<<std::endl;
}
void inputDate(){
    float a, b;
    std::cout <<"input first numbe"<<std::endl;
    std::cin>>a;
    std::cout<<"input second number"<<std::endl;
    std::cin>>b;
    printScore(a,b,0);
}



int main() {

    inputDate();

}
