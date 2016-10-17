// Вычисление значения функции ln((1+x)/(1-x)) с помощью суммы ряда.
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
}