//Kendini �a��ran fonksiyonlar (�ZY�NELEME) - Fakt�riyel �rne�i - RECURS�VE

	
	int fakt(int i)
	{
		if(i<2)
			return 1;
		else
			return i*fakt(i-1);
	}

	int main()
	{
		setlocale(LC_ALL,"Turkish");

		int i;
		printf("Say� giriniz : "); scanf("%d",&i);
		printf("Fakt�riyel = %d",fakt(i));
	}
	


//D�Z�Y� B�R ��LEVE G�NDERME
//KARES�N� ALMA ��LEV�

void kareleri(int[]);
int main()
{
	setlocale(LC_ALL,"Turkish");

	int a[10];
	int i;
	for(i=0; i<=9; i++)
	{
		a[i] = i+1;
	}
	printf("Dizinin elemanlar�n�n de�erleri\n");
	for(i=0; i<=9; i++)
	{
		printf("%d-",a[i]);
	}
	kareleri(a);
	printf("\nKare alma i�lemi sonras� dizinin elemanlar�n�n de�erleri\n");
	for(i=0; i<=9; i++)
	{
		printf("%d-",a[i]);
	}
}

	void kareleri(int a[])
	{
		int i;
		for(i=0; i<=9; i++)
		{
			a[i] = a[i] * a[i];
		}
	}



// ######################################################################################################################################################




//KARAKTER ��LEME
//Girilen bir metnin uzunlu�unu veren program� yaz�n�z.

int main()
{
	char *s;
	int i=0;
	gets(s);
	while(s[i]!='\0')
	{
		i++;
	}
	printf("Uzunluk = %d\n",i);
}



//strlen(char * ) >>> G�nderilen de�erin uzunlu�unu verir. (string.h k�t�phanesi)
//Girilen bir metni tersten yazd�ran program� yaz�n�z

int main()
{
	char *a;
	int i;
	gets(a);
	for(i=strlen(a)-1; i>=0; i--)
	{
		printf("%c", a[i]);
	}
}



//Girilen c�mlenin ilk harflerini yazd�rma

int main()
{
	int i;
	int kontrol; //  true/false - yaz/yazma
	char s[50];
	gets(s);
	
	kontrol= true;
	for(i=0; i<strlen(s); i++)
	{
		if(s[i]==' ')
		{
			kontrol = true;	
		}
		else
		{
			if(kontrol)
			{
				printf("%c",s[i]);
				kontrol = false;
			}
		}
	}
}



// (strcmp) >>> �ki dizinin kar��la�t�r�lmas�

int main()
{
	setlocale(LC_ALL,"Turkish");

	char *s1 = "b";
	char *s2 = "a";
	int i;
	i=strcmp(s1,s2);
	if(i>0)
		printf("s1 b�y�k\n");
	else if(i<0)
		printf("s2 b�y�k\n");
	else
		printf("E�itler");
		
		printf("%d",strcmp(s1,s2));
}



//�ki dizgiyi toplama (ekleme)
//strcat(hedef, kaynak) �eklindedir. Kaynak dizgisini, hedef dizgisine ekler

	int main()
	{
		char s1[50] = "Furkan";
		char s2[50] = "Enes";
		strcat(s1,s2);
		printf("%s\n",s1);
		//s1'e s2'ye ekle ve s1'i yazd�r�r.
	}



	// atoi, atof, atol ��levlerini ger�ekle�tirme (stdlib.h)
	// String ifadelerin say�sal ifadelere d�n��t�r�lmesi.
	
//atoi, atol, atof i�levlerinin davran��lar�

int main()
{
	char *s;
	int i;
	long x;
	double f;

	s="10";
	printf("%d  %ld  %f\n",atoi(s), atol(s), atof(s));
	s="10.3";
	printf("%d  %ld  %f\n",atoi(s), atol(s), atof(s));
	s="10.2e4=KL";
	printf("%d  %ld  %f\n",atoi(s), atol(s), atof(s));
}


// Giri� i�levleri

int main()
{

	char c1;
	c1 = getchar(); //Klavyeden ENTER tu�una bas�lana kadar tu�u bekler.
	printf("\n %c\n",c1);


	c1=getche(); // ENTER tu�unu beklemez.
	printf("\n %c \n",c1);


	c1=getch(); // ENTER tu�u beklenmez.  Cursor on, karakter yaz�lmaz, x int putch(int c) : c ekrana yazd�r�l�r.
	printf("\n %c \n",c1);

}



// sprintf >>> SAYISAL DE�ER� D�ZG�YE D�N��T�RMEK ���N KULLANILIR.
// Kullan�m �ekli >>> sprintf(dizgi, kontrol, de�i�kenler)

int main()
{
	setlocale(LC_ALL,"Turkish");

	char *s;
	int i = 57;
	sprintf(s,"%d",i); // s dizisine i de�i�keninin i�indeki 57 de�erini atar ve int de�er dizgiye d�n��m�� olur.
	printf("%s",s); // Yazd�rd���mz�da s de�erinin i�inde 57 olacakt�r.
}



int main()
{
	setlocale(LC_ALL,"Turkish");

	char *a;
	float f = 2.1;
	sprintf(a,"%f",f); //a dizgisinin i�ine, f say�sal de�erini atar. f de�eri dizgiye d�n��t�r�lm�� olur.
	printf("%s",a);
}



//strncpy kullan�m�

int main()
{
 	char *s1;
 	char *s2;
 	s1 = "01234567890";
 	strncpy(s2,s1,3); //s2'ye s1'in ilk 3 karakterini yaz.
 	printf("%s\n",s2);
}




// Bir dizgi i�erisindeki bir karakterin bulunmas�. i harfini � ile de�i�tiren program.

int main()
{
	setlocale(LC_ALL,"Turkish");

	char s1[50] = "ali zili �ald�";
	int i;
	for(i=0; i<strlen(s1); i++)
	{
		if(s1[i]=='i')
		{
			s1[i] = '�';
		}
	}
	printf("%s\n",s1);
}


//Bir c�mledeki t�m k���k harfleri b�y��e �eviren program.

int tolower(int c);
int toupper(int c);

int main()
{
	int i;
	char *s1;
	s1 = "furkan bak";
	for(i=0; i<strlen(s1); i++)
	{
		printf("%c",toupper(s1[i]));
	}
}



/*

strcpy(s2,s1); >>>  S1 D�ZG�S�NDEK� YAZIYI S2'YE KOPYALAR.
strlen(s)  >>>  S KARAKTER D�ZG�S�N�N UZUNLU�UNU VER�R.
strcmp (s1, s2); >>> S1 VE S2 D�ZG�LER�N� KAR�ILA�TIRIR.
strcat(s1,s2);  >>> S2'Y� S1'E EKLER VE S1'� YAZDIRIR.
atoi(s), atol(s), atof(s) >>> S D�ZG�S�NDEK� VER�Y� SONDAK� HARFLER�NE G�RE SAYISAL VER�YE D�N��T�R�R.
sprintf >>> SAYISAL DE�ER� D�ZG�YE D�N��T�RMEK ���N KULLANILIR.
sprintf(a,"%d",i); // a dizgisine i de�i�keninin i�indeki 57 de�erini atar ve int de�er olan i de�i�keni, dizgiye d�n��m�� olur.
*/
