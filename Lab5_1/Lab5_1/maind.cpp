#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>
#include <string.h>
#include <windows.h>
#include <locale>
#include <math.h>
#include "4.2.h"
#include "_51.h"
using namespace std;
int done;
float Lab4F1(float x) {
	float y;
	y = atan(x) / atan(x - 5);
	return y;
}
float Lab4F2(float x) {
	float y;
	y = atan(x) + atan(2 * x);
	return y;
}
float Lab4F3(float x) {
	if (x>1) return Lab4F1(x);
	else if (x >= 2) return Lab4F2(x);
}
int Lab4() {
	system("cls");
	float x;
	cout << "Введiть х=";
	cin >> x;
	cout << "Результат у=" << Lab4F3(x);
	Sleep(3000);
	return 0;
}
double inputvars(char v) {
	double a;
	char fgt[30] = { '\0' };
	cout << "Введiть дiйсне число " << v << ": ";cin >> fgt;
	for (int i = 0;fgt[i] != '\0';i++) {
		if (fgt[i]<'0' || fgt[i]>'9'&&fgt[i] != 'e') {
			cout << "Невiрно. Будь ласка повторiть\n";
			return inputvars(v);
		}
	}
	a = atof(fgt);
	return a;
}
int Lab1()   //програма з ЛПР1
{
	double a, b, c;
	int d = -1;
	system("cls");
	a = inputvars('a');
	b = inputvars('b');
	while (d != 0) {
		d = 0;
		system("cls");

		c = 0;
		system("cls");
		cout << "\t\tМеню" << endl << "1-(+)" << "\t\t\t2-(-)" << endl << "3-(*)" << "\t\t\t4-(/)\n\n54-Новi значення\n\n0-вихiд" << endl << endl << "Ваш вибiр: ";
		cin >> d;
		if (b == 0 && d == 4) {
			cout << "\nДiлити на нуль не можна";Sleep(3000);
		}
		else {
			switch (d) {
			case 1:
				c = a + b;cout << "Ваше число: " << c;
				Sleep(3000);break;
			case 2:
				c = a - b;cout << "Ваше число: " << c;
				Sleep(3000);break;
			case 3:
				c = a*b;cout << "Ваше число: " << c;
				Sleep(3000);break;
			case 4:
				c = a / b;cout << "Ваше число: " << c;
				Sleep(3000);break;
			case 54:

				system("cls");
				a = inputvars('a');
				b = inputvars('b');
				cout << "Змiннi замiнено";
				Sleep(3000);
				break;
			case 0: break;
			default: cout << "Введiть правильне значення...";
			}

		}
	}

	return 0;
}
int Lab2()   //програма з ЛПР2
{
	return 0;
}
int Lab3()   //приклад з ЛПР3
{
	double x, y;//вхiднi данi
	int n;      //номер
	system("cls");
	cout << " \n \t\t Лабораторна робота №3" << endl;
	//вивести умову задачi
	cout << " \n Створити програму, в якiй здiйснюється читання ";

	cout << " \n дiйсного x i цiлого n та обчислення y вiдповiдно до таблицi:"
		;

	cout << " \n1  - x                  ";
	cout << " \n2  - x2                 ";
	cout << " \n3  - x3                 ";
	cout << " \n4  - 1 / x              ";
	cout << " \n iншi значення  0 \n   ";
	//зчитування номера команди
	cout << "n=";       cin >> n;
	//зчитування вхiдних даних
	cout << "x=";       cin >> x;
	switch (n)
	{
	case 1:	y = x;   	break;
	case 2:	y = x * x;	break;
	case 3:	y = x * x * x;	break;
	case 4:	y = 1 / x;	break;
	default:	y = 0;
	}
	cout << "y=" << y;
	Sleep(3000);
	return 0;
}
/*******************************************************************************
Стартове вiкно
виводить на екран "титулку" до лабораторних робiт
********************************************************************************/
int Start()
{
	system("color 3e");
	system("cls");
	cout << "                   Волинський коледж НУХТ                     " << endl;
	cout << "                                                                " << endl;
	cout << "                                                                " << endl;
	cout << "                                                                " << endl;
	cout << "             Звiт виконання лабораторних робiт                  " << endl;
	cout << "                                                                " << endl;
	cout << "                  з Основи програмування та                     " << endl;
	cout << "                      алгоритмiчної мови                        " << endl;
	cout << "                                                                " << endl;
	cout << "                                                                " << endl;
	cout << "                                                                " << endl;
	cout << "                                                                " << endl;
	cout << "                                                                " << endl;
	cout << "                                                Виконали:       " << endl;
	cout << "                                                студенти гр.17  " << endl;
	cout << "                                                Кiкець М. I. 	  " << endl;
	cout << "                                                Бобикайло В. Ф. " << endl;
	cout << "                                                                " << endl;
	cout << "                                                Перевiрила:     " << endl;
	cout << "                                                Шепелюк Г.С.    " << endl;
	cout << "                                                                " << endl;
	cout << "                                                                " << endl;
	cout << "                                                                " << endl;
	cout << "                                                                " << endl;
	cout << "                        Луцьк 2016                              " << endl;
	cout << "                                                                " << endl;
	cout << "Продовження - натиснiть ENTER             Завершення - натиснiть ESC \n";
	done = _getch();
	return  done;
}
/*******************************************************************************
Фiнiшне вiкно
виводить на екран рекламну iнформацiю про технiкум та вiдомостi про студента
*******************************************************************************/
void Finish()
{
	system("color 3e");
	system("cls");
	cout << "\n\n                     Волинський коледж НУХТ                 " << endl;
	cout << "        Увага акцiя!!! Лабораторнi роботи, дорого i не якiсно...";
	cout << "\n\n\n\n\n\n\n\n                                                    ";

	for (int i = 5;i>0;i--, Sleep(1000)) {
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		cout << "Програма завершиться через " << i << " сек.";
	}
	cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cout << "Програма завершиться через 0 сек.";
}
/*******************************************************************************
Текстове меню з списком виконаних завдань
********************************************************************************/
void MENU()
{
	Lab42 aftg;
	Lab43 aftd;
	Lab42_2 afth;
	Lab5_1 sdrf;
	Lab5_2 sdrff;
	system("color 3e");
	system("cls");
	while (done != 0)
	{
		system("cls");
		cout << "               Список виконаних завдань     " << endl;
		cout << " 1.  Обчислення виразiв       ЛПР1           " << endl;
		cout << " 2.  Рiшення системи рiвнянь  ЛПР2           " << endl;
		cout << " 3.  Аудиторна робота         ЛПР3           " << endl;
		cout << " 4.  Iндивiдуальне завдання   ЛПР4           " << endl;
		cout << " 5.  Аудиторна робота         ЛПР5.06        " << endl;
		cout << " 6.  Аудиторна робота         ЛПР5.11        " << endl;
		cout << " 7.  Iндивiдуальне завдання   ЛПР5.06        " << endl;
		cout << " 8.  Iндивiдуальне завдання   ЛПР5.11        " << endl;
		cout << " 9.  Iндивiдуальне завдання   ЛПР5.06        " << endl;
		cout << " 10. Iндивiдуальне завдання   ЛПР5.11        " << endl;
		//продовжити список для iнших програм
		cout << " 0. Вихiд                                   " << endl;
		cout << "  Ваш вибiр : ";                         cin >> done;
		switch (done)
		{
		case 1:  Lab1();        break;
		case 2:  Lab2();        break;
		case 3:  Lab3();        break;
		case 4:  Lab4();      break;
		case 5:  aftg.main();      break;
		case 6:  aftd.main();      break;
		case 7:  afth.main();      break;
		case 8:  aftd.main();      break;
		case 9:  sdrf.CallAll();      break;
		case 10: sdrff.CallAll();     break;
		case 0:                 break;
		default:                  break;
		}
	}
}

/*******************************************************************************
Головна функцiя
********************************************************************************/
int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");
	Start(); // стартове вiкно
	if (done == 13)  MENU(); //робота з меню
	Finish(); //фiнiшне вiкно
	return 0;
}


