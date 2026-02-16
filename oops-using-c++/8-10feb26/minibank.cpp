
//ye maine ai se banya hai 

#include<iostream>
#include<string>
class BankAcount{
private:
    std::string accountNumber;
    std::string accountHolderName;
    double balance;
public:
    BankAcount(std::string accNo, std::string name, double bal){
        accountNumber = accNo;
        accountHolderName = name;
        balance = bal;
    }
    void deposit(double amount){
        if(amount <= 0){
            std::cout << "Invalid deposit amount!" << std::endl;       
        }
        balance += amount;
        std::cout << "Amount deposited successfully." << std::endl;
    }
    void withdraw(double amount){
        if(amount <= 0){
            std::cout << "Invalid withdrawal amount!" << std::endl;
            return;
        }
        if(amount > balance){
            std::cout << "Insufficient balance!" << std::endl;
            return;
        }
        balance -= amount;
        std::cout << "Amount withdrawn successfully." << std::endl;
    }
    void displayAcountDetails(){
        std::cout << "\n--- Acount Details ---" << std::endl;
        std::cout << "Account Holder :  " << accountHolderName << std::endl;
        std::cout << "Account Number :  " << accountNumber << std::endl;
        std::cout << "Balance        :  " << balance << std::endl;
    }
    double getBalance(){
        return balance;
    }
    std::string getAcountNumber(){
        return accountNumber;
    }
};
int main(){
    BankAcount acc1("1001","Nitin",10000);
    BankAcount acc2("1002","Dev",100);
    BankAcount* currentAcount = nullptr;
    int choice;
    std::string accNo;
    double amount;
    while(true){
        std::cout <<"Enter acount number (1001 ya fir 1002): ";
        std::cin >> accNo;
        if(accNo == "1001")
        currentAcount = &acc1;
        else if (accNo == "1002")
        currentAcount == &acc2;
        else{
            std::cout << "Invalid acount number!" << std::endl;
            continue;
        }
        std::cout << "\nPress 1: For Deposit";
        std::cout << "\nPress 2: For Withdraw";
        std::cout << "\nPress 3: To Check balance";
        std::cout << "\nPress 4: To Display details";
        std::cout << "\nPress 5: To Exit" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice){
            case 1:
                std::cout << "Enter amount to deposit: ";
                std::cin >> amount;
                currentAcount->deposit(amount);
                std::cout << "Available balance: " << currentAcount->getBalance() << std::endl;
                break;
            case 2:
                std::cout << "Enter amount to withdraw: ";
                std::cin >> amount;
                currentAcount->withdraw(amount);
                std::cout << "Available balance: " << currentAcount->getBalance() << std::endl;
                break;
            case 3:
                std::cout << "Available balance: " << currentAcount->getBalance() << std::endl;
                break;
            case 4:
                currentAcount->displayAcountDetails();
                break;
            case 5:
                std::cout << "Thank you for banking with us" << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice!" << std::endl;
        }
    }
    return 0;
}
