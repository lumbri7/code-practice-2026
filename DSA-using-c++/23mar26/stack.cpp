#include <iostream>



class Stack {

public:

    int top;
    int arr[10];


Stack() {
    top = -1;
    
}

void push(int x) {
    if (top >= 99) {
        std::cout << "Stack overflow" << std::endl;
        return;
    }
    top++;
    arr[top] = x;
}

void pop() {
    if (top < 0) {
        std::cout << "Stack underflow" << std::endl;
        return;
    }
    top--;
}

void display(){
    std::cout << "Stack" << std::endl;
    for(int i = top; i >= 0; i--){
        std::cout << arr[i] << std::endl;
    }
    std::cout << std::endl;
}


};

int main(){
    Stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(25);
    s.display();
    s.pop();
    std::cout << "After pop" << std::endl;
    s.display();
}
