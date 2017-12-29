#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	float vize, final, ort;
	printf("Vize notunuzu giriniz : "); scanf("%f",&vize);
	printf("Final notunuzu giriniz : "); scanf("%f",&final);
	ort = vize*0.4+final*0.6;
	if(ort>=50 && final>=50)
	{
		printf("%.1f ile geçtiniz!",ort);
	}
	else
	{
		printf("%.1f ile kaldýnýz!",ort);
	}
	return 0;
}
