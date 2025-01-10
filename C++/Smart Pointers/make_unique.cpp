#include <iostream>
#include <memory>

// Best practice

// Use std::make_unique() instead of creating std::unique_ptr and using new yourself.

class Fraction{
private:
    int m_numerator_{0};
    int m_denominaotr_{1};

public:
    Fraction(int numerator = 0, int demoniator = 1):
        m_numerator_{numerator}, m_denominaotr_(demoniator)
    {};

    friend std::ostream& operator<<(std::ostream& out, const Fraction& f1){
        out << f1.m_numerator_ << "/" << f1.m_denominaotr_;
        return out;
    }
};

int main(){

    // Create a single dynamically allocated Fraction with numerator 3 and denominator 5
    // We can also use automatic type deduction to good effect here
    auto f1{ std::make_unique<Fraction>(3, 5) };
    std::cout << *f1 << '\n';

    auto f2{ std::make_unique<Fraction[]>(4) };
    std::cout << f2[0] << '\n';

    return 0;
}