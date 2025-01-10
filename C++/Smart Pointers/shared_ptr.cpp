#include <iostream>
#include <memory>

// Best practice

// Always make a copy of an existing std::shared_ptr if you need more than one std::shared_ptr pointing to the same resource.
// Shared_ptr constructors: Raw Pointer(T*), pass a raw pointer to the object that you want to manage

class Resource{
public:
    Resource(){
        std::cout << "Resource accquired" << std::endl;
    }

    ~Resource(){
        std::cout << "Resource destroyed" << std::endl;
    }
};

int main(){
    // Allocate a Resource object and have it owned by the std::shared_ptr
    Resource* res { new Resource };
    std::shared_ptr<Resource> ptr1{ res }; // Make another std::shared_ptr pointing to the same thing
    {
        std::shared_ptr<Resource> ptr2 { ptr1 }; // make another std::shared_ptr pointing to the same thing

        std::cout << "Killing one shared pointer \n";
    } // ptr2 goes out of scope here, but nothing happens

    std::cout << "Killing another shared pointer \n";

    return 0;
} // ptr1 goes out of scope here, and the allocated Resource is destroyed