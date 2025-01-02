#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/**
 * Lambda Syntax
 * 
 * [ captureClause ] ( parameters ) -> returnType
 * {
 *  statements;
 * }
 * 
 * - capture_list: Specifies the variables from the surrounding scope that the lambda can access.
 * - parameter_list: Parameters passed to the lambda, similar to a function.
 * - return_type: (Optional) Specifies the return type. If omitted, the compiler deduces it.
 * 
 * Capture by Value: [x] captures a copy of x.
 * Capture by Reference: [&x] allows the lambda to modify the original x.
 * 
 * [=]: Capture all variables in the current scope by value.
 * [&]: Capture all variables in the current scope by reference.
 */
int main(){
    // Valid lambda 
    auto boi = [](){
        cout << "BOI" << endl;
    };
    boi();

    // Lambda with parameters
    auto add = [](int a, int b){
        return a + b;
    };

    cout << add(2, 2) << endl;

    // Using surrounding scope
    int x = 2, y = 2;
    auto addition = [x, y](){
        return x + y;
    };

    cout << addition() << endl;

    // Modyfying existing variables
    int z = 10;

    auto change = [&z]() mutable {
        z++;
        return z;
    };

    cout << change() << endl;

    vector<int> my_vec = {1, 40, 11, 21, 7, 2, 100};

    // Lambda with STL
    sort(my_vec.begin(), my_vec.end(), [](int a, int b){
        return a < b;
    });

    for(int num: my_vec){
        cout << num << endl;
    }

    int foo = 2;
    auto foo_test{[&foo](){
        foo++;
        return foo;
    }};

    cout << endl;
    cout << foo_test() << endl;

    return 0;
}