#include <iostream>
using namespace std;

int main(){
    
    int x = 5;

    // Pointer
    int* y = &x;
    *y = 10; // Modyfying the value of x through pointer

    // Pointer to constant data
    int z = 10;
    const int* p = &z;
    // *p = 20; This is illegal, cannot modify z through p

    // Constant Pointer
    int a = 12;
    int* const ptr = &a;
    *ptr = 15;           // Okay: Modifying the value of 'a'
    // ptr = &x;         // Error: Cannot change what 'ptr' points t

    // Constant poiner to constant data
    int b = 10;
    const int* const w = &b;
    // *w = 20;              // Error: Cannot modify the value of 'b' through 'w'
    // w = &a;               // Error: Cannot change what 'w' points to

    return 0;
}