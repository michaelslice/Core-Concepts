#include <iostream>
using namespace std;

// Trailing Return Type: Is a way to specify the return type
// of a function after the function parameter list using 
// the auto keyword and the -> syntax
auto add(int a, int b) -> int{
    return a + b;
}

int main(){
    
    auto add = [](int a, int b) -> int {
        return a + b;
    };

    return 0;
}