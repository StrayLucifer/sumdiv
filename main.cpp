#include <iostream>
#include "funch.h"

int main()
{
	float num1 = 0, num2 = 0;
	int switch_number = 0;
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите два числа..." << std::endl;
	std::cout << "Первое число - ";
	std::cin >> num1;
	std::cout << "Первое число - ";
	std::cin >> num2;
	do
	{
		system("cls");
		std::cout << "Какую операцию хотите провести с этими числами?" << std::endl;
		std::cout << "1 - сложение" << std::endl;
		std::cout << "2 - вычитание" << std::endl;;
		std::cout << "3 - умножение" << std::endl;;
		std::cout << "4 - деление" << std::endl;;
		std::cin >> switch_number;
		if ((switch_number == 1) || (switch_number == 2) || (switch_number == 3) || (switch_number == 4))
		{
			break;
		}
	} while (true);

	system("cls");

	switch (switch_number)
	{
	case 1:
	{
		std::cout << "Сложение в разработке" << std::endl;
		system("pause");
		break;
	}

	case 2:
	{
		std::cout << "Вычитание в разработке" << std::endl;
		system("pause");
		break;
	}

	case 3:
	{
		std::cout << "Умножение в разработке" << std::endl;
		system("pause");
		break;
	}

	case 4:
	{
		std::cout << "Деление в разработке" << std::endl;
		system("pause");
		break;
	}
	default:
		break;
	}

	return 0;
}