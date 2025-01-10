#include <iostream>
#include <mutex>
#include <thread>
using namespace std;

std::mutex mtx;

int main() {
    mtx.lock();
    std::cout << "FML" << std::endl;
    mtx.unlock();
    return 0;
}
