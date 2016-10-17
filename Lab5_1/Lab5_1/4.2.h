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
int fact(int *n)/*звернiть увагу чи присутня ця функцiя у виразi вашого варiанту!*/
{  int i;
   int F;
   F=1;      //Спочатку сума дорiвнює нулю, а добуток одиницi
 for (i=1;i<=*n;i++) F=F*i;//Обчислюємо факторiал
   return  F;
}
long double Suma()
{ int j;
  long double s;
  s=0;     // Спочатку сума дорiвнює нулю
  for (j=1;j<=44;j++) s+=12+pow(j,2); //  Обчислюємо суму 
  //видiлене червоним замiнити на власний вираз
  return s;
}
long double Dob()
{ int i;
  long double  d;
  d=1;  //    Спочатку добуток дорiвнює одиницi
  for (i=1;i<=21;i++) d*=12+pow(i,2);//Обчислюємо добуток 
 //видiлене червоним замiнити на власний вираз
  return d;
 }
int main()
{
system("color 3e");
 setlocale(LC_CTYPE, "rus"); 
 system("cls"); 
 cout<<"Задача варiанту №06\n";
 cout<<"y=";
 cout<<Suma() <<'\t'<<Dob() <<'\t' << Suma()+Dob(); 
 _getch();
 return 0;
}


	
};
class Lab43{
	
public:
int fact(int n)/*звернiть увагу чи присутня ця функцiя у виразi вашого варiанту!*/
{  int i;
   int F;
   F=1;      //Спочатку сума дорiвнює нулю, а добуток одиницi
 for (i=1;i<=n;i++) F=F*i;//Обчислюємо факторiал
   return  F;
}
long double Suma()
{ int j;
  long double s;
  s=0;     // Спочатку сума дорiвнює нулю
  for (j=1;j<=10;j++) s+=(3+(1/fact(j))); //  Обчислюємо суму 
  //видiлене червоним замiнити на власний вираз
  return s;
}
long double Dob()
{ int i;
  long double  d;
  d=1;  //    Спочатку добуток дорiвнює одиницi
  for (i=1;i<=20;i++) d*=(pow(i,2)+8);//Обчислюємо добуток 
 //видiлене червоним замiнити на власний вираз
  return d;
 }
int main()
{
system("color 3e");
 setlocale(LC_CTYPE, "rus"); 
 system("cls"); 
 cout<<"Задача варiанту №11\n";
 cout<<"y=";
 cout<<Suma() <<'\t'<<Dob() <<'\t' << Suma()+Dob(); 
 _getch();
 return 0;
}
};
class Lab42_2{
	
public:
int fact(int n)/*звернiть увагу чи присутня ця функцiя у виразi вашого варiанту!*/
{  int i;
   int F;
   F=1;      //Спочатку сума дорiвнює нулю, а добуток одиницi
 for (i=1;i<=n;i++) F=F*i;//Обчислюємо факторiал
   return  F;
}
long double Suma(int n,int x)
{ int j;
  long double s;
  s=0;     // Спочатку сума дорiвнює нулю
  for (j=0;j<=n;j++){
   s+=((pow(-1,j)/(2*j+1))*pow(x,(2*j+1)));
   } //  Обчислюємо суму 
  //видiлене червоним замiнити на власний вираз
  return s;
}
long double inputvars(char v){
	long double a;
	char fgt[30]={'\0'};
	cout << "Введiть число "<<v<<": ";cin >> fgt;
    if(atof(fgt)<0.00&&(atof(fgt))<-1.00){
    	cout << "Число має бути вiд -1 до 1\n";
    	return inputvars(v);
	}
	else if(atof(fgt)>0.00&&atof(fgt)>1.00){
    	cout << "Число має бути вiд -1 до 1\n";
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
 cout<<"Задача варiанту №06\n";
 x=inputvars('x');
 
 cout<<"Введiть Кiнець n="; cin>>n;
 cout<<Suma(n,x); 
 _getch();
 return 0;
}
};
