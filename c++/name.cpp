#include <iostream>


using namespace std;

int main(){
    int m1, m2, m3, m4, m5, m6;
    int total;
    cout << "Enter marks of 6 subjects:";
    cin >>m1>>m2>>m3>>m4>>m5>>m6;

    total = m1+m2+m3+m4+m5+m6;
    cout <<"Total marks =" <<total;

    return 0;
}