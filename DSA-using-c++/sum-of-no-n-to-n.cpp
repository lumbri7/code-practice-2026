#include <iostream>
#include <string>

using namespace std;

int main(){
    int from,to;
    int sum = 0;

    cout << "Find sum from n to n numbers." << endl;
    cout << "From: ";
    cin >> from;
    cout << "To: ";
    cin >> to;
    
    if(from > to){
        swap(to, from);
        cout << "Your entered numbers are swaped!" << endl;
    }

    for(int i = from; i <= to; i++){
        sum = sum += i;
    }
    cout << "Sum from " << from << " to " << to << " is = "<< sum << endl;



}
