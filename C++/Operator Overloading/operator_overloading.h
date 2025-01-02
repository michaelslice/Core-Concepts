#ifndef TEST
#define TEST

#include <iostream>
#include <iomanip>
using namespace std;

class Currency{
private:
    int money_{0};
public:
    Currency(int money) : money_(money) {};
    
    int get_currency() const;
    void set_currency(int money);

    friend Currency operator+(const Currency& c1, const Currency& c2);
    friend Currency operator-(const Currency& c1, const Currency& c2);
    friend std::ostream& operator<<(std::ostream& os, const Currency& currency);
    friend std::istream& operator>>(std::istream& is, const Currency& currency);
    friend bool operator==(const Currency& c1, const Currency& c2);
    friend bool operator!=(const Currency& c1, const Currency& c2);
    
    friend bool operator<(const Currency& c1, const Currency& c2);
    friend bool operator>(const Currency& c1, const Currency& c2);

    friend bool operator <=(const Currency& c1, const Currency& c2);
    friend bool operator >=(const Currency& c1, const Currency& c2);
};

int Currency::get_currency() const{
    return this->money_;
};

void Currency::set_currency(int money){
    this->money_ = money;
};

Currency operator+(const Currency& c1, const Currency& c2){
    return Currency(c1.get_currency() + c2.get_currency()); 
};

Currency operator-(const Currency& c1, const Currency& c2){
    return Currency(c1.get_currency() - c2.get_currency()); 
};

std::ostream& operator<<(std::ostream& os, const Currency& currency){
    os << currency.get_currency();
    return os;
}

std::istream& operator>>(std::istream& is, Currency& currency){
    int value;
    is >> value;
    currency.set_currency(value);
    return is;
}

bool operator==(const Currency& c1, const Currency& c2){
    return c1.get_currency() == c2.get_currency();
}

bool operator!=(const Currency& c1, const Currency& c2){
    return !(operator==(c1, c2));
};

bool operator<(const Currency& c1, const Currency& c2){
    return c1.get_currency() < c2.get_currency();
};

bool operator>(const Currency& c1, const Currency& c2){
    return operator<(c2, c1);
};

bool operator <=(const Currency& c1, const Currency& c2){
    return !operator>(c1, c2);
}

bool operator >=(const Currency& c1, const Currency& c2){
    return !operator<(c1, c2);
}

#endif