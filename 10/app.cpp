#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Открываем исходный файл
    std::ifstream input_file("/home/filedir/text.txt");
    
    // Открываем/создаем файл назначения
    std::ofstream output_file("/home/otherfiledir/text.txt");
    
    if (!input_file.is_open()) {
        std::cerr << "Ошибка: не могу открыть исходный файл" << std::endl;
        return 1;
    }
    
    if (!output_file.is_open()) {
        std::cerr << "Ошибка: не могу создать файл назначения" << std::endl;
        return 1;
    }
    
    // Копируем содержимое
    std::string line;
    while (std::getline(input_file, line)) {
        output_file << line << std::endl;
    }
    
    input_file.close();
    output_file.close();
    
    std::cout << "Файл успешно скопирован из /home/filedir/text.txt в /home/otherfiledir/text.txt" << std::endl;
    
    return 0;
}
