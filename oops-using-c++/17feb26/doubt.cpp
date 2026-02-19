#include<iostream>
#include<string>

using namespace std;

class emp{

    public:
    int salary;

    private:
    string work;
    float attendance;

    void setsal(int salary){
        this->salary = salary;
    }

    int getsal(){
        return salary;
    }


    emp(string work, float attendance){
        this->work = work;
        this->attendance = attendance;
    }


    void display(){
        cout << "Employee work: " << work << endl;
        cout << "Attendance: " << attendance << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main(){
    // emp e1('A', 79.5);
    emp e1("Data Entry", 89.6);
    e1.setsal(20000);
    e1.display();

    return 0;
}