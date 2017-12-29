#include <stdio.h>
#include <math.h>
#include <locale.h>

//GÝRÝLEN SAYININ FAKTÖRÝYELÝNÝ VEREN PROGRAM

int fakt(int n)
{
	int j;
	int f=1;
	for(j=2; j<=n; j++)
	{
		f=f*j;
	}
	return f;
}

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int i;
	printf("Bir sayý giriniz : "); scanf("%d",&i);
	printf("%d\n",fakt(i));
}



//GÝRÝLEN SAYININ KÜPÜNÜ VEREN PROGRAM

int kup(int i)
{
	return i*i*i;
}
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi;
	printf("Sayý giriniz : "); scanf("%d",&sayi);
	printf("Sayýnýn küpü = %d",kup(sayi));
}


//YAZILAN 3 SAYININ EN BÜYÜÐÜNÜ BULAN PROGRAM (KULLANICIDAN ALARAKTA YAP)

int enb(int s1, int s2, int s3)
{
	if(s1>s2 && s1>s3)
	{
		return s1;
	}
	else
	{
		if(s2>s3)
		{
			return s2;
		}
		else
		{
			return s3;
		}
	}
}

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int enb(int, int, int);
	printf("%d\n",enb(1,2,3));
	printf("%d\n",enb(14,8,12));
	printf("%d\n",enb(1,6123,3121));
	
}



//ÜS ALMA

int usBulma(int sayi, int ussu)
{
	int i;
	int r;
	r=1;
	
	for(i=1; i<=ussu; i++)
	{
		r=r*sayi;
	}
	return r;
}
int main()
{
	setlocale(LC_ALL,"Turkish");
	int sayi;
	int ussu;
	printf("Hangi sayýnýn üssünü alacaksýn? : \n"); scanf("%d",&sayi);
	printf("Sayýnýn kaç üssünü alacaksýn : \n"); scanf("%d",&ussu);
	printf("Sonuç = %d",usBulma(sayi,ussu));
}



//A ÝÞEYERÝNDEKÝ BÝR PERSONELÝN  HANGÝ DÝLÝMDEN GELÝR VERGÝSÝ ÖDEYECEÐÝNÝ (YÜZDESÝNÝ) BELÝRTEN FONKSÝYONU YAZININ
// Girdi : Personelin birikmiþ vergi matrahý
// Çýktý : Kesinti yüzdesi
// Ýlgili bilgi : 0-20 Milyon %25, 20-40 Miyon %30, 40-80 Milyon %35, 80-60 Milyon %40 ve 180 Miyon üzeri %45


float v_oran(float bvd)
{
	int i;
	if(bvd<20000000)
		i=25;
	else if(bvd<40000000)
		i=30;
	else if(bvd<80000000)
		i=35;
	else if(bvd<160000000)
		i=40;
	else
		i=45;
		
	return i;
}

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	float para;
	printf("Birikmiþ vergi matrahýný giriniz :"); scanf("%f",&para);
	printf("Kesindi yüzdesi %f",v_oran(para));
}

	
	
//GÝRÝLEN HARFÝ BÜYÜK HARFE DÖNÜÞTÜREN FONKSÝYON

char buyuk(char c)
{
	if(c>='a' && c<='z')
		return c-32;
	else
		return c;
}

int main()
{
	setlocale(LC_ALL,"Turkish");
	char harf;
	printf("Harf giriniz : "); scanf("%c",&harf);
	printf("Büyüðü = %c",buyuk(harf));
}


//BELÝRTÝLEN MATEMATÝK ÝÞLEMÝNE GÖRE ÝÞLEM YAPAN FONKSÝYON

int islemYap(char islem, int sayi1, int sayi2)
{
	int sonuc;
	
	switch(islem)
	{
		case '+' : sonuc = sayi1+sayi2; break;
		case '-' : sonuc = sayi1+-sayi2; break;
		case '*' : sonuc = sayi1*sayi2; break;
		case '/' : sonuc = sayi1/sayi2; break;
		default : sonuc = 0;
	}
	return sonuc;
}

int main()
{
	setlocale(LC_ALL,"Turkish");
	char islem;
	int sayi1;
	int sayi2;
	printf("Yapacaðýnýz iþlemi seçiniz (+,-,*,/) : \n"); scanf("%c",&islem);
	printf("1.sayýyý giriniz : "); scanf("%d",&sayi1);
	printf("2.sayýyý giriniz : "); scanf("%d",&sayi2);
	printf("Sonuç = %d",islemYap(islem,sayi1,sayi2));
}


// BELÝRTÝLEN TARÝHTEKÝ AYIN KAÇ GÜN SÜRDÜÐÜNÜ VEREN ÝÞLEVÝ YAZINIZ
// Girdi : Ay ve yýl
// Çýktý : Aydaki gün sayýsý


int aydakiGun(int ay, int yil) 
{
	int i;
	switch(ay)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: i=31; break;
		case 2: 
			if(yil%4==0)
				i=29;
			else
				i=28;
			break;
		default: i=30;
	}
	return i;
}
int main()
{
	int ay, yil;
	printf("Ayý giriniz : "); scanf("%d",&ay);
	printf("Yýlý giriniz : "); scanf("%d",&yil);
	printf("%d gün",aydakiGun(ay,yil));
}

