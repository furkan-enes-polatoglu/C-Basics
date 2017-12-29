#include <stdio.h>
#include <math.h>
#include <locale.h>

//G�R�LEN SAYININ FAKT�R�YEL�N� VEREN PROGRAM

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
	printf("Bir say� giriniz : "); scanf("%d",&i);
	printf("%d\n",fakt(i));
}



//G�R�LEN SAYININ K�P�N� VEREN PROGRAM

int kup(int i)
{
	return i*i*i;
}
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi;
	printf("Say� giriniz : "); scanf("%d",&sayi);
	printf("Say�n�n k�p� = %d",kup(sayi));
}


//YAZILAN 3 SAYININ EN B�Y���N� BULAN PROGRAM (KULLANICIDAN ALARAKTA YAP)

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



//�S ALMA

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
	printf("Hangi say�n�n �ss�n� alacaks�n? : \n"); scanf("%d",&sayi);
	printf("Say�n�n ka� �ss�n� alacaks�n : \n"); scanf("%d",&ussu);
	printf("Sonu� = %d",usBulma(sayi,ussu));
}



//A ��EYER�NDEK� B�R PERSONEL�N  HANG� D�L�MDEN GEL�R VERG�S� �DEYECE��N� (Y�ZDES�N�) BEL�RTEN FONKS�YONU YAZININ
// Girdi : Personelin birikmi� vergi matrah�
// ��kt� : Kesinti y�zdesi
// �lgili bilgi : 0-20 Milyon %25, 20-40 Miyon %30, 40-80 Milyon %35, 80-60 Milyon %40 ve 180 Miyon �zeri %45


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
	printf("Birikmi� vergi matrah�n� giriniz :"); scanf("%f",&para);
	printf("Kesindi y�zdesi %f",v_oran(para));
}

	
	
//G�R�LEN HARF� B�Y�K HARFE D�N��T�REN FONKS�YON

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
	printf("B�y��� = %c",buyuk(harf));
}


//BEL�RT�LEN MATEMAT�K ��LEM�NE G�RE ��LEM YAPAN FONKS�YON

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
	printf("Yapaca��n�z i�lemi se�iniz (+,-,*,/) : \n"); scanf("%c",&islem);
	printf("1.say�y� giriniz : "); scanf("%d",&sayi1);
	printf("2.say�y� giriniz : "); scanf("%d",&sayi2);
	printf("Sonu� = %d",islemYap(islem,sayi1,sayi2));
}


// BEL�RT�LEN TAR�HTEK� AYIN KA� G�N S�RD���N� VEREN ��LEV� YAZINIZ
// Girdi : Ay ve y�l
// ��kt� : Aydaki g�n say�s�


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
	printf("Ay� giriniz : "); scanf("%d",&ay);
	printf("Y�l� giriniz : "); scanf("%d",&yil);
	printf("%d g�n",aydakiGun(ay,yil));
}

