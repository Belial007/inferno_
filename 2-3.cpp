#define _USE_MATH_DEFINES

#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;
/**
 * \brief Считывает натуральные числа 
 * \param Натуральные числа вводимые пользователем
 * \return Натуральные числа.
 **/
int read_number(const int x, const int y);

/**
 * \ short Определяет является ли среднее арифметическое двух чисел целым числом.
 *\ param x первое число.
 *\ param y второе число.
 *\ return true, если результат целое число.
 **/
int main() {
	
	setlocale(LC_ALL, "Russian");

	double x, y;

	cout << "Первое число: ";
	cin >> x;
  cout << "Второе число: ";
  cin >> y;

	double avg = (x + y) / 2.0;

	cout << "1) Среднее арифметическое чисел " << x << " и " << y << " = " << avg << " - ";

	if ((int)avg != avg) cout << " не ";

	cout << " целое число" << endl;

}