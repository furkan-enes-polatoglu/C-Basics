#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	// KARAKTER ÝÞLEME
	/*
	setlocale(LC_ALL,"Turkish");
	
	//Girilen bir metnin uzunluðunu veren program
	
	char s[100];
	int i;
	gets(s);
	i=0;
	while(s[i]!='\0')
	{
		i++;
	}
	printf("Metnin uzunluðu = %d",i);
	*/
	
	
	//strlen(char * ) >>> Gönderilen deðerin uzunluðunu verir. (string.h)
	
	//Girilen bir metni tersten yazdýran programý yazýnýz
	/*
	char *s;
	int i;
	gets(s);
	for(i=strlen(s)-1; i>=0; i--)
	{
		printf(%c, s[i]);
		printf("\n");
	}
	*/
	
	/*
	//Girilen cümlenin ilk harflerini yazdýrma
	int i;
	int yaz;
	char *s;
	gets(s);
	
	yaz=1;
	for(i=0; i<strlen(s); i++)
	{
		if(s[i]=='')
		{
			yaz = 1;
		}
		else
		{
			if(yaz)
			{
				printf("%c",s[i]);
				yaz = 0;
			}
		}
	}
	*/
	
	//Ýki dizinin karþýlaþtýrýlmasý (strcmp)
	//Girilen cümleyi, kelimeleri bozmadan tersten yazdýrma
	/*
	char *s1 = "aaa";
	char *s2 = "aba";
	int i;
	i=strcmp(s1,s2);
	if(i>0)
		printf("s1 büyük\n");
	else if(i<0)
		printf("s2 büyük\n");
	else
		printf("Eþitler");
	*/
	
	
	
	//Ýki dizgiyi toplama (ekleme)
	//strcat(hedef, kaynak) þeklindedir. Kaynak dizgisini, hedef dizgisine ekler
	
	/*
	char *s1 = "aaa";
	char *s2 = "bbb";
	int i;
	strcat(s1,s2);
	printf("%s\n",s1);
	//s2'yi s1'e ekler ve s1'i yazdýrýr.
	*/
	
	// atoi, atof, atol Ýþlevlerini gerçekleþtirme (stdlib.h)
	// String ifadelerin sayýsal ifadelere dönüþtürülmesi.	

	/*
	int deger(char s)
	{
		int i,j;
		int x;
		x=0;
		for(i=0; i<strlen(s); i++)
		{
			j=s[i]-'0';
			x=x*10+j;
		}
		return x;
	}
	
	int deger (char *)
	int main()
	{
		char c;
		int i;
		c="93t54";
		i=deger(c);
		printf("%s dizi katarýnýn sayýsal karþýlýðý = %d\n",c,i);
	}
	*/
	
	//atoi, atol, atof iþlevlerinin davranýþlarý
	
	/*
	char s;
	int i;
	long x;
	double f;
	
	s="5";
	printf("%d  %ld  %f\n",atoi(s), atol(s), atof(s));
	s="5.4";
	printf("%d  %ld  %f\n",atoi(s), atol(s), atof(s));
	s="5.2e4=KL";
	printf("%d  %ld  %f\n",atoi(s), atol(s), atof(s));
	*/
	
	// Giriþ iþlevleri
	/*
	char c1, s2;
	char s[10];
	c1 = getchar(); //Klavyeden ENTER tuþuna basýlana kadar tuþu bekler.
	c1 = getchar();
	printf("\n%c  ,  %c\n",c1,c2);
	
	c1=getche(); //Tuþa basmak yeterlidir. ENTER tuþunu beklemez.
	c2=getche();
	printf("\n%c  ,  %c\n",c1,c2);
	
	
	c1=getch();, // ENTER tuþu beklenmez.  Cursor on, karakter yazýlmaz, x int putch(int c) : c ekrana yazdýrýlýr.
	c2=getch();
	printf("\n%c  ,  %c\n",c1,c2);
	*/
	
	//Tamsayý bir deðeri dizgiye dönüþtüren programý yazýnýz (ecvt, fcvt, gvct)
	/*
	char s;
	int i;
	i=2137;
	itostr(s,i);
	printf("%d  %s\n",i,s);
	*/


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
