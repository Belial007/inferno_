# define  _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

/**
* \brief Математическая функция, рассчитывающая площадь прямоугольника
* \param const double a - длина прямоугольника, имеющая тип данных с плавающей точкой двойной точности
* \param const double n - коэффициент, имеющий тип данных с плавающей точкой двойной точности
* \return Возвращает площадь чисел
**/
double getSquare(const double a, const double n);

/**
* \brief Математическая функция, рассчитывающая периметр прямоугольника
* \param длина прямоугольника, имеющая тип данных с плавающей точкой двойной точности
* \param коэффициент, имеющий тип данных с плавающей точкой двойной точности
* \return периметр прямоугольника 
**/
double getPerimeter(const double a, const double n);


/**
 * \brief Точка входа в программу.
 * \return Возвращает 0 в случае успешного выполнения.
 */
int main() {
  double a, n;

  cout << "Введите длину и коэффициент и нажмите Enter: \n";
  cin >> a >> n;

	const auto square = getSquare(a, n);
	const auto perimeter = getPerimeter(a, n);
  cout << "Стророна a = " << a << "\nКоэффициент n = " << n << "\nПериметр = " << square << "\nПлощадь = " << perimeter;
	return 0;
}
  
double getSquare(const double a, const double n) { return pow(a, 2) * n; } 
double getPerimeter(const double a, const double n) { return 2 * a * (1 + n); }