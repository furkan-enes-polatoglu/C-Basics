#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	// Denklem hesaplama x^2 + 3x + 5 = 0 denkleminin köklerini bul.
	
	printf("### ÝKÝNCÝ DERECEDEN DENKLEMLERÝN KÖKÜNÜ BULMA ###\n\n");
	float a,b,c;
	float x1,x2;
	float delta;
	printf("Denklemin A deðerini giriniz : "); scanf("%f",&a);
	printf("Denklemin B deðerini giriniz : "); scanf("%f",&b);
	printf("Denklemin C deðerini giriniz : "); scanf("%f",&c);
	delta= b*b-4*a*c;  // Delta formülü (-b^2-4ac)
	printf("\n");
	if(delta<0)
	{
		printf("Bu denklemin kökü yoktur.");
	}
	else
	{
		if(a==1)
		{
			printf("Oluþturulan Denklem = x^2 + %.0fx + %.0f = 0\n\n",b,c);
		}
		if(b==1)
		{
			printf("Oluþturulan Denklem = x^2 + x + %.0f = 0\n\n",a,c);
		}
		if(c==1)
		{
			printf("Oluþturulan Denklem = x^2 + %.0f + x = 0\n\n",b);
		}
		x1= (-b+sqrt(delta))/(2*a);  // 1. Kökü bulurken (-b + kök(delta) / 2*a)
		x2 = (-b-sqrt(delta))/(2*a); // 2. Kökü bulurken (-b - kök(delta) /2*a)
		printf("Denklemin kökleri;\nx1 = %.0f\nx2 = %.0f\n",x1,x2);
	}
	
}
