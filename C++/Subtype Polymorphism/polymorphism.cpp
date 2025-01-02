#include <iostream>
using namespace std;

/**
 * Compile-Time / Static Polymorphism:
 * - Resolved during compilation.
 * - Achieved through function overloading and operator overloading.
 */
class Calculator{
public:

    // Overloaded functions
    int add(int a, int b){
        return a + b;
    };

    double add(double a, double b){
        return a + b;
    };
};

/**
 * Run-Time / Dynamic Polymorphism:
 * - Achieved using inheritance and virtual functions.
 * - Allows dynamic resolution of function calls based on the object type at runtime.
 *
 * Virtual Function:
 * - A member function in the base class, marked with the keyword `virtual`.
 * - Can be overridden in a derived class.
 */
class Base{
public:
    virtual void print(){
        cout << "Base Class Print" << endl;
    }

    void show(){
        cout << "Show base class" << endl;
    }
};

class Derived : public Base{
public:
    void print(){
        cout << "Derived Class Print" << endl;
    };
};


int main(){

    // Compile-Time Polymorphism
    Calculator calculator;
    calculator.add(1, 1);     // Calls the int version
    calculator.add(1.5, 1.5); // Calsl the double version

    // Run-Time Polymorphism
    Base* base;
    Derived d;
    base = &d;

    base->print(); // Calls Derived::print (virtual function)

    base->show();  // Calls Base::show (non-virtual function)

    return 0;
}