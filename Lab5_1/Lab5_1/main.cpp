// ���������� �������� ������� ln((1+x)/(1-x)) � ������� ����� ����.
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
}