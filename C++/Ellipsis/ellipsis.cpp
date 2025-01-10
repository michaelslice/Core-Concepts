#include <iostream>
#include <cstdarg> // needed to use ellipsis
using namespace std;

// Why ellipsis are dangerous: ellipsis don’t know how many parameters were passed

// Not only do the ellipsis throw away the type of the parameters, 
// it also throws away the number of parameters in the ellipsis. 
// This means we have to devise our own solution for keeping track 
// of the number of parameters passed into the ellipsis. 
// Typically, this is done in one of three ways.

double avg(int count, ...){
    
    int sum{0};

    // We access the ellipsis through a va_list, so lets declare one
    std::va_list list;

    // We initialize the va_list using va_start. The first arguement is 
    // the list to initialize. The second arguement is the last non-ellipsis
    // parameter
    va_start(list, count);

    // Loop through all the ellipsis values
    for(int arg{0}; arg < count; ++arg){
        // We use va_arg to get values out of our ellipsis
        // The first argument is the va_list we're using
        // The second argument is the type of the value
        sum += va_arg(list, int);
    }
    
    // Cleanup the va_list when we're done.
    va_end(list);

    return static_cast<double>(sum) / count;
}

int main()
{
    std::cout << avg(5, 1, 2, 3, 4, 5) << '\n';
    std::cout << avg(6, 1, 2, 3, 4, 5, 6) << '\n';

    return 0;
}