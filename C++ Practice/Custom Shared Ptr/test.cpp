#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include <utility>
using namespace std;

class Bank{
private:
    double money_;
public:
    Bank(double money): money_(money){};
};

int main(){
    Bank bank(12.0);

    shared_ptr<double> ptr(&bank);

    cout << ptr.get() << endl;

    return 0;
};
