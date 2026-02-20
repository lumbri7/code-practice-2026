#include<iostream>
#include<string>

using namespace std;

class BMW{
    private:
    string sales;

    public:
    string model;
    int mfgYear;
    string color;

    BMW(string model, int mfgYear, string color){
        this->model = model;
        this->mfgYear = mfgYear;
        this->color = color;
    }

    void showInfo(){
        cout << "Model: " << model << endl;
        cout << "Colour: " << color << endl;
        cout << "MFG Year: " << mfgYear << endl;
        cout << "Sales: " << sales << endl;
    }

    void setSales(string sales){
        this->sales = sales;
    }

    string getSales(){
        return sales;
    }
};

int main(){
    BMW c1("M5 Competition", 2025, "Black");
    BMW c3("BMW x7 SUV", 2005, "Blue");
    c3.setSales("$5985985985");
    c1.setSales("$8777777777");
    c3.showInfo();

    return 0;
}