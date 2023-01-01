#include <iostream>
#include <typeinfo>
#include <conio.h>
#include <cstring>
using namespace std;
int main()
{
	char choice[60];
	setlocale(0, "rus");
	do {
	point:
		cout << "Вас приветствует меню. Выберите одну из слюдующих опций : \n";
		cout << "1. Вывод чётных чисел до определенного значения\n";
		cout << "2. Сравнение двух чисел\n";
		cout << "3. Выход из меню\n";
		cout << "Введите число : ";
		cin >> choice;
		if (strlen(choice) >= 2)
		{
			cout << "Нету такой опции \n";
			goto point;
		}
			switch (*choice) {
			default: cout << "Нету такой опции \n"; break;
			case '1':
				int number;
				cout << "Напишите границу :";
				cin >> number;
				cout << "Четные числа от 0 до " << number << " : \n";
				if (number > 0) {
					for (int i = 0; i <= number; i += 2) {
						cout << i << endl;
					}
				}
				else
					for (int i = 0; i >= number; i -= 2) {
						cout << i << endl;
					}
				break;
			case '2':
				cout << " Введите два числа. Но сделайте это так, чтобы первое было больше второго : ";
				double chisl1, chisl2;
				cin >> chisl1 >> chisl2;
				if (chisl1 < chisl2) {
					cout << " Число " << chisl1 << " < " << chisl2 << endl;
				}
				else {
					cout << "Числа от " << chisl1 << " до " << chisl2 << ":\n";
					for (int i = chisl1; i >= chisl2; i--) {
						cout << i << endl;
					}
				}
				break;
			case '3': break;
			}
		} while (*choice != '3');
	cout << " Вы вышли из меню...";
	return 0;
}

