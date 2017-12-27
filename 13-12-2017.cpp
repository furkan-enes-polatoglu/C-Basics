#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	// KARAKTER ��LEME
	/*
	setlocale(LC_ALL,"Turkish");
	
	//Girilen bir metnin uzunlu�unu veren program
	
	char s[100];
	int i;
	gets(s);
	i=0;
	while(s[i]!='\0')
	{
		i++;
	}
	printf("Metnin uzunlu�u = %d",i);
	*/
	
	
	//strlen(char * ) >>> G�nderilen de�erin uzunlu�unu verir. (string.h)
	
	//Girilen bir metni tersten yazd�ran program� yaz�n�z
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
	//Girilen c�mlenin ilk harflerini yazd�rma
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
	
	//�ki dizinin kar��la�t�r�lmas� (strcmp)
	//Girilen c�mleyi, kelimeleri bozmadan tersten yazd�rma
	/*
	char *s1 = "aaa";
	char *s2 = "aba";
	int i;
	i=strcmp(s1,s2);
	if(i>0)
		printf("s1 b�y�k\n");
	else if(i<0)
		printf("s2 b�y�k\n");
	else
		printf("E�itler");
	*/
	
	
	
	//�ki dizgiyi toplama (ekleme)
	//strcat(hedef, kaynak) �eklindedir. Kaynak dizgisini, hedef dizgisine ekler
	
	/*
	char *s1 = "aaa";
	char *s2 = "bbb";
	int i;
	strcat(s1,s2);
	printf("%s\n",s1);
	//s2'yi s1'e ekler ve s1'i yazd�r�r.
	*/
	
	// atoi, atof, atol ��levlerini ger�ekle�tirme (stdlib.h)
	// String ifadelerin say�sal ifadelere d�n��t�r�lmesi.	

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
		printf("%s dizi katar�n�n say�sal kar��l��� = %d\n",c,i);
	}
	*/
	
	//atoi, atol, atof i�levlerinin davran��lar�
	
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
	
	// Giri� i�levleri
	/*
	char c1, s2;
	char s[10];
	c1 = getchar(); //Klavyeden ENTER tu�una bas�lana kadar tu�u bekler.
	c1 = getchar();
	printf("\n%c  ,  %c\n",c1,c2);
	
	c1=getche(); //Tu�a basmak yeterlidir. ENTER tu�unu beklemez.
	c2=getche();
	printf("\n%c  ,  %c\n",c1,c2);
	
	
	c1=getch();, // ENTER tu�u beklenmez.  Cursor on, karakter yaz�lmaz, x int putch(int c) : c ekrana yazd�r�l�r.
	c2=getch();
	printf("\n%c  ,  %c\n",c1,c2);
	*/
	
	//Tamsay� bir de�eri dizgiye d�n��t�ren program� yaz�n�z (ecvt, fcvt, gvct)
	/*
	char s;
	int i;
	i=2137;
	itostr(s,i);
	printf("%d  %s\n",i,s);
	*/


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
