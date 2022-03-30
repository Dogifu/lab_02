#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    std::string name; // Инициальзируем переменную name типа string
    std::cout << "Input user_name"; 
    std::cin >> name; // получаем имя пользователя
    std::cout << "Hello world from " << name << std::endl; // Выводим преветствие
    return 0;
}
