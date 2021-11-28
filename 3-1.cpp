#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

/**
*\ brief Математическая функция, рассчитывающая значение функции y
*\ param x - константа, имеющая тип данных с плавающей точкой двойной точности
*\ return Возвращает значение функции y
**/

double getY(const double x);

/**
* \brief Точка входа в программу.
* \return Возвращает 0 в случае успешного выполнения.
*/
int main()
{
  const double x = 2;
  for (double x = 2; x <= 3; x = x + 0.1)
  {
    cout << "y = " << getY(x) << endl;
  }
}

double getY(const double x)
{
  return 3 * sin(sqrt(x)) + 0.39 * x - 3.8;
 }