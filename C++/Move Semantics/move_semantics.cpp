#include <iostream>

// Note that our overloaded operator= gave ownership of m_ptr from res1 to res2! 
// Consequently, we don’t end up with duplicate copies of the pointer, and everything gets tidily cleaned up.

template <typename T>
class Auto_ptr2{

T* m_ptr {};

public:
    Auto_ptr2(T* ptr=nullptr): m_ptr(ptr) {};

    ~Auto_ptr2(){
        delete m_ptr;
    }

    // A copy constructor that implements move semantics 
    Auto_ptr2(Auto_ptr2& a){
        this->m_ptr = a.m_ptr; // Transfer our dumb pointer from the source to our local object
        a.m_ptr = nullptr; // Make sure the source no longer owns the pointer 
    }

    // An assignment operator that implements move semantics
    Auto_ptr2& operator=(Auto_ptr2& a){

        if(&a == this){
            return *this;
        }

        delete m_ptr; // Make sure we deallocate any pointer the destination is already holding first
        this->m_ptr = a.m_ptr; // Then transfer our dumb pointer from the source to the local object
        a.m_ptr = nullptr; // Make sure the source no longer owns the pointer
        return *this;
    }

    T& operator*() const { return *m_ptr; }
    T* operator->() const { return m_ptr; }
    bool isNull() const { return m_ptr == nullptr; }
};

class Resource{
public:
    Resource() { std::cout << "Resource accquired" << std::endl; }
    ~Resource() { std::cout << "Resource destroyed" << std::endl; }
};

int main()
{
	Auto_ptr2<Resource> res1(new Resource());
	Auto_ptr2<Resource> res2; // Start as nullptr

	std::cout << "res1 is " << (res1.isNull() ? "null\n" : "not null\n");
	std::cout << "res2 is " << (res2.isNull() ? "null\n" : "not null\n");

	res2 = res1; // res2 assumes ownership, res1 is set to null

	std::cout << "Ownership transferred\n";

	std::cout << "res1 is " << (res1.isNull() ? "null\n" : "not null\n");
	std::cout << "res2 is " << (res2.isNull() ? "null\n" : "not null\n");

	return 0;
}