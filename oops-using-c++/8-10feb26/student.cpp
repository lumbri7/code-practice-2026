#include <iostream>
#include <string>

using namespace std;

class Student {

public:    
    string name;


private:    
    string phNo;
    public:

    Student(string name){
        this->name = name;
    }

    void setPhone(string phNo){
        this->phNo = phNo;
    }

    string getPhone(){
        return phNo;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Phone:" << phNo << endl;
    }
};

int main(){
    Student s1("Ritik");
    s1.setPhone("7889092426");
    s1.display();
    return 0;
}