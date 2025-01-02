#include <iostream>
using namespace std;

int main(){
    int x = 5;

    // Pointer to x
    int* y = &x;
    
    cout << x << endl;
    
    // Access address of x
    cout << y << endl;
    // Access value that y points to
    cout << *y << endl;

    return 0;
}