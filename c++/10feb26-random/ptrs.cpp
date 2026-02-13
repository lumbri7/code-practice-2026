#include<iostream>

int main(){
    int a = 10;
    int* p = &a;
    float b = 10.5;
    std::string name = "Nitin";
    double c = 56.8;
    double* ptc = &c;
    float* ptb = &b;
    std::string* ptname = &name;


    std::cout << &name << std::endl;
    // std::cout << ptname << std::endl;
}