#include "_51.h"
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/*// ���������� �������� ������� ln((1+x)/(1-x)) � ������� ����� ����.
//���������� ������������ �������
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//������� ����� ���������
void main()
{
	float x; //��������
	float Xnach, Xkon; //����, ������
	float h; //���
	float e; //��������
			 //���� �������� ������
	printf_s("\n\n");
	printf_s("Vvedite Xnach: ");
	scanf_s("%f", &Xnach);
	printf_s("Vvedite Xkon: ");
	scanf_s("%f", &Xkon);
	printf_s("Vvedite h:");
	scanf_s("%f", &h);
	printf_s("Vvedite e: ");
	scanf_s("%f", &e);
	//������� ��������� �������
	printf_s("\n");
	printf_s(" x          f(x)       summa      n \n");
	//���� ��� ������� �������� ���������
	for (x = Xnach; x <= Xkon; x += h)
	{
		float a; //�������� ���������� ����
		float chis = 2 * x, znam = 1; //��������� � ����������� ����������
		float q = x*x; //�� ��� ����� ����� ��������� ���������
		int n = 0; //����� ��������� ����
		float S = 0; //����� ����
					 //��������� ������ ���������
		a = chis / znam;
		//����, ���� ������ ������� ������� ������� ������ ��������
		//(����.������� = ����������� ����� �������.���������� a,a*q,a*q*q...)
		while (fabs(a / (1 - q)) > e)
		{
			S = S + a;//��������� ��������� � �����
					  //�������� ��������� � �����������
			chis = chis*q;	   znam = znam + 2;
			//�������� ��������� ���������
			n++;
			a = chis / znam;
		}
		//������� ������ �������, �� 10 �������� �� �����
		printf_s("%10f %10f %10f  %i \n", x, log((1 + x) / (1 - x)), S, n);
	}
	system("pause");
}*/

long double Lab5_1::Suma(float x,int n)
{
	int j;
	long double s;
	s = 0;     // �������� ���� ���i���� ����
	for (j = 0;j <= n;j++) s += (((pow(-1, j)) / (2 * j + 1))*pow(x, 2 * j + 1)); //  ���������� ���� 
																				  //���i���� �������� ���i���� �� ������� �����
	return s;
}
int Lab5_1::CallAll() {
	system("color 3e");
	setlocale(LC_CTYPE, "rus");
	system("cls");
	float x;
	int n;
	cout << "������ ���i���� �06\n";
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

int Lab5_2::fact(int n)/*�����i�� ����� �� �������� �� �����i� � �����i ������ ���i����!*/
{
	int i;
	int F;
	F = 1;      //�������� ���� ���i���� ����, � ������� ������i
	for (i = 1;i <= n;i++) F = F*i;//���������� ������i��
	return  F;
}
long double Lab5_2::Suma(float x, int n)
{
	int j;
	long double s;
	s = 0;     // �������� ���� ���i���� ����
	for (j = 0;j <= n;j++) s += (((pow(-1, j)) / (fact(2 * j)))*pow(x, 2 * j)); //  ���������� ���� 
																				  //���i���� �������� ���i���� �� ������� �����
	return s;
}
int Lab5_2::CallAll() {
	system("color 3e");
	setlocale(LC_CTYPE, "rus");
	system("cls");
	float x;
	int n;
	cout << "������ ���i���� �11\n";
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
