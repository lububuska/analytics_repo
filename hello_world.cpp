#include <iostream>
int
main()
{
	//Переменная для имени пользователя
	std::string name;
	//Вводим имя пользователя
	std::cout << "Enter your name: ";
	std::cin >> name;
	//Выводим приветствие и имя пользователя
	std::cout << "Hello world from " << name << "!" << std::endl;
	return 0;
}