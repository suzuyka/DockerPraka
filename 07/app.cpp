#include <iostream>
#include <cstdlib>

int main() {
    const char* username = std::getenv("USERNAME");
    
    if (username) {
        std::cout << "USERNAME = " << username << std::endl;
    } else {
        std::cout << "USERNAME = " << std::endl;
    }
    
    return 0;
}
