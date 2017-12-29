#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	char islem;
	int s1,s2,sonuc;
	printf("Yapacaðýnýz iþlemi seçiniz ( +, -, *, / ) : "); scanf("%c",&islem);
	printf("1.Sayýyý giriniz : "); scanf("%d",&s1);
	printf("2.Sayýyý giriniz : "); scanf("%d",&s2);
	switch(islem)
	{
		case '+': sonuc = s1+s2; break;
		case '-': sonuc = s1-s2; break;
		case '*': sonuc = s1*s2; break;
		case '/': sonuc = s1/s2; break;
		default: printf("Hatalý Ýþlem\n");
	}
	printf("Sonuç = %d",sonuc);
}
