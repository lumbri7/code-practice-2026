#include <iostream>
#include <string>
using namespace std;

/*
 * INHERITANCE IN C++
 *
 * Inheritance is a fundamental concept in Object-Oriented Programming (OOP) that allows
 * one class (derived class) to inherit properties and behaviors from another class (base class).
 *
 * Key Benefits:
 * 1. Code Reusability: Avoid rewriting common code
 * 2. Hierarchical Classification: Organize classes in a hierarchy
 * 3. Polymorphism: Enable runtime method binding
 * 4. Maintainability: Changes in base class affect derived classes
 *
 * Syntax: class DerivedClass : access-specifier BaseClass { ... }
 * Access specifiers: public, private, protected
 */

// ==========================================
// EXAMPLE 1: BASIC INHERITANCE
// ==========================================

/*
 * Base class representing a generic Vehicle
 * This class contains common properties and methods that all vehicles share
 */
class Vehicle {
protected:  // Protected members are accessible to derived classes
    string brand;
    int year;

public:
    // Constructor
    Vehicle(string b, int y) : brand(b), year(y) {
        cout << "Vehicle constructor called for " << brand << endl;
    }

    // Virtual destructor (important for proper cleanup in inheritance)
    virtual ~Vehicle() {
        cout << "Vehicle destructor called for " << brand << endl;
    }

    // Common method for all vehicles
    void displayInfo() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }

    // Virtual method that can be overridden by derived classes
    virtual void start() {
        cout << "Starting the vehicle..." << endl;
    }
};

/*
 * Derived class Car inherits from Vehicle
 * Car gets all public and protected members of Vehicle
 */
class Car : public Vehicle {  // Public inheritance
private:
    int numDoors;

public:
    // Constructor calls base class constructor
    Car(string b, int y, int doors) : Vehicle(b, y), numDoors(doors) {
        cout << "Car constructor called" << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car destructor called" << endl;
    }

    // Override the start method
    void start() override {
        cout << "Starting the car engine... Vroom!" << endl;
    }

    // Car-specific method
    void honk() {
        cout << "Beep beep!" << endl;
    }

    // Method that uses both inherited and own members
    void displayCarInfo() {
        displayInfo();  // Inherited method
        cout << "Number of doors: " << numDoors << endl;
    }
};

/*
 * Another derived class Motorcycle
 */
class Motorcycle : public Vehicle {
private:
    bool hasSidecar;

public:
    Motorcycle(string b, int y, bool sidecar) : Vehicle(b, y), hasSidecar(sidecar) {
        cout << "Motorcycle constructor called" << endl;
    }

    ~Motorcycle() {
        cout << "Motorcycle destructor called" << endl;
    }

    void start() override {
        cout << "Kickstarting the motorcycle..." << endl;
    }

    void wheelie() {
        cout << "Doing a wheelie!" << endl;
    }
};

// ==========================================
// EXAMPLE 2: TYPES OF INHERITANCE
// ==========================================

/*
 * Demonstrating different access specifiers in inheritance
 */

// Base class with different access levels
class Base {
private:
    int privateVar = 1;
protected:
    int protectedVar = 2;
public:
    int publicVar = 3;

    void display() {
        cout << "Base - Private: " << privateVar
             << ", Protected: " << protectedVar
             << ", Public: " << publicVar << endl;
    }
};

// Public inheritance: maintains access levels
class PublicDerived : public Base {
public:
    void accessMembers() {
        // privateVar is not accessible here
        // protectedVar is accessible
        // publicVar is accessible
        cout << "PublicDerived - Protected: " << protectedVar
             << ", Public: " << publicVar << endl;
    }
};

// Private inheritance: all inherited members become private
class PrivateDerived : private Base {
public:
    void accessMembers() {
        // All members are now private in this class
        cout << "PrivateDerived - Protected: " << protectedVar
             << ", Public: " << publicVar << endl;
    }
};

// Protected inheritance: public and protected become protected
class ProtectedDerived : protected Base {
public:
    void accessMembers() {
        cout << "ProtectedDerived - Protected: " << protectedVar
             << ", Public: " << publicVar << endl;
    }
};

// ==========================================
// EXAMPLE 3: MULTIPLE INHERITANCE
// ==========================================

/*
 * Multiple inheritance allows a class to inherit from more than one base class
 * This can lead to the "diamond problem" if not handled carefully
 */

class Engine {
protected:
    int horsepower;
public:
    Engine(int hp) : horsepower(hp) {}
    void startEngine() { cout << "Engine started with " << horsepower << " HP" << endl; }
};

class Transmission {
protected:
    string type;
public:
    Transmission(string t) : type(t) {}
    void shiftGear() { cout << "Shifting " << type << " transmission" << endl; }
};

