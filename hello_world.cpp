#include <iostream>
using namespace std;
int main() {
	//���������� ��� ����� ������������
	std::string name;
	//������ ��� ������������
	std::cout <<"Enter your name: ";
	std::cin >> name;
	//������� ����������� � ��� ������������
	std::cout << "Hello World from " << name << "!" << std::endl;
	return 0;
}
