#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {9, -4343, 8, 7, 0,6, 5, 4, 3, 2, 1};
    int size = 11;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i = 0; i < size; i++){
        //find smallest using if statement

        // if(arr[i] < smallest){
            // smallest = arr[i];
        // }

        //another way using min() function
        smallest = min(arr[i], smallest);
        }

        for(int i = 0; i < size; i++){
        //find largest using if statemant

            // if(arr[i] > largest){
            //     largest = arr[i];
            // }

            //using min() function

            largest = max(arr[i], largest);

        }

    
    cout << "Smallest number is: " << smallest << endl;
    cout << "Largest number is: " << largest << endl;

}