#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	char islem;
	int s1,s2,sonuc;
	printf("Yapaca��n�z i�lemi se�iniz ( +, -, *, / ) : "); scanf("%c",&islem);
	printf("1.Say�y� giriniz : "); scanf("%d",&s1);
	printf("2.Say�y� giriniz : "); scanf("%d",&s2);
	switch(islem)
	{
		case '+': sonuc = s1+s2; break;
		case '-': sonuc = s1-s2; break;
		case '*': sonuc = s1*s2; break;
		case '/': sonuc = s1/s2; break;
		default: printf("Hatal� ��lem\n");
	}
	printf("Sonu� = %d",sonuc);
}
