#include <stdio.h>
#include <locale.h>
#include <math.h>

////////////   Math S�n�f� ��lemleri   /////////////////
	
/*
int abs(x) // x tamsay�s�n�n mutlak de�erini hesaplar
double fabs(x) // x ger�el say�s�n�n mutlak de�erini hesaplar
double sqrt(x) // x tamsay�s�n�n karek�k�n� hesaplar
double pow(x,y) // x^y de�erini hesaplar
double log() // pozitif x say�s�n�n do�al logaritmas�n� hesaplar, ln(x)
double log10() // pozitif x say�s�n�n 10 taban�ndaki logaritmas�n� hesaplar
*/


int main()
{
	setlocale(LC_ALL,"Turkish");
	
	/*
	printf("-4'�n mutlak de�eri = %d\n",abs(-4));
	printf("-4.5'in mutlak de�eri = %.1f\n",fabs(-4.5));
	printf("25'in karek�k� = %.0lf\n",sqrt(25));
	printf("2 �ss� 3 = %.0f\n",pow(2,3));
	printf("Log 1 de�eri = %.1f\n",log(1));
	printf("Log 10 taban�nda 10'un de�eri = %.1f",log10(10));
	*/
	
	////////////   H�POTEN�S BULMA DE�ER�  hipotenus (c)2=a^2 + b^2; daha sonra sonucun karek�k� al�n�r. /////////////
	
	/*
	int a=3,b=4,hipotenus;
	hipotenus=pow(a,2) + pow(b,2);
	printf("Hipoten�s = %.1f",sqrt(hipotenus));
	*/
	
	
	/*
	int a,b;
	double hip;
	printf("A kenar�n�n de�erini giriniz = "); scanf("%d",&a);
	printf("B kenar�n�n de�erini giriniz = "); scanf("%d",&b);
	hip = a*a+b*b;
	printf("Hipoten�s = %.1lf",sqrt(hip));
	*/
	
}
	


	
	
	
