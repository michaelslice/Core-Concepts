#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include <utility>
using namespace std;

// Shared_ptr allows for multiple objects to access a dynamically
// allocated object 

template <typename T>
class Shared_ptr{
private:
    T* data_;
    int ref_count{0};
public:
    Shared_ptr(T data): data_(new T(data)){};

    ~Shared_ptr(){
        delete data_;
    }

    // Copy constructor
    Shared_ptr(const Shared_ptr& other){
        this->ref_count++;
    };
    
    // Copy assignment operator
    Shared_ptr& operator=(const Shared_ptr& other){

    };

    // Move constructor
    Shared_ptr(Shared_ptr&& other){

    };

    // Move assignment operator
    Shared_ptr& operator=(Shared_ptr&& other){

    };


    T get(){
        return data_;
    }
};

int main(){
    int x = 12;

    return 0;
};
