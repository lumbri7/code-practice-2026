#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,-59,6,7,8,-8,10,};
    int size = 10;
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int indexs = -1;
    int indexl = -1;

    for(int i = 0; i < size; i++){
        // largest = max(arr[i], largest);
        // smallest = min(arr[i], smallest);


        if(arr[i] < smallest){
            smallest = arr[i];
            indexs = i;
        }
        if(arr[i] > largest){
            largest = arr[i];
            indexl = i;
        }
    }
    cout << "Largest : " << largest << "  Index: " << indexl << endl;
    cout << "Smallest: " << smallest << " Index: " << indexs << endl;
}
