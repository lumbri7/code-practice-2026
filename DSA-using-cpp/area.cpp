//area of a square or reacangle

#include<iostream>
#include<string>

int main(){

int length;
int breadth;
int side;
int area;
int choice;

std::cout << "Find area of a rectangle or a square." << std::endl;
std::cout << "1..For Rectangle" << std::endl;
std::cout << "2. For Square" << std::endl;
std::cin >> choice;

if(choice == 1){
    std::cout << "Enter Length: ";
    std::cin >> length;
    std::cout << "Enter Breadth: "; 
    std::cin >> breadth;
    area = length * breadth;
    std::cout << "Length:" << length << " and Breadth:" << breadth << " Area = " << area << std::endl;
}
else if (choice == 2){
    std::cout << "Enter the side of a square: ";
    std::cin >> side;
    area = side * side;
    std::cout << "Area of aqure with side " << side << " is = " << area << std::endl;
}
else
    std::cout << "Invalid input" << std::endl;

    return 0;
}
