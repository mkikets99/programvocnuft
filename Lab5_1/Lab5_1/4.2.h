#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>
#include <string.h>
#include <windows.h>
#include <locale>
#include <math.h>
using namespace std;
class Lab42{
	
public:
int fact(int *n)/*�����i�� ����� �� �������� �� �����i� � �����i ������ ���i����!*/
{  int i;
   int F;
   F=1;      //�������� ���� ���i���� ����, � ������� ������i
 for (i=1;i<=*n;i++) F=F*i;//���������� ������i��
   return  F;
}
long double Suma()
{ int j;
  long double s;
  s=0;     // �������� ���� ���i���� ����
  for (j=1;j<=44;j++) s+=12+pow(j,2); //  ���������� ���� 
  //���i���� �������� ���i���� �� ������� �����
  return s;
}
long double Dob()
{ int i;
  long double  d;
  d=1;  //    �������� ������� ���i���� ������i
  for (i=1;i<=21;i++) d*=12+pow(i,2);//���������� ������� 
 //���i���� �������� ���i���� �� ������� �����
  return d;
 }
int main()
{
system("color 3e");
 setlocale(LC_CTYPE, "rus"); 
 system("cls"); 
 cout<<"������ ���i���� �06\n";
 cout<<"y=";
 cout<<Suma() <<'\t'<<Dob() <<'\t' << Suma()+Dob(); 
 _getch();
 return 0;
}


	
};
class Lab43{
	
public:
int fact(int n)/*�����i�� ����� �� �������� �� �����i� � �����i ������ ���i����!*/
{  int i;
   int F;
   F=1;      //�������� ���� ���i���� ����, � ������� ������i
 for (i=1;i<=n;i++) F=F*i;//���������� ������i��
   return  F;
}
long double Suma()
{ int j;
  long double s;
  s=0;     // �������� ���� ���i���� ����
  for (j=1;j<=10;j++) s+=(3+(1/fact(j))); //  ���������� ���� 
  //���i���� �������� ���i���� �� ������� �����
  return s;
}
long double Dob()
{ int i;
  long double  d;
  d=1;  //    �������� ������� ���i���� ������i
  for (i=1;i<=20;i++) d*=(pow(i,2)+8);//���������� ������� 
 //���i���� �������� ���i���� �� ������� �����
  return d;
 }
int main()
{
system("color 3e");
 setlocale(LC_CTYPE, "rus"); 
 system("cls"); 
 cout<<"������ ���i���� �11\n";
 cout<<"y=";
 cout<<Suma() <<'\t'<<Dob() <<'\t' << Suma()+Dob(); 
 _getch();
 return 0;
}
};
class Lab42_2{
	
public:
int fact(int n)/*�����i�� ����� �� �������� �� �����i� � �����i ������ ���i����!*/
{  int i;
   int F;
   F=1;      //�������� ���� ���i���� ����, � ������� ������i
 for (i=1;i<=n;i++) F=F*i;//���������� ������i��
   return  F;
}
long double Suma(int n,int x)
{ int j;
  long double s;
  s=0;     // �������� ���� ���i���� ����
  for (j=0;j<=n;j++){
   s+=((pow(-1,j)/(2*j+1))*pow(x,(2*j+1)));
   } //  ���������� ���� 
  //���i���� �������� ���i���� �� ������� �����
  return s;
}
long double inputvars(char v){
	long double a;
	char fgt[30]={'\0'};
	cout << "����i�� ����� "<<v<<": ";cin >> fgt;
    if(atof(fgt)<0.00&&(atof(fgt))<-1.00){
    	cout << "����� �� ���� �i� -1 �� 1\n";
    	return inputvars(v);
	}
	else if(atof(fgt)>0.00&&atof(fgt)>1.00){
    	cout << "����� �� ���� �i� -1 �� 1\n";
    	return inputvars(v);
	}
	a=atof(fgt);
	return a;
}
int main()
{
system("color 3e");
 setlocale(LC_CTYPE, "rus"); 
 system("cls"); 
 float x;
 int n;
 cout<<"������ ���i���� �06\n";
 x=inputvars('x');
 
 cout<<"����i�� �i���� n="; cin>>n;
 cout<<Suma(n,x); 
 _getch();
 return 0;
}
};
