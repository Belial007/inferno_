# define  _USE_MATH_DEFINES

# включить  < iostream >
# включить  < cmath >

используя  пространство имен  std ;

/ * *
* \ short Математическая функция, рассчитывающая площадь прямоугольника
* \ param const double a - длина прямоугольника, имеющая тип данных с плавающей точкой двойной точности
* \ param const double n - коэффициент, имеющий значение тип данных с плавающей точкой двойной точности
* \ return Возвращает площадь чисел
* * /
double  getS ( const  double a, const  double n);

/ * *
* \ short Математическая функция, рассчитывающая периметр прямоугольника
* \ param const double a - длина прямоугольника, имеющая тип данных с плавающей точкой двойной точности
* \ param const double n - коэффициент, имеющий значение тип данных с плавающей точкой двойной точности
* \ return Возвращает периметр прямоугольника 
* * /
double  getP ( const  double a, const  double n);


/ * *
 * \ short Точка входа в программу.
 * \ return Возвращает 0 в случае успешного выполнения.
 * /
int  main () {
  двойной а, н;

  cout << " Увеличьте длину и коэффициент и нажмите Enter: \ n " ;
  cin >> a >> n;

	const  auto S = getS (a, n);
	const  auto P = getP (a, n);

	cout << " Стророна a = " << a << " \ n Коэффициент n = " << n << " \ n Периметр = " << S << " \ n Площадь = " << P;
	возврат  0 ;
}

двойной  getS ( const  double a, const  double n) { return  pow (a, 2 ) * n; }
двойной  getP ( const  double a, const  double n) { return  2 * a * ( 1 + n); }