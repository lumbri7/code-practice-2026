#include<iostream>
#include<string>

class Rectangle{
    private:
    float length;
    float breadth;


    public:
    void setLnB(float length, float breadth){
        this->length = length;
        this->breadth = breadth;
    }
    float getLnB(){
        return length, breadth;
    }
    void getInfo(){
        std::cout << "Length:  " << length << std::endl;
        std::cout << "Breadth: " << breadth << std::endl;
    }
};

int main(){
    Rectangle r1(3,4);
    r1.getInfo();

    return 0;

}