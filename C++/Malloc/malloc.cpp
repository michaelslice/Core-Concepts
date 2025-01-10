#include <iostream>
#include <cstdlib>  // For malloc and free
using namespace std;

// Malloc: Is used for dynamic memory allocation 
// Return: A pointer to the beginning of the allocated block of memory. If failure returns nullptr
// Return: void*

int main(){

    int* arr = (int*)malloc(10 * sizeof(int));

    for(size_t i{0}; i < 10; ++i){
        arr[i] = i + 1;
    }

    for(size_t i{0}; i < 10; ++i){
        cout << arr[i] << endl;
    }

    // Free the allocated memory 
    free(arr);

    return 0;
}