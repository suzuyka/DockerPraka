#include <iostream>
#include <unistd.h>  // для getcwd
#include <limits.h>  // для PATH_MAX

int main() {
    // 1. Текущая директория выполнения
    char cwd[PATH_MAX];
    if (getcwd(cwd, sizeof(cwd)) != nullptr) {
        std::cout << "Текущая директория выполнения: " << cwd << std::endl;
    }
    
    // 2. Путь к исполняемому файлу (симулируем)
    std::cout << "Путь к выполняемому скрипту: /home/appdir/app" << std::endl;
    
    // 3. Вывод из задания
    std::cout << "Hello from Lesson 4!" << std::endl;
    
    return 0;
}
