#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	/*
	int secim;
	surayagit : printf("1-5 arasýnda bir sayý giriniz : \n"); scanf("%d",&secim);
	switch(secim)
	{
		case 1: printf("1'e bastýnýz."); break;
		case 2: printf("2'ye bastýnýz"); break;
		case 3: printf("3'e bastýnýz"); break;
		case 4: printf("4'e bastýnýz"); break;
		case 5: printf("5'e bastýnýz"); break;
		default: printf("HATA!, Sayýlar 1-5 arasýnda olmalý...\n"); 
		goto surayagit; // goto komutu istediðimiz satýra tekrar dönmek için kullanýlýr.
		break;	
	}
	*/
	
	
	
	/*
	char karakter;
	printf("Bir karakter giriniz : "); //scanf("%c",&karakter);
	karakter = getchar(); //Klavyeden girilen tek bir karaketeri okur getchar.
	switch(karakter)
	{
		case 'a': printf("A harfine bastýnýz..."); break;
		case 'b': printf("B harfine bastýnýz..."); break;
		case 'c': printf("C harfine bastýnýz..."); break;
		default : printf("Yanlýþ bir deðer girdiniz..."); break;
	}
	*/
	
	
	
	/*
	int secim;
	printf("Akrep burcu için     :1\n");
	printf("Koç burcu için       :2\n");
	printf("Yay burcu için       :3\n");
	tekrar: printf("Seçim yapýnýz : "); scanf("%d",&secim);
	switch (secim)
	{
		case 1: printf("Bugün alýþveriþ yapmak size iyi gelecektir."); break;
		case 2: printf("Çok kararsýzsýnýz."); break;
		case 3: printf("Dost canlýsý bir kiþiliðiniz var."); break;
		default : printf("Yanlýþ deðer girdiniz...\a\n");
		goto tekrar;
		break;
	}
	*/
	
	
	
	/*
	int secim,s1,s2;
	float sonuc;
	printf("Toplama için   :1\n");
	printf("Çýkarma için   :2\n");
	printf("Çarpma için    :3\n");
	printf("Bölme için     :4\n");
	printf("Seçim yapýnýz : "); scanf("%d",&secim);
	switch(secim)
	{
		case 1:
			{
				printf("2 Adet sayý giriniz : \n"); scanf("%d%d",&s1,&s2);
				sonuc=s1+s2;
				break;
			}
		case 2:
			{
				printf("2 Adet sayý giriniz : \n"); scanf("%d%d",&s1,&s2);
				sonuc=s1-s2;
				break;
			}
		case 3:
			{
				printf("2 Adet sayý giriniz : \n"); scanf("%d%d",&s1,&s2);
				sonuc=s1*s2;
				break;
			}
		case 4:
			{
				printf("2 Adet sayý giriniz : \n"); scanf("%d%d",&s1,&s2);
				sonuc=s1/s2;
				break;
			}
		default : printf("Yanlýþ bir seçim yaptýnýz...\n");  break;
	}
	printf("Sonuç = %.1f",sonuc);
	*/
}
