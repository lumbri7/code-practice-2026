#include<iostream>
#include<climits>

using namespace std;

class findNum{
    public:
    int largest = INT_MIN;
    int lowest = INT_MAX;
    int largest_index = 0;
    int lowest_index = 0;
    int nums_size = 0;
    int *nums;

    void findNumber(){
        cout << "Enter number of elements: ";
        cin >> nums_size;
        nums = new int[nums_size];
        cout << "Enter numbers: ";

        for(int i = 0; i < nums_size; i++){
             cin >> nums[i];
        
            if(nums[i] > largest){
                largest = nums[i];
                largest_index = i;
            }
            if(nums[i] < lowest){
                lowest = nums[i];
                lowest_index = i;
            }
        }
        cout << "Largest number = " << largest <<"   |  Index number = " << largest_index << endl;
        cout << "Lowest number  = " << lowest << "   |  Index number = " << lowest_index << endl;
    }
};

int main(){
    findNum find;
    find.findNumber();

    return 0;
}