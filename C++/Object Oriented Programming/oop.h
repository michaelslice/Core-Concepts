#ifndef OOP
#define OOP

using namespace std;
#include <iostream>
#include <string>
#include <vector>

class School {

private:
    int student_{0};
    double gpa_{0};
    string name_ = "";

public:
    // Constructor initializer list
    School(int student): student_(student){ };
    
    // Mutator
    void set_gpa(double new_gpa);
    
    // Accessor
    string get_name() const; // This function does not change modify data members of the object that calls it

};

// Setter functions, for initializing member variables
void School::set_gpa(double new_gpa){
    this->gpa_ = new_gpa;
};

// Getter function, for getting member variables
string School::get_name() const{
    return this->name_;
};

int main(){
    return 0;
}

#endif 