#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

/**
 * \brief Константы объёма и площади поверхности шара.
 */
enum class BALL
{
    /**
     * \brief Объём шара.
     */
    Volume,

    /**
     * \brief Площадь поверхности шара.
     */
    SurfaceArea
};

/**
*\ brief Математическая функция, рассчитывающая объём шара
*\ R - радиус шара
*\ return - объём шара
**/
double GetVolume(const double R);

/**
*\ brief Математическая функция, рассчитывающая площадь поверхности шара
*\ R - радиус шара
*\ return - площадь поверхности шара
**/
double GetSurfaceArea(const double R);

/**
 * \brief Точка входа в программу.
 * \return Возвращает 0 в случае успеха.
 */
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Что вы хотите узнать? "
        << "\nОбъём - " << static_cast<int>(BALL::Volume)
        << "\nПлощадь поверхности - " << static_cast<int>(BALL::SurfaceArea);
    cout << endl; 
    int ball;
    cin >> ball;
    double R = 0.0;
    cout << "Введите R ";
    cin >> R;

    const auto Figure = static_cast<BALL>(ball);
    switch (Figure)
    {
    case BALL::Volume:
        cout << "V = " << GetVolume(R);
        break;
    case BALL::SurfaceArea:
        cout << "S = " << GetSurfaceArea(R);
        break;
        return 0;
    }
}

double GetVolume(const double R) {
    double V = 0.0;
    V = pow(R, 3)* ((4 * M_PI) / 3);
    return V;
}

double GetSurfaceArea(const double R) {
    double S = 0.0;
    S = pow(R, 2)* M_PI * 4 ;
    return S;
}