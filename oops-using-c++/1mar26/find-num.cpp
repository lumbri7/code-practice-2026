#include<iostream>
#include<climits>

using namespace std;

class Find {
    public:
    int lowest = INT_MAX;
    int largest = INT_MIN;
    int size;
    int *nums, largest_index, lowest_index;

    void findNumber(){

        cout << "Enter number of elements: ";
        cin >> size;
        nums = new int[size];

        cout << "Enter elements: ";
        for(int i = 0; i < size; i++){
            cin >> nums[i];
        }
        for(int j = 0; j < size; j++){
            if(nums[j] > largest){
                largest = nums[j];
                largest_index = j;
            }
        }
        for(int h = 0; h < size; h++){
            if(nums[h] < lowest){
                lowest = nums[h];
                lowest_index = h;
            }
        }
            cout << "Largest number : " << largest << " | Index number : " << largest_index << endl;
            cout << "Lowest number  : " << lowest <<  " | Index number : " << lowest_index << endl;
    }
};

int main(){
    Find find;
    find.findNumber();
    
    return 0;
}