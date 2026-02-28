// learning basics of DSA using C++

#include <iostream>
#include <string>
using namespace std;

//what is array?
//array is a collection of items stored at contiguous memory locations.
// It is a data structure that can hold a fixed number of values of the same type.
// The values in an array are called elements, and each element can be accessed using its index (position) in the array.
// Arrays are commonly used to store and manage collections of data efficiently.

//example

int main() {
    // Create an array of integers with 5 elements
    // int myArray[5] = {10, 20, 30, 40, 50};
    
    // Access and print each element of the array
    // cout << "Elements in the array: ";
    // for (int i = 0; i < 5; i++) {
        // cout << myArray[i] << " "; // Accessing elements using index
    // }
//     cout << endl;
    
//     return 0;
// }





// two dimensional array
int twoDArray[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};

cout << "Two dimensional array elements: " << endl;
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
        cout << twoDArray[i][j] << " ";
    }
    cout << endl;
}
}

/*
time
*/