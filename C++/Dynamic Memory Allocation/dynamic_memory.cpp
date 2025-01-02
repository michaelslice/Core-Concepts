#include <iostream>
#include <string>
using namespace std;
// https://faculty.cs.niu.edu/~mcmahon/CS241/Notes/dynamic_storage.html
// https://www.learncpp.com/cpp-tutorial/dynamic-memory-allocation-with-new-and-delete/

class Student{
private:
    string name_ = "";
public:
    Student(string name) : name_(name) {}; 

    void set_name(string name){
        this->name_ = name;
    }

    string get_name(){
        return this->name_;
    }
};

int main(){
    // Dynamically allocated array
    int* scores;

    scores = new int[5];

    scores[2] = 27;

    cout << scores[2] << endl;

    // Deallocate the dynamic memory before end of program
    delete[] scores;


    // Pointer to student object
    Student* s;

    // Call default constructor
    s = new Student("Joe");

    // Deallocate object before end of program
    delete s;

    return 0;
}