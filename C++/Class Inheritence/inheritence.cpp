#include <iostream>
#include <string>
using namespace std;

class Person{

public:
    string name_ = "";
    
    string get_name(){
        return this->name_;
    }
};

class BaseBallPlayer : public Person{
private:
    int batting_average_{0};
    int home_runs_{0};
};

int main(){
    BaseBallPlayer player;
    
    player.name_ = "Joe";
    
    cout << player.get_name() << endl;
    return 0;
}