#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	/*
	int secim;
	surayagit : printf("1-5 aras�nda bir say� giriniz : \n"); scanf("%d",&secim);
	switch(secim)
	{
		case 1: printf("1'e bast�n�z."); break;
		case 2: printf("2'ye bast�n�z"); break;
		case 3: printf("3'e bast�n�z"); break;
		case 4: printf("4'e bast�n�z"); break;
		case 5: printf("5'e bast�n�z"); break;
		default: printf("HATA!, Say�lar 1-5 aras�nda olmal�...\n"); 
		goto surayagit; // goto komutu istedi�imiz sat�ra tekrar d�nmek i�in kullan�l�r.
		break;	
	}
	*/
	
	
	
	/*
	char karakter;
	printf("Bir karakter giriniz : "); //scanf("%c",&karakter);
	karakter = getchar(); //Klavyeden girilen tek bir karaketeri okur getchar.
	switch(karakter)
	{
		case 'a': printf("A harfine bast�n�z..."); break;
		case 'b': printf("B harfine bast�n�z..."); break;
		case 'c': printf("C harfine bast�n�z..."); break;
		default : printf("Yanl�� bir de�er girdiniz..."); break;
	}
	*/
	
	
	
	/*
	int secim;
	printf("Akrep burcu i�in     :1\n");
	printf("Ko� burcu i�in       :2\n");
	printf("Yay burcu i�in       :3\n");
	tekrar: printf("Se�im yap�n�z : "); scanf("%d",&secim);
	switch (secim)
	{
		case 1: printf("Bug�n al��veri� yapmak size iyi gelecektir."); break;
		case 2: printf("�ok karars�zs�n�z."); break;
		case 3: printf("Dost canl�s� bir ki�ili�iniz var."); break;
		default : printf("Yanl�� de�er girdiniz...\a\n");
		goto tekrar;
		break;
	}
	*/
	
	
	
	/*
	int secim,s1,s2;
	float sonuc;
	printf("Toplama i�in   :1\n");
	printf("��karma i�in   :2\n");
	printf("�arpma i�in    :3\n");
	printf("B�lme i�in     :4\n");
	printf("Se�im yap�n�z : "); scanf("%d",&secim);
	switch(secim)
	{
		case 1:
			{
				printf("2 Adet say� giriniz : \n"); scanf("%d%d",&s1,&s2);
				sonuc=s1+s2;
				break;
			}
		case 2:
			{
				printf("2 Adet say� giriniz : \n"); scanf("%d%d",&s1,&s2);
				sonuc=s1-s2;
				break;
			}
		case 3:
			{
				printf("2 Adet say� giriniz : \n"); scanf("%d%d",&s1,&s2);
				sonuc=s1*s2;
				break;
			}
		case 4:
			{
				printf("2 Adet say� giriniz : \n"); scanf("%d%d",&s1,&s2);
				sonuc=s1/s2;
				break;
			}
		default : printf("Yanl�� bir se�im yapt�n�z...\n");  break;
	}
	printf("Sonu� = %.1f",sonuc);
	*/
}