// Car inherits from both Engine and Transmission
class SportsCar : public Engine, public Transmission {
private:
    string model;
public:
    SportsCar(string m, int hp, string trans) : Engine(hp), Transmission(trans), model(m) {}

    void displaySpecs() {
        cout << "Sports Car: " << model << endl;
        cout << "Horsepower: " << horsepower << endl;
        cout << "Transmission: " << type << endl;
    }
};

// ==========================================
// EXAMPLE 4: VIRTUAL FUNCTIONS AND POLYMORPHISM
// ==========================================

/*
 * Polymorphism allows objects of different classes to be treated as objects of a common base class
 * Virtual functions enable runtime method binding
 */

class Shape {
protected:
    string color;
public:
    Shape(string c) : color(c) {}
    virtual ~Shape() {}

    // Virtual function - can be overridden
    virtual double area() const = 0;  // Pure virtual function makes Shape abstract

    // Non-virtual function
    void displayColor() const {
        cout << "Color: " << color << endl;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(string c, double r) : Shape(c), radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }

    void displayInfo() const {
        displayColor();
        cout << "Radius: " << radius << ", Area: " << area() << endl;
    }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(string c, double w, double h) : Shape(c), width(w), height(h) {}

    double area() const override {
        return width * height;
    }

    void displayInfo() const {
        displayColor();
        cout << "Width: " << width << ", Height: " << height << ", Area: " << area() << endl;
    }
};

// ==========================================
// MAIN FUNCTION WITH EXAMPLES
// ==========================================

int main() {
    cout << "=== INHERITANCE TUTORIAL ===\n" << endl;

    // Example 1: Basic Inheritance
    cout << "1. BASIC INHERITANCE EXAMPLE:" << endl;
    Car myCar("Toyota", 2020, 4);
    myCar.displayCarInfo();
    myCar.start();
    myCar.honk();

    cout << endl;

    Motorcycle myBike("Harley", 2019, false);
    myBike.displayInfo();
    myBike.start();
    myBike.wheelie();

    cout << endl;

    // Example 2: Types of Inheritance
    cout << "2. TYPES OF INHERITANCE:" << endl;

    PublicDerived pubDer;
    cout << "Public inheritance:" << endl;
    pubDer.display();  // Can access public members
    pubDer.accessMembers();

    PrivateDerived privDer;
    cout << "Private inheritance:" << endl;
    // privDer.display();  // Error: display() is now private
    privDer.accessMembers();

    ProtectedDerived protDer;
    cout << "Protected inheritance:" << endl;
    // protDer.display();  // Error: display() is now protected
    protDer.accessMembers();

    cout << endl;

    // Example 3: Multiple Inheritance
    cout << "3. MULTIPLE INHERITANCE:" << endl;
    SportsCar ferrari("Ferrari 488", 661, "Automatic");
    ferrari.displaySpecs();
    ferrari.startEngine();
    ferrari.shiftGear();

    cout << endl;

    // Example 4: Polymorphism
    cout << "4. POLYMORPHISM WITH VIRTUAL FUNCTIONS:" << endl;

    // Array of base class pointers pointing to derived objects
    Shape* shapes[3];
    shapes[0] = new Circle("Red", 5.0);
    shapes[1] = new Rectangle("Blue", 4.0, 6.0);
    shapes[2] = new Circle("Green", 3.0);

    // Polymorphic behavior - correct area() called based on actual object type
    for(int i = 0; i < 3; i++) {
        cout << "Shape " << i+1 << ":" << endl;
        shapes[i]->displayColor();
        cout << "Area: " << shapes[i]->area() << endl;
        cout << endl;
    }

    // Clean up
    for(int i = 0; i < 3; i++) {
        delete shapes[i];
    }

    cout << "=== END OF TUTORIAL ===" << endl;

    return 0;
}

/*
 * KEY TAKEAWAYS:
 *
 * 1. Inheritance Syntax:
 *    class Derived : access-specifier Base { ... }
 *
 * 2. Access Specifiers in Inheritance:
 *    - Public: Maintains original access levels
 *    - Private: All inherited members become private
 *    - Protected: Public becomes protected, others stay same
 *
 * 3. Constructor Order:
 *    Base class constructors are called before derived class constructors
 *
 * 4. Virtual Functions:
 *    - Enable polymorphism
 *    - Use 'virtual' keyword in base class
 *    - Use 'override' keyword in derived class (C++11)
 *    - Pure virtual functions (= 0) make class abstract
 *
 * 5. Multiple Inheritance:
 *    - Syntax: class Derived : public Base1, public Base2 { ... }
 *    - Can lead to diamond problem - use virtual inheritance to solve
 *
 * 6. Best Practices:
 *    - Use virtual destructors in base classes
 *    - Prefer composition over inheritance when possible
 *    - Use protected for members that derived classes should access
 *    - Document inheritance relationships clearly
 */