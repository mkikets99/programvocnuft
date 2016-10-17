#include "_51.h"
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/*// Вычисление значения функции ln((1+x)/(1-x)) с помощью суммы ряда.
//подключаем библиотечные функции
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//главная часть программы
void main()
{
	float x; //аргумент
	float Xnach, Xkon; //Хнач, Хконеч
	float h; //шаг
	float e; //точность
			 //ввод исходных данных
	printf_s("\n\n");
	printf_s("Vvedite Xnach: ");
	scanf_s("%f", &Xnach);
	printf_s("Vvedite Xkon: ");
	scanf_s("%f", &Xkon);
	printf_s("Vvedite h:");
	scanf_s("%f", &h);
	printf_s("Vvedite e: ");
	scanf_s("%f", &e);
	//выводим заголовок таблицы
	printf_s("\n");
	printf_s(" x          f(x)       summa      n \n");
	//цикл для каждого значения аргумента
	for (x = Xnach; x <= Xkon; x += h)
	{
		float a; //значение слагаемого ряда
		float chis = 2 * x, znam = 1; //числитель и знаменатель слагаемого
		float q = x*x; //на это число будем домножать числитель
		int n = 0; //число слагаемых ряда
		float S = 0; //сумма ряда
					 //вычисляем первое слагаемое
		a = chis / znam;
		//цикл, пока модуль верхней границы остатка больше точности
		//(верх.граница = бесконечной сумме геометр.прогрессии a,a*q,a*q*q...)
		while (fabs(a / (1 - q)) > e)
		{
			S = S + a;//добавляем слагаемое к сумме
					  //изменяем числитель и знаменатель
			chis = chis*q;	   znam = znam + 2;
			//получаем следующее слагаемое
			n++;
			a = chis / znam;
		}
		//выводим строку таблицы, по 10 символов на число
		printf_s("%10f %10f %10f  %i \n", x, log((1 + x) / (1 - x)), S, n);
	}
	system("pause");
}*/

long double Lab5_1::Suma(float x,int n)
{
	int j;
	long double s;
	s = 0;     // Спочатку сума дорiвнює нулю
	for (j = 0;j <= n;j++) s += (((pow(-1, j)) / (2 * j + 1))*pow(x, 2 * j + 1)); //  Обчислюємо суму 
																				  //видiлене червоним замiнити на власний вираз
	return s;
}
int Lab5_1::CallAll() {
	system("color 3e");
	setlocale(LC_CTYPE, "rus");
	system("cls");
	float x;
	int n;
	cout << "Задача варiанту №06\n";
	cout << "Vvedit x=";
	cin >> x;
	cout << "Vvedit n=";
	cin >> n;
	cout << "Summa arctan(x)= " << Suma(x,n) << '\t';
	_getch();
	return 0;
}
Lab5_1::Lab5_1()
{
}


Lab5_1::~Lab5_1()
{
}

int Lab5_2::fact(int n)/*звернiть увагу чи присутня ця функцiя у виразi вашого варiанту!*/
{
	int i;
	int F;
	F = 1;      //Спочатку сума дорiвнює нулю, а добуток одиницi
	for (i = 1;i <= n;i++) F = F*i;//Обчислюємо факторiал
	return  F;
}
long double Lab5_2::Suma(float x, int n)
{
	int j;
	long double s;
	s = 0;     // Спочатку сума дорiвнює нулю
	for (j = 0;j <= n;j++) s += (((pow(-1, j)) / (fact(2 * j)))*pow(x, 2 * j)); //  Обчислюємо суму 
																				  //видiлене червоним замiнити на власний вираз
	return s;
}
int Lab5_2::CallAll() {
	system("color 3e");
	setlocale(LC_CTYPE, "rus");
	system("cls");
	float x;
	int n;
	cout << "Задача варiанту №11\n";
	cout << "Vvedit x=";
	cin >> x;
	cout << "Vvedit n=";
	cin >> n;
	cout << "Summa cos(x)= " << Suma(x, n) << '\t';
	_getch();
	return 0;
}
Lab5_2::Lab5_2()
{
}


Lab5_2::~Lab5_2()
{
}
