#include <stdio.h>
#include <math.h>
#include <locale.h>

	//Kendini �a��ran fonksiyonlar (�ZY�NELEME) - Fakt�riyel �rne�i
	
	
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
	

	
	//��lev i�erisinde dizi eleman de�erlerinin de�i�tirilmesi
	
		void kareleri(int a[])
	{
		int i;
		for(i=0; i<=9; i++)
		a[i] = a[i] * a[i];
	}
	
	
	void kareleri(int[]);
	
	int main()
	{
		setlocale(LC_ALL,"Turkish");
		
		int a[10];
		int i;
		
		for(i=0; i<=9; i++)
			a[i] = i+1;
		
		printf("Dizinin elemanlar�n�n de�eri\n");
		
		for(i=0; i<=9; i++)
		printf("%d\n",a[i]);
		
		kareleri(a);
		
		printf("\n\nKare alma i�lemi sonras� dizi elemanlar�n�n de�erleri\n");
		
		for(i=0; i<=9; i++)
		printf("%d\n",a[i]);
		
	}
	
