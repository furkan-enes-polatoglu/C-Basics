#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	/*
	// 1-3 Yay, Ko�, O�lak
	// 4-7 Akrep, �kizler, Bal�k
	// 7-10 Yenge�, Terazi, Kova
	
	int deger,secenek;
	enbasagit : printf("1-10 aras�nda bir de�er giriniz : \n"); scanf("%d",&deger);
	if(deger>=1 && deger<=3)
	{
		printf("Yay i�in     :1\n");
		printf("Ko� i�in     :2\n");
		printf("O�lak i�in   :3\n\n");
		tekrar1 : printf("L�tfen bir se�im yap�n�z : "); scanf("%d",&secenek);
		switch(secenek)
		{
			case 1: printf("Yay burcu dost canl�s�d�r."); break;
			case 2: printf("Ko� burcu sad�kt�r."); break;
			case 3: printf("O�lak burcu sevimlidir."); break;
			default : printf("L�tfen 1-3 aras�nda bir de�er giriniz!\n\a"); goto tekrar1;
		}
	}
	else if(deger>=4 && deger<=7)
	{
		printf("Akrep i�in     :1\n");
		printf("�kizler i�in   :2\n");
		printf("Bal�k i�in     :3\n\n");
		tekrar2 : printf("L�tfen se�im yap�n�z : "); scanf("%d",&secenek);
		switch(secenek)
		{
			case 1: printf("Akrep burcu dost canl�s�d�r."); break;
			case 2: printf("�kizler burcu sad�kt�r."); break;
			case 3: printf("Bal�k burcu sevimlidir."); break;
			default : printf("L�tfen 1-3 aras�nda bir de�er giriniz!\n\a"); goto tekrar2;
		}
	}
	else if(deger>=7 && deger<=10)
	{
		printf("Yenge� i�in     :1\n");
		printf("Terazi i�in     :2\n");
		printf("Kova i�in       :3\n\n");
		tekrar3 : printf("L�tfen se�im yap�n�z : "); scanf("%d",&secenek);
		switch(secenek)
		{
			case 1: printf("Yenge� burcu duygusald�r."); break;
			case 2: printf("Terazi burcu sad�kt�r."); break;
			case 3: printf("Kova burcu sevimlidir."); break;
			default : printf("L�tfen 1-3 aras�nda bir de�er giriniz!\n\a"); goto tekrar3;
		}
	}
	else
	{
		printf("1-10 Aras�nda bir de�er girmelisiniz!\n\a"); goto enbasagit;
	}
	*/
	
	
	
	/*
	int secim,secim2,s1,s2,taban,us;
	printf("D�rt i�lem i�in			  :1\n");
	printf("�zel matematik fonksiyonlar� i�in :2\n\n");
	printf("Se�im yap�n�z : "); scanf("%d",&secim);
	printf("\n");
	switch(secim)
	{
		case 1:
			{
				printf("Toplama i�lemi i�in   :1\n");
				printf("��karma i�lemi i�in   :2\n");
				printf("�arpma i�lemi i�in    :3\n");
				printf("B�lme i�lemi i�in     :4\n\n");
				secimyap : printf("Se�im yap�n�z : "); scanf("%d",&secim2);
				
				if(secim2==1)
				{
					printf("2 Adet say� giriniz : \n"); scanf("%d%d",&s1,&s2);
					printf("Toplam = %d",s1+s2);
				}
				else if(secim2==2)
				{
					printf("2 Adet say� giriniz : \n"); scanf("%d%d",&s1,&s2);
					printf("Fark = %d",s1-s2);
				}
				else if(secim2==3)
				{
					printf("2 Adet say� giriniz : \n"); scanf("%d%d",&s1,&s2);
					printf("�arp�m = %d",s1*s2);
				}
				else if(secim2==4)
				{
					printf("2 Adet say� giriniz : \n"); scanf("%d%d",&s1,&s2);
					printf("B�l�m = %.1f",(float)s1/(float)s2);
				}
				else
				{
					printf("1-4 aras�nda bir de�er girmelisiniz!\a\n"); goto secimyap;
				}
			
			}
			case 2:
				{
					printf("Karak�k i�in     :1\n");
					printf("�s almak i�in    :2\n\n");
					basadon : printf("Se�im yap�n�z : "); scanf("%d",&secim2);
					if(secim2==1)
					{
						printf("Bir say� giriniz : "); scanf("%d",&s1);
						printf("%d say�s�n�n karek�k� = %.1f",s1,sqrt(s1));
					}
					else if(secim2==2)
					{
						printf("Taban de�eri giriniz : "); scanf("%d",&taban);
						printf("�ss� giriniz : "); scanf("%d",&us);
						printf("%d say�s�n�n %d �ss� = %.1f",taban,us,pow(taban,us));
					}
					else
					{
						printf("1 yada 2 de�erlerinden birini girmelisiniz!\a\n"); goto basadon;
					}
				}
				*/
				
				
				
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
