#include<iostream>
#include<string>

using namespace std;

class Student{
    public:
    string name;
    int age;

    Student(){
        name = "Unknown";
        age = 0;
    }
    Student(string n){
        name = n;
        age = 0;
    }
    Student(string n, int a){
        name = "Nitin";
        age = a;
    }
    void display(){
        cout << "Name: " << name << " Age: " << age << endl;
    }
};

int main(){
    Student s1;
    Student s2("Riya");
    Student s3("Ritik",20);
    s1.display();
    s2.display();
    s3.display();

    return 0;
}