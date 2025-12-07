#include <iostream>
#include <chrono>
#include <thread>

int main() {
    std::cout << "C++ контейнер запущен!" << std::endl;
    int t = 0;
    
    while (true) {
        std::cout << "C++ app работает..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(20));
    }
    
    return 0;
}
