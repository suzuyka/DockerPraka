#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename = "/home/filedir/text.txt";
    std::ifstream file(filename);
    
    if (!file.is_open()) {
        std::cerr << "Ошибка: не могу открыть файл " << filename << std::endl;
        return 1;
    }
    
    std::cout << "Содержимое файла " << filename << ":" << std::endl;
    std::cout << "=========================================" << std::endl;
    
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }
    
    file.close();
    
    if (file.fail() && !file.eof()) {
        std::cerr << "Ошибка при чтении файла" << std::endl;
        return 1;
    }
    
    std::cout << "=========================================" << std::endl;
    std::cout << "Файл успешно прочитан" << std::endl;
    
    return 0;
}
