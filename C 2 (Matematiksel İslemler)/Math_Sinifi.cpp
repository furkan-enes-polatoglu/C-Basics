#include <stdio.h>
#include <locale.h>
#include <math.h>

////////////   Math Sýnýfý Ýþlemleri   /////////////////
	
/*
int abs(x) // x tamsayýsýnýn mutlak deðerini hesaplar
double fabs(x) // x gerçel sayýsýnýn mutlak deðerini hesaplar
double sqrt(x) // x tamsayýsýnýn karekökünü hesaplar
double pow(x,y) // x^y deðerini hesaplar
double log() // pozitif x sayýsýnýn doðal logaritmasýný hesaplar, ln(x)
double log10() // pozitif x sayýsýnýn 10 tabanýndaki logaritmasýný hesaplar
*/


int main()
{
	setlocale(LC_ALL,"Turkish");
	
	/*
	printf("-4'ün mutlak deðeri = %d\n",abs(-4));
	printf("-4.5'in mutlak deðeri = %.1f\n",fabs(-4.5));
	printf("25'in karekökü = %.0lf\n",sqrt(25));
	printf("2 üssü 3 = %.0f\n",pow(2,3));
	printf("Log 1 deðeri = %.1f\n",log(1));
	printf("Log 10 tabanýnda 10'un deðeri = %.1f",log10(10));
	*/
	
	////////////   HÝPOTENÜS BULMA DEÐERÝ  hipotenus (c)2=a^2 + b^2; daha sonra sonucun karekökü alýnýr. /////////////
	
	/*
	int a=3,b=4,hipotenus;
	hipotenus=pow(a,2) + pow(b,2);
	printf("Hipotenüs = %.1f",sqrt(hipotenus));
	*/
	
	
	/*
	int a,b;
	double hip;
	printf("A kenarýnýn deðerini giriniz = "); scanf("%d",&a);
	printf("B kenarýnýn deðerini giriniz = "); scanf("%d",&b);
	hip = a*a+b*b;
	printf("Hipotenüs = %.1lf",sqrt(hip));
	*/
	
}
	


	
	
	
