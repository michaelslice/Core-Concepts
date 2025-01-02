#include <iostream>
#include <iomanip>
using namespace std;

// Function template
template <typename T> 
T addition(T lhs, T rhs){
    return lhs + rhs;
}

// Class templates, easy way to make a reusuable class
template<typename T> class Bank{
private:
    T money_;
public:
    Bank(T money) : money_(money) {};
    void deposit(T money);
    void withdraw(T amount);

    T get_money(){
        return this->bozo_;   
    };

    void set_money(T money){
        this->money_ = money;
    }

    void display(){
        std::cout << this->money_ << std::endl;
    }
};

template <typename T>
void Bank<T>::deposit(T money){
    this->money_ += money;
}

template <typename T>
void Bank<T>::withdraw(T amount){
    if(amount > this->money_){
        cout << "Error not enough money" << endl;
    }
    else {
        this->money_ -= amount;
    }
}

int main(){
    Bank<int> bank(10);

    bank.display();

    return 0; 
}