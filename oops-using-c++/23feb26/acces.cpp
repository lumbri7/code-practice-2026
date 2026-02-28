// access specifiers in class public, private and protected

#include <iostream>
using namespace std;

class Base {
private:
    int privateVar;
    
protected:
    int protectedVar;
    
public:
    int publicVar;
    
    Base() : privateVar(10), protectedVar(20), publicVar(30) {
        cout << "Base constructor called" << endl;
    }
    
    void setPrivateVar(int val) {
        privateVar = val;
    }
    
    int getPrivateVar() {
        return privateVar;
    }
    
    void displayBaseMembers() {
        cout << "Base class members:" << endl;
        cout << "Private Var: " << privateVar << endl;
        cout << "Protected Var: " << protectedVar << endl;
        cout << "Public Var: " << publicVar << endl;
    }
    
private:
    void privateMethod() {
        cout << "This is a private method" << endl;
    }
    
protected:
    void protectedMethod() {
        cout << "This is a protected method" << endl;
    }
    
public:
    void publicMethod() {
        cout << "This is a public method" << endl;
        privateMethod();
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived constructor called" << endl;
    }
    
    void demonstrateAccess() {
        cout << "\nIn Derived class:" << endl;
        
        cout << "Public Var: " << publicVar << endl;
        
        cout << "Protected Var: " << protectedVar << endl;
        
        cout << privateVar << endl;
        
        protectedMethod();
        
        publicMethod();
        
        privateMethod();
    }
    
    void setProtectedVar(int val) {
        protectedVar = val;
    }
    
    int getProtectedVar() {
        return protectedVar;
    }
};

class FriendClass {
public:
    void accessBaseMembers(Base& obj) {
        cout << "\nFriend class accessing Base members:" << endl;
        
        cout << obj.privateVar << endl;
        cout << obj.protectedVar << endl;
        cout << obj.publicVar << endl;
        
        obj.privateMethod();
    }
};


int main() {
    cout << "=== Access Specifiers Demonstration ===" << endl;
    
    Base baseObj;
    
    cout << "\nAccessing public members from main:" << endl;
    cout << "Public Var: " << baseObj.publicVar << endl;
    
    cout << baseObj.privateVar << endl;
    cout << baseObj.protectedVar << endl;
    
    cout << "Private Var (via getter): " << baseObj.getPrivateVar() << endl;
    

    baseObj.publicMethod();
    baseObj.displayBaseMembers();
    
    cout << "\n=== Derived Class Demonstration ===" << endl;
    Derived derivedObj;
    derivedObj.demonstrateAccess();
    
    derivedObj.setProtectedVar(100);
    derivedObj.setPrivateVar(200);
    derivedObj.publicVar = 300;
    
    cout << "\nAfter modification in derived class:" << endl;
    derivedObj.displayBaseMembers();
    
    cout << "\n=== Summary of Access Specifiers ===" << endl;
    cout << "1. PUBLIC: Accessible from anywhere (inside class, derived classes, outside)" << endl;
    cout << "2. PRIVATE: Accessible only within the class where declared" << endl;
    cout << "3. PROTECTED: Accessible within the class and derived classes" << endl;
    cout << "4. FRIEND: Friend classes/functions can access private and protected members" << endl;
    
    return 0;
}