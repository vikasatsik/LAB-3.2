// LAB-3.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Lab_03_2.cpp
// Сацик Вікторія
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 17

#include <iostream>

using namespace std;

int main()
{
	double x;
	double a;
	double b;
	double c;
	double F;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// спосіб 1: розгалуження в скороченій формі
	if (x + 10 < 0 && b != 0)
		F = pow(a * x, 2.0) - c * x + b;
	if (x + 10 > 0 && b == 0)
		F = (x - a) / (x - c);
	if (!(x + 10 < 0 && b != 0) && !(x + 10 > 0 && b == 0))
		F = -x / a - c;

	cout << endl;
	cout << "1) F = " << F << endl;

	// спосіб 2: розгалуження в повній формі
	if (x + 10 < 0 && b != 0)
		F = pow(a * x, 2.0) - c * x + b;
	else
		if (x + 10 > 0 && b == 0)
			F = (x - a) / (x - c);
		else
			F = -x / a - c;

	cout << "2) F = " << F << endl;

	cin.get();
	return 0;
}
