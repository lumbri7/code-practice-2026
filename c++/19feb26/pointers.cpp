/* ============================================
   BANK ACCOUNT SYSTEM - LEARNING POINTERS
   ============================================
   
   📚 WHAT THIS PROGRAM DOES:
   This program simulates a simple bank system where we can:
   - Open two bank accounts (like Nitin and Dev's accounts)
   - Deposit money into accounts
   - Withdraw money from accounts
   - Check account details anytime
   
   🎯 WHAT ARE POINTERS? (Simple Explanation)
   Think of a pointer like a FINGER pointing at something!
   - A regular variable is like a BOX that stores a value
   - A pointer is like a FINGER that says "this box is here!"
   - Instead of storing the value, a pointer stores the ADDRESS 
     of where that value is stored in the computer's memory
   
   Example:
   int x = 5;           // This creates a box with number 5
   int* ptr = &x;       // This pointer POINTS to that box
   *ptr gives us 5      // Using * we can get what's inside
   
   ============================================ */

#include <iostream>  // For input/output (cin, cout)
#include <string>    // For using text/strings (like "Nitin", "Dev")
using namespace std; // So we don't need to write std:: every time

/* 🏦 CLASS: BankAccount
   
   What is a CLASS?
   A class is like a TEMPLATE or BLUEPRINT for creating bank accounts.
   It has:
   - Private Data (secret information only the bank knows)
   - Public Functions (actions we can do with the account)
   
   Think of it like a pizza recipe:
   - The recipe has ingredients (data)
   - The recipe has steps (functions)
   - We can make many pizzas from one recipe!
*/

class BankAccount {

private:  // PRIVATE means only this class can see and use these
    // These are the account's SECRET INFORMATION:
    
    string accountNumber;     // The account ID like "1001"
    string accountHolderName; // The customer's name like "Nitin"
    double balance;           // How much money is in the account
public:  // PUBLIC means anyone can use these functions
    
    /* 🏗️ CONSTRUCTOR - The setup function
       
       What does it do?
       When we create a NEW bank account, this runs automatically!
       It's like filling in a form when you open a real bank account.
       
       Parameters (inputs):
       - accNo: The account number (like "1001")
       - name: The person's name (like "Nitin")
       - bal: Starting money (like 10000 rupees)
    */
    BankAccount(string accNo, string name, double bal) {
        accountNumber = accNo;     // Store the account number
        accountHolderName = name;  // Store the person's name
        balance = bal;             // Store the starting balance
    }
    
    /* 💰 DEPOSIT FUNCTION - Put money INTO the account
       
       What happens:
       1. Check if the amount is valid (more than 0)
       2. If valid, add it to the balance
       3. Show a success message
       
       Think of it like putting coins into a piggy bank!
    */
    void deposit(double amount) {
        // Check: Is the amount zero or negative? That's not allowed!
        if (amount <= 0) {
            cout << "Invalid deposit amount!" << endl;
            return;  // Stop and go back
        }
        
        // ADD the amount to the current balance
        // balance = balance + amount;  (longer way to write it)
        balance += amount;  // Shorter way using += operator
        
        cout << "Amount deposited successfully." << endl;
    }
    
    /* 💳 WITHDRAW FUNCTION - Take money OUT of the account
       
       What happens:
       1. Check if the amount is valid (more than 0)
       2. Check if we have enough money (don't go negative!)
       3. If everything is OK, subtract from balance
       4. Show a success message
       
       Think of it like taking coins out of your piggy bank!
    */
    void withdraw(double amount) {
        // Check: Is the amount zero or negative? That's not allowed!
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
            return;  // Stop and go back
        }
        
        // Check: Do we have enough money?
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
            return;  // Can't withdraw if we don't have enough
        }
        
        // SUBTRACT the amount from the current balance
        // balance = balance - amount;  (longer way to write it)
        balance -= amount;  // Shorter way using -= operator
        
        cout << "Amount withdrawn successfully." << endl;
    }
    
    /* 📋 DISPLAY FUNCTION - Show all account information
       
       What it does:
       Print out all the details about this bank account on the screen
       - Account holder's name
       - Account number
       - Current balance
       
       It's like printing your bank statement from an ATM!
    */
    void displayAccountDetails() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Holder :  " << accountHolderName << endl;
        cout << "Account Number :  " << accountNumber << endl;
        cout << "Balance        :  " << balance << endl;
    }
    
    /* 🔍 GETTER FUNCTION - Get the current balance
       
       What does "getter" mean?
       A function that lets us READ the value without changing it.
       (It's like looking at your bank balance without withdrawing money)
       
       Why do we need it?
       The balance is PRIVATE, so we can't access it directly!
       We need a function to get it safely.
    */
    double getBalance() {
        return balance;  // Give back the current balance
    }
    
    /* 🔍 GETTER FUNCTION - Get the account number
       
       Same idea as getBalance() above!
       It safely lets us read the account number.
    */
    string getAccountNumber() {
        return accountNumber;  // Give back the account number
    }
};  // End of BankAccount class


/* ========================================
   🎮 MAIN PROGRAM - Where everything happens!
   ======================================== */

int main() {
    
    /* 🏗️ CREATE TWO BANK ACCOUNTS
       
       Here we're creating 2 accounts like objects from our blueprint:
       acc1 = Nitin's account with 10,000 rupees
       acc2 = Dev's account with 100 rupees
    */
    BankAccount acc1("1001", "Nitin", 10000);
    BankAccount acc2("1002", "Dev", 100);
    
    /* 🔹 POINTER EXPLANATION!
       
       WHAT IS: BankAccount* currentAccount = nullptr;
       
       - "BankAccount*" means "pointer to a BankAccount"
         (The * creates a POINTER, not a regular variable!)
       
       - "currentAccount" is the name of our pointer
         (It's like a FINGER that can point to any account)
       
       - "nullptr" means "pointing at nothing" (empty/null)
         (Our finger isn't pointing at anything yet!)
       
       WHY USE POINTERS HERE?
       We need ONE variable that can point to EITHER acc1 OR acc2
       Pointers let us choose which account to work with!
       
       MEMORY ANALOGY:
       - acc1 is like a mailbox at address 1001
       - acc2 is like a mailbox at address 1002
       - currentAccount is a FINGER that can point to either mailbox!
    */
    BankAccount* currentAccount = nullptr;
    
    // Variables to store user's choices and inputs
    int choice;        // Which action to perform (1, 2, 3, or 4)
    string accNo;      // Which account number to access
    double amount;     // How much money to deposit or withdraw
    
    /* 🔁 LOOP - Keep running until user wants to exit
       
       "while (true)" means run forever until we break out.
       This keeps the bank system running for multiple transactions!
    */
    while (true) {
        
        // Ask user which account they want to use
        cout << "Enter account number (1001 or 1002): ";
        cin >> accNo;  // Read their input
        
        /* 🔹 USING THE POINTER!
           
           Here we use the & operator (ADDRESS-OF operator)
           
           & means "give me the ADDRESS of this thing"
           
           So:
           - accNo == "1001" means we want Nitin's account
           - currentAccount = &acc1 means "point currentAccount at acc1"
           - The & gets the ADDRESS where acc1 is stored in memory
           
           ANALOGY:
           - acc1 is the mailbox
           - &acc1 is the location/address of the mailbox
           - currentAccount is our FINGER pointing to that address
        */
        if (accNo == "1001")
            currentAccount = &acc1;  // Point to acc1
        else if (accNo == "1002")
            currentAccount = &acc2;  // Point to acc2
        else {
            cout << "Invalid account number!" << endl;
            continue;  // Skip to next loop, try again
        }
        
        // Show the menu of actions
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display Account Details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;  // Read their choice
        
        /* 🔹 USING THE POINTER WITH -> OPERATOR!
           
           WHAT IS: currentAccount->deposit(amount)
           
           The -> operator means:
           "Go to where the pointer is pointing, and call this function"
           
           It's like:
           - Our finger (pointer) is pointing at an account
           - We're telling that account to DO something (deposit, withdraw, etc)
           
           Two ways to write the same thing:
           1. currentAccount->deposit(amount)
           2. (*currentAccount).deposit(amount)
           
           (The first way is easier to read!)
           
           WHY IS THIS USEFUL?
           We don't know WHICH account until runtime!
           The same code can work on acc1 or acc2
           depending on what user chooses!
        */
        switch (choice) {
        case 1:  // Deposit
            cout << "Enter amount to deposit: ";
            cin >> amount;
            currentAccount->deposit(amount);  // Use the pointer!
            break;
            
        case 2:  // Withdraw
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            currentAccount->withdraw(amount);  // Use the pointer!
            break;
            
        case 3:  // Display details
            currentAccount->displayAccountDetails();  // Use the pointer!
            break;
            
        case 4:  // Exit
            cout << "Exiting..." << endl;
            return 0;  // End the program
            
        default:  // Invalid choice
            cout << "Invalid choice!" << endl;
        }
    }
    
    return 0;  // End main function
}   

