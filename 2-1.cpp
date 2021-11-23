#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>

using namespace std;

/**
* \brief Математическая функция, рассчитывающая объём шара
* \radius - радиус шара
* \return - объём шара
**/
double GetVolume(const double );

/**
* \brief Математическая функция, рассчитывающая площадь поверхности шара
* \radius - радиус шара
* \return - площадь поверхности шара
**/
double GetSurfaceArea(const double r);

/**
 * \brief Точка входа в программу.
 */
int main() {
  double r;

  cout << "Введите радиус и нажмите Enter: \n";
  cin >> r;

	const auto volume = GetVolume(r);
  const auto surfacearea = GetSurfaceArea(r);

	cout << "Радиус r = " << r << "\n Объём шара = " << volume << "\n Площадь поверхности шара = " << surfacearea;
	return 0;
}

double GetVolume(const double r) { return pow(r, 3) * ((4 * M_PI)/3); } 
double GetSurfaceArea(const double r) { return pow(r, 2) * M_PI * 4; } 