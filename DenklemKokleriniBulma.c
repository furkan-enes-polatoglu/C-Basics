#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	float a,b,c;
	float x1,x2;
	float delta;
	printf("Denklem = x^2 - 3x + 2 = 0\n");
	printf("Denklemin a deðerini giriniz : "); scanf("%f",&a);
	printf("Denklemin b deðerini giriniz : "); scanf("%f",&b);
	printf("Denklemin c deðerini giriniz : "); scanf("%f",&c);
	delta=b*b-4*a*c;
	if(delta<0)
	{
		printf("Denklemin kökü yoktur");
	}
	else if(delta==0)  //-b/2a
	{	
		x1 = (-b)/(2*a);
		printf("x1 = %f",x1);
	}
	else
	{
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("x1 = %.0f\n",x1);
		printf("x2 = %.0f",x2);
	}
}
