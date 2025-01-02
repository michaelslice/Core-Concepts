#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int x = 4;

    // Outputs the size of the variable
    cout << left << "Size of bytes " << setw(7) << right << sizeof(x) << '\n';
    
    // &x address of operator
    cout << left << "Address of x in hex " << setw(5) << &x << '\n';
    
    return 0;
}