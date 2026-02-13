#include<iostream>
#include<string>

class Person{
    protected:

    std::string pName;
    int pAge;

    public:

    Person(std::string pName, int pAge){
        this->pName = pName;
        this->pAge = pAge;
    }

    void setPdata(std::string name, int age){
        pName = name;
        pAge = age;
    }

    std::string getPname(){
        return pName;
    }

    int getpAge(){
        return pAge;
    }

    void showPdata(){
        std::cout << "Name: " << pName << std::endl;
        std::cout << "Age: " << pAge << std::endl;
    }
};

class Student: public Person {
    private:

    int rollNo;
    std::string sCrs;

    public:
    Student(int rollNo, std::string sCrs){
        this->rollNo = rollNo;
        this->sCrs = sCrs;
    }
};


int main(){

    Person p1("Nitin", 21);
    p1.showPdata();

    return 0;
}