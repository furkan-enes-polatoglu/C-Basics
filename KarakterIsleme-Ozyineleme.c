//Kendini çaðýran fonksiyonlar (ÖZYÝNELEME) - Faktöriyel örneði - RECURSÝVE

	
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
		printf("Sayý giriniz : "); scanf("%d",&i);
		printf("Faktöriyel = %d",fakt(i));
	}
	


//DÝZÝYÝ BÝR ÝÞLEVE GÖNDERME
//KARESÝNÝ ALMA ÝÞLEVÝ

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
	printf("Dizinin elemanlarýnýn deðerleri\n");
	for(i=0; i<=9; i++)
	{
		printf("%d-",a[i]);
	}
	kareleri(a);
	printf("\nKare alma iþlemi sonrasý dizinin elemanlarýnýn deðerleri\n");
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




//KARAKTER ÝÞLEME
//Girilen bir metnin uzunluðunu veren programý yazýnýz.

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



//strlen(char * ) >>> Gönderilen deðerin uzunluðunu verir. (string.h kütüphanesi)
//Girilen bir metni tersten yazdýran programý yazýnýz

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



//Girilen cümlenin ilk harflerini yazdýrma

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



// (strcmp) >>> Ýki dizinin karþýlaþtýrýlmasý

int main()
{
	setlocale(LC_ALL,"Turkish");

	char *s1 = "b";
	char *s2 = "a";
	int i;
	i=strcmp(s1,s2);
	if(i>0)
		printf("s1 büyük\n");
	else if(i<0)
		printf("s2 büyük\n");
	else
		printf("Eþitler");
		
		printf("%d",strcmp(s1,s2));
}



//Ýki dizgiyi toplama (ekleme)
//strcat(hedef, kaynak) þeklindedir. Kaynak dizgisini, hedef dizgisine ekler

	int main()
	{
		char s1[50] = "Furkan";
		char s2[50] = "Enes";
		strcat(s1,s2);
		printf("%s\n",s1);
		//s1'e s2'ye ekle ve s1'i yazdýrýr.
	}



	// atoi, atof, atol Ýþlevlerini gerçekleþtirme (stdlib.h)
	// String ifadelerin sayýsal ifadelere dönüþtürülmesi.
	
//atoi, atol, atof iþlevlerinin davranýþlarý

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


// Giriþ iþlevleri

int main()
{

	char c1;
	c1 = getchar(); //Klavyeden ENTER tuþuna basýlana kadar tuþu bekler.
	printf("\n %c\n",c1);


	c1=getche(); // ENTER tuþunu beklemez.
	printf("\n %c \n",c1);


	c1=getch(); // ENTER tuþu beklenmez.  Cursor on, karakter yazýlmaz, x int putch(int c) : c ekrana yazdýrýlýr.
	printf("\n %c \n",c1);

}



// sprintf >>> SAYISAL DEÐERÝ DÝZGÝYE DÖNÜÞTÜRMEK ÝÇÝN KULLANILIR.
// Kullaným þekli >>> sprintf(dizgi, kontrol, deðiþkenler)

int main()
{
	setlocale(LC_ALL,"Turkish");

	char *s;
	int i = 57;
	sprintf(s,"%d",i); // s dizisine i deðiþkeninin içindeki 57 deðerini atar ve int deðer dizgiye dönüþmüþ olur.
	printf("%s",s); // Yazdýrdýðýmzýda s deðerinin içinde 57 olacaktýr.
}



int main()
{
	setlocale(LC_ALL,"Turkish");

	char *a;
	float f = 2.1;
	sprintf(a,"%f",f); //a dizgisinin içine, f sayýsal deðerini atar. f deðeri dizgiye dönüþtürülmüþ olur.
	printf("%s",a);
}



//strncpy kullanýmý

int main()
{
 	char *s1;
 	char *s2;
 	s1 = "01234567890";
 	strncpy(s2,s1,3); //s2'ye s1'in ilk 3 karakterini yaz.
 	printf("%s\n",s2);
}




// Bir dizgi içerisindeki bir karakterin bulunmasý. i harfini Ý ile deðiþtiren program.

int main()
{
	setlocale(LC_ALL,"Turkish");

	char s1[50] = "ali zili çaldý";
	int i;
	for(i=0; i<strlen(s1); i++)
	{
		if(s1[i]=='i')
		{
			s1[i] = 'Ý';
		}
	}
	printf("%s\n",s1);
}


//Bir cümledeki tüm küçük harfleri büyüðe çeviren program.

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

strcpy(s2,s1); >>>  S1 DÝZGÝSÝNDEKÝ YAZIYI S2'YE KOPYALAR.
strlen(s)  >>>  S KARAKTER DÝZGÝSÝNÝN UZUNLUÐUNU VERÝR.
strcmp (s1, s2); >>> S1 VE S2 DÝZGÝLERÝNÝ KARÞILAÞTIRIR.
strcat(s1,s2);  >>> S2'YÝ S1'E EKLER VE S1'Ý YAZDIRIR.
atoi(s), atol(s), atof(s) >>> S DÝZGÝSÝNDEKÝ VERÝYÝ SONDAKÝ HARFLERÝNE GÖRE SAYISAL VERÝYE DÖNÜÞTÜRÜR.
sprintf >>> SAYISAL DEÐERÝ DÝZGÝYE DÖNÜÞTÜRMEK ÝÇÝN KULLANILIR.
sprintf(a,"%d",i); // a dizgisine i deðiþkeninin içindeki 57 deðerini atar ve int deðer olan i deðiþkeni, dizgiye dönüþmüþ olur.
*/
