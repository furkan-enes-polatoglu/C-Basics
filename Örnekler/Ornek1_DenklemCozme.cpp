#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	// Denklem hesaplama x^2 + 3x + 5 = 0 denkleminin k�klerini bul.
	
	printf("### �K�NC� DERECEDEN DENKLEMLER�N K�K�N� BULMA ###\n\n");
	float a,b,c;
	float x1,x2;
	float delta;
	printf("Denklemin A de�erini giriniz : "); scanf("%f",&a);
	printf("Denklemin B de�erini giriniz : "); scanf("%f",&b);
	printf("Denklemin C de�erini giriniz : "); scanf("%f",&c);
	delta= b*b-4*a*c;  // Delta form�l� (-b^2-4ac)
	printf("\n");
	if(delta<0)
	{
		printf("Bu denklemin k�k� yoktur.");
	}
	else
	{
		if(a==1)
		{
			printf("Olu�turulan Denklem = x^2 + %.0fx + %.0f = 0\n\n",b,c);
		}
		if(b==1)
		{
			printf("Olu�turulan Denklem = x^2 + x + %.0f = 0\n\n",a,c);
		}
		if(c==1)
		{
			printf("Olu�turulan Denklem = x^2 + %.0f + x = 0\n\n",b);
		}
		x1= (-b+sqrt(delta))/(2*a);  // 1. K�k� bulurken (-b + k�k(delta) / 2*a)
		x2 = (-b-sqrt(delta))/(2*a); // 2. K�k� bulurken (-b - k�k(delta) /2*a)
		printf("Denklemin k�kleri;\nx1 = %.0f\nx2 = %.0f\n",x1,x2);
	}
	
}
