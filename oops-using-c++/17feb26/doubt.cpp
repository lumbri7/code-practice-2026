#include<iostream>
using namespace std;

class emp{

public:
    char work;
    float attendance;

private:
    int salary;

public:


    void setsal(int salary){
        this->salary = salary;
    }

    int getsal(){
        return salary;
    }

    void display(){
        cout << "Employee work: " << work << endl;
        cout << "Attendance: " << attendance << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main(){
    emp e1;
    e1.work = 'A';
    e1.attendance = 78.5;
    e1.setsal(28000);
    e1.display();

    return 0;
}