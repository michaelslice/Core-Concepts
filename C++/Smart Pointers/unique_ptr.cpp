#include <iostream>
#include <memory>
using namespace std;

// Question: What happens if you try and copy a unique_ptr
// Answer: The code will not compile, because unique_ptr represents sole ownership for a dynamically allocated object

// Question: What happens when a unique_ptr goes out of scope
// Answer: The unique_ptr's destructor deletes the object it manages by calling delete on the raw pointer it holds

class Resource{
public:
    Resource(){
        cout << "Resource accquired" << endl;
    }
    
    ~Resource(){
        cout << "Resource destroyed" << endl;
    }
};

int main(){
    std::unique_ptr<Resource> res1{ new Resource{} }; // Resource created here
    std::unique_ptr<Resource> res2{}; // Start as nullptr
    
    cout << "res1 is " << (res1 ? "not null \n" : "null \n");
    cout << "res2 is " << (res2 ? "not null \n" : "null \n");
    
    // res2 = res1 // Wont compile copy assignment is disabled
    res2 = std::move(res1); // res2 assume ownership, res1 is set to null

    cout << "Ownership transferred \n";

    cout << "res1 is " << (res1 ? "not null \n" : "null \n");
    cout << "res2 is " << (res2 ? "not null \n" : "null \n");

    return 0;
} // Resource destroyed here when res2 goes out of scope