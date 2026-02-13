#include<iostream>
#include<string>
#include<vector>

//  using namespace std;

//  typedef string s;
//  typedef int i;
//  typedef char c;
//  typedef double d;
int main() {

    // s name = "Nitin";
    // i age = 21;
    // s claSS = "12th";
    // c section = 'A';
    // s address = "MOdel Town, Ambala City, Haryana - 140417, India";

    // cout << "Hi, I know everything about you :) " << '\n';
    // cout << "Your are " << name << ", fron " << address << " and you are in " << claSS << " clsss section (" << section <<")." <<'\n';





    // i obtained = 924;
    // i total = 1000;
    // d score = (d)obtained/total * 100;
    // cout << score << "%" << "\n";




    std::string name;
    int age;

    std::cout << "Enter name: ";
    std::getline(std::cin, name);
    std::cout << "Age: ";
    std::cin >> age;
    std::cout << "Hello, " << name << "." << "\n" << "Your are " << age << " years old."<< "\n";


    return 0;
}