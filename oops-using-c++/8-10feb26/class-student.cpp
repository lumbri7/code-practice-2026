#include <iostream> ertwhetjhweojthewjo
#include <string>

class Student {

private:    
    std::string phNo;

public:    
    std::string name;
    std::string rollno;
    std::string dept;    
    std::string sem;

    Student(std::string name, std::string rollno, std::string phNo){
        dept ="BCA";
        sem = "2nd";
        this->name = name;
        this->rollno = rollno;
        this->phNo = phNo;
    }

    void getInfo(){
        std::cout << "Student name: " << name << std::endl;
        std::cout << "Roll No:      " << rollno << std::endl;
        std::cout << "Department:   " << dept << std::endl;
        std::cout << "Semester:     " << sem << std::endl;
        std::cout << "Phone:        " << phNo << std::endl;
    }

    void updateName(std::string name){
        this->name = name;
    }
    void updatephNo(std::string phNO){
        this->phNo = phNo;
    }
};

int main() {
    Student s1("Nitin", "2025BCAPTU121", "7889092426");
    Student s2("Himanshu", "2025BCAPTU125", "8978234224");
    Student s3("Ritik", "2025BCAPTU119","7856328956");
    s1.getInfo();
    // Student s4(s1);
    // s1.getInfo();

    
    return 0;
}
