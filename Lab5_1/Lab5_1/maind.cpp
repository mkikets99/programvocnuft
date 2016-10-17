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
	cout << "����i�� �=";
	cin >> x;
	cout << "��������� �=" << Lab4F3(x);
	Sleep(3000);
	return 0;
}
double inputvars(char v) {
	double a;
	char fgt[30] = { '\0' };
	cout << "����i�� �i���� ����� " << v << ": ";cin >> fgt;
	for (int i = 0;fgt[i] != '\0';i++) {
		if (fgt[i]<'0' || fgt[i]>'9'&&fgt[i] != 'e') {
			cout << "���i���. ���� ����� ������i��\n";
			return inputvars(v);
		}
	}
	a = atof(fgt);
	return a;
}
int Lab1()   //�������� � ���1
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
		cout << "\t\t����" << endl << "1-(+)" << "\t\t\t2-(-)" << endl << "3-(*)" << "\t\t\t4-(/)\n\n54-���i ��������\n\n0-���i�" << endl << endl << "��� ���i�: ";
		cin >> d;
		if (b == 0 && d == 4) {
			cout << "\n�i���� �� ���� �� �����";Sleep(3000);
		}
		else {
			switch (d) {
			case 1:
				c = a + b;cout << "���� �����: " << c;
				Sleep(3000);break;
			case 2:
				c = a - b;cout << "���� �����: " << c;
				Sleep(3000);break;
			case 3:
				c = a*b;cout << "���� �����: " << c;
				Sleep(3000);break;
			case 4:
				c = a / b;cout << "���� �����: " << c;
				Sleep(3000);break;
			case 54:

				system("cls");
				a = inputvars('a');
				b = inputvars('b');
				cout << "��i��i ���i����";
				Sleep(3000);
				break;
			case 0: break;
			default: cout << "����i�� ��������� ��������...";
			}

		}
	}

	return 0;
}
int Lab2()   //�������� � ���2
{
	return 0;
}
int Lab3()   //������� � ���3
{
	double x, y;//��i��i ���i
	int n;      //�����
	system("cls");
	cout << " \n \t\t ����������� ������ �3" << endl;
	//������� ����� �����i
	cout << " \n �������� ��������, � ��i� ��i��������� ������� ";

	cout << " \n �i������ x i �i���� n �� ���������� y �i����i��� �� ������i:"
		;

	cout << " \n1  - x                  ";
	cout << " \n2  - x2                 ";
	cout << " \n3  - x3                 ";
	cout << " \n4  - 1 / x              ";
	cout << " \n i��i ��������  0 \n   ";
	//���������� ������ �������
	cout << "n=";       cin >> n;
	//���������� ��i���� �����
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
�������� �i���
�������� �� ����� "�������" �� ������������ ���i�
********************************************************************************/
int Start()
{
	system("color 3e");
	system("cls");
	cout << "                   ���������� ������ ����                     " << endl;
	cout << "                                                                " << endl;
	cout << "                                                                " << endl;
	cout << "                                                                " << endl;
	cout << "             ��i� ��������� ������������ ���i�                  " << endl;
	cout << "                                                                " << endl;
	cout << "                  � ������ ������������� ��                     " << endl;
	cout << "                      ��������i��� ����                        " << endl;
	cout << "                                                                " << endl;
	cout << "                                                                " << endl;
	cout << "                                                                " << endl;
	cout << "                                                                " << endl;
	cout << "                                                                " << endl;
	cout << "                                                ��������:       " << endl;
	cout << "                                                �������� ��.17  " << endl;
	cout << "                                                �i���� �. I. 	  " << endl;
	cout << "                                                ��������� �. �. " << endl;
	cout << "                                                                " << endl;
	cout << "                                                �����i����:     " << endl;
	cout << "                                                ������� �.�.    " << endl;
	cout << "                                                                " << endl;
	cout << "                                                                " << endl;
	cout << "                                                                " << endl;
	cout << "                                                                " << endl;
	cout << "                        ����� 2016                              " << endl;
	cout << "                                                                " << endl;
	cout << "����������� - ������i�� ENTER             ���������� - ������i�� ESC \n";
	done = _getch();
	return  done;
}
/*******************************************************************************
�i�i��� �i���
�������� �� ����� �������� i�������i� ��� ����i��� �� �i������i ��� ��������
*******************************************************************************/
void Finish()
{
	system("color 3e");
	system("cls");
	cout << "\n\n                     ���������� ������ ����                 " << endl;
	cout << "        ����� ���i�!!! ����������i ������, ������ i �� ��i���...";
	cout << "\n\n\n\n\n\n\n\n                                                    ";

	for (int i = 5;i>0;i--, Sleep(1000)) {
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		cout << "�������� ����������� ����� " << i << " ���.";
	}
	cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cout << "�������� ����������� ����� 0 ���.";
}
/*******************************************************************************
�������� ���� � ������� ��������� �������
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
		cout << "               ������ ��������� �������     " << endl;
		cout << " 1.  ���������� �����i�       ���1           " << endl;
		cout << " 2.  �i����� ������� �i�����  ���2           " << endl;
		cout << " 3.  ��������� ������         ���3           " << endl;
		cout << " 4.  I����i������� ��������   ���4           " << endl;
		cout << " 5.  ��������� ������         ���5.06        " << endl;
		cout << " 6.  ��������� ������         ���5.11        " << endl;
		cout << " 7.  I����i������� ��������   ���5.06        " << endl;
		cout << " 8.  I����i������� ��������   ���5.11        " << endl;
		cout << " 9.  I����i������� ��������   ���5.06        " << endl;
		cout << " 10. I����i������� ��������   ���5.11        " << endl;
		//���������� ������ ��� i���� �������
		cout << " 0. ���i�                                   " << endl;
		cout << "  ��� ���i� : ";                         cin >> done;
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
������� �����i�
********************************************************************************/
int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");
	Start(); // �������� �i���
	if (done == 13)  MENU(); //������ � ����
	Finish(); //�i�i��� �i���
	return 0;
}


