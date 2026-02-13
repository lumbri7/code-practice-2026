#include <iostream> //header file jisme cout,cin basic function hote hai
#include <string> // ye ek standard library headder file hai jo std::string class provide karti hai
using namespace std;

class Teacher { // class ek blue print hai jo dikhata hai hamare teacher ki kya properties honi chahiye
                // yha pe teacher ko ham class name ya class identifier bolte hai jo ham kuch bi rakh sakte hai
                // class name k liye lowercase ya upparcase kuch bi use kar sakte hai


    private:  //keyword //ye ek access specifier/modifier hai isse ham class ko private rakhte hai matlb class ke bahar ham uski properties acces nhi kar sakte
                //access identifiers ke baad jitni bi cheeje likhi hongi vo sab affact hongi

    double salary;            

    public: //keyword //ye bi access specifier h jisse hamm class ki properties ko uske bahar acces kar sakte hai
  //protected: //keyword //isko baad me padhunga ye bhi access specifier hai
             //PTR by default ye acces private hota hai 


    //properties// attributes// 
    string name;
    string dept;
    string subject;


    //non-parameterized constructor
    //Teacher(){ //ye class Teacher ka Constructor h ek special member function iska koi return type nhi hota
               //jab koi object create hota hai ye automatically call hota hai 
       // dept = "BCA"; // yha pe ye teacher ki jo department property hai vo sabhi obbjects ko assign kar dega
       // cout << "constructor aotmatically call ho raha h object create karne par jitne object utni hi bar ye print hoga" <<endl;
    //}

    //parameterized constructor
    Teacher(string n, string d, string s) {
        name = n;
        dept = d;
        subject = s;
    }

    //member function// methods bi bol sakte hai// ye update ya change karta hai property ki value ko
    //ham jitne chahe utne functions bana sakte hai properties k hisaab se
    void changeDept(string newDept) { //jab function koi value return nhi karta tab void use hota hai
    dept = newDept;
    };

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main() { // yaha se main function shuru hota hai 
    //Teacher t1; //t1 ek object hai aur iske paas different-different properties hai jo hamne upar class me mention ki hai jese name, department etc
    Teacher n1("Manish", "BCA", "CA");
    //t1.name = "Nitn"; // jab me object ki property ko valu assign ya acces karte hai to dot(.) ka use karte hai jese objectname.property = "value"
    // t1.dept = "BCA";
    //t1.subject = "C++";
    // t1.salary = 25000;

    //cout << t1.dept << endl;
    n1.getInfo();

    return 0;
}