#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include <utility>
using namespace std;

// https://en.cppreference.com/w/cpp/memory/unique_ptr

// unique_ptr provides automatic memory management for 1 object
// there is no copy constructor or copy assignment because other 
// objects are not allowed to manage the object

// move constructor and move assignment are allowed
// because only 1 object at a time can manage the object
// so managing ownership can be changed to a new object 

template <typename T>
class Unique_ptr{
private:
    T* data_;
public:
    // Constructor
    Unique_ptr(T data): data_(new T(data)){};

    // Destructor
    ~Unique_ptr(){
        delete this->data_;
    }

    // Copy constructor
    Unique_ptr(const Unique_ptr& other) = delete;

    // Copy assignment operator
    Unique_ptr& operator=(const Unique_ptr& other) = delete;

    // Move constructor
    Unique_ptr(Unique_ptr&& other): data_(other.data_){
        other.data_ = nullptr;
    }
    
    // Move assignment operator
    Unique_ptr& operator=(Unique_ptr&& other){
        if(this != other){
            delete data_;
            std::exchange(other.data_, nullptr);
        }
        return *this;
    }

    T get(){
        return *data_;
    }

};

int main(){
    int x = 12;

    Unique_ptr<int> unique_ptr_(x);

    cout << unique_ptr_.get() << endl;

    unique_ptr<int> x;

    return 0;
};
