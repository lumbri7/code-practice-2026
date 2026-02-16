#include<iostream>

int main(){

    int num;
    bool isPrime = true;

    std::cout << "Enter a number: ";
    std::cin >> num;

    for(int i = 2; i <= num - 1; i++){
        if(num % i == 0){
            isPrime = false;
        }
    }
    if(isPrime == true){
        std::cout << num << " is a prime number" << std::endl;
    }
    else{
        std::cout << num << " is not a prime number" << std::endl;
    }
    return 0;
}
