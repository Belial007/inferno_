#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

/**
* \brief Функция расчёта кинетической энергии
* \param - масса, имеющая тип данных с плавающей точкой двойной точности
* \param - скорость, имеющая тип данных с плавающей точкой двойной точности
* \return Возвращает Кинетическую энергию 
**/
double gete(const double m, const double v);

/**
 * \brief Точка входа в программу.
 * \return Возвращает 0 в случае успешного выполнения.
  */
int main() {
  double m, v;

  cout << "Введите массу и скорость и нажмите Enter: \n";
  cin >> m >> v;

	const auto e = gete(m, v);

	cout << "Масса m = " << m << "\nСкорость v = " << v << "\nКинетическая энергия = " << e;
	return 0;
}

double gete(const double m, const double v) { 
  return (m * pow(v, 2)) / 2; } 