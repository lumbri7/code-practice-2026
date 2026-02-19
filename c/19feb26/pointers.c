// understanding pointers in C
#include <stdio.h>  
int main() {
    int a = 10; // normal variable
    int *ptr; // pointer variable
    ptr = &a; // storing the address of a in ptr

    printf("Value of a: %d\n", a); // prints 10
    printf("Address of a: %p\n", &a); // prints the address of a
    printf("Value stored in ptr (address of a): %p\n", ptr); // prints the address of a
    printf("Value pointed to by ptr: %d\n", *ptr); // dereferencing ptr to get the value of a, prints 10

    return 0;
}

// iska kaha use hota hai?
// pointers ka use dynamic memory allocation, arrays, functions, data structures jaise linked lists, trees, etc. mein hota hai.
// Pointers se hum memory ko efficiently manage kar saktete hain aur complex data structures create kar sakte hain. 
// Pointers se hum functions ke andar variables ko pass kar sakte hain by reference, jisse hum functions ke andar variables ko modify kar sakte hain.
// Pointers se hum arrays ke elements ko access kar sakte hain aur unhe modify kar sakte hain.
// Pointers se hum dynamic memory allocation kar sakte hain, jisse hum runtime par memory allocate kar sakte hain aur usse free kar sakte hain jab hume uski zarurat nahi hoti.
// Pointers se hum data structures jaise linked lists, trees, etc. create kar sakte hain