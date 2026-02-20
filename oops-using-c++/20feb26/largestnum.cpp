// program to find the largest number among three numbers using classes and objects
#include<iostream>
#include<string>

using namespace std;
class LargestNumber{
    private:
    int num1, num2, num3;

    public:
    void getInput(){
        cout << "Enter three numbers: ";
        cin >> num1 >> num2 >> num3;
    }

    void findLargest(){
        if(num1 >= num2 && num1 >= num3){
            cout << "The largest number is: " << num1 << endl;
        }
        else if(num2 >= num1 && num2 >= num3){
            cout << "The largest number is: " << num2 << endl;
        }
        else{
            cout << "The largest number is: " << num3 << endl;
        }
    }
};
int main(){
    LargestNumber ln;
    ln.getInput();
    ln.findLargest();
    return 0;
}

