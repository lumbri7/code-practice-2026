#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    private:
        string name;
        int accountNumber;
        double balance;

    public:
        BankAccount(string nam, int accNum, double bal) {
            name = nam;
            accountNumber = accNum;
            balance = bal;
        }


        void display(){
            cout << "Name           : " << name << endl;
            cout << "Account Number : " << accountNumber << endl;
            cout << "Balance        : $" << balance << endl;
        }

        void deposit(double amount){
            if(amount <= 0){
                cout << "Invalid amount" << endl;
            }
            else{
                balance =+ amount;
                cout << "Amount deposited successfully." << endl;
            }
        }

        void withdraw(double amount){
            if(amount > balance){
            cout << "Insufficient Balance" << endl;
            }
            else if(amount <= 0){
                cout << "Amount cannot be less than or equal to 0" << endl;
            }
            else{
                balance =- amount;
            }
        }
};

int main(){
    BankAccount a1("Ritik", 109, 56900.56);
    BankAccount a1("Himanshu", 121, 3243.33);

    int selected;
    int choice;

    while(true){

    cout << "Enter account number: " << endl;
    cin >> selected;

    cout << "For account info press: 1 ->" << endl;
    cout << "To show balance press : 2 ->" << endl;
    cout << "For deposite press    : 3 ->" << endl;
    cout << "For withdrawalp press : 4 ->" << endl;
    cout << "To exit press         : 5 ->" << endl;

    cin >> choice;
    

    switch (choice){
        case 1

    }
 }
    





    return 0;
}