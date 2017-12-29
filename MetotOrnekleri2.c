#include <stdio.h>
#include <math.h>
#include <locale.h>

	//Kendini çaðýran fonksiyonlar (ÖZYÝNELEME) - Faktöriyel örneði
	
	
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
	

	
	//Ýþlev içerisinde dizi eleman deðerlerinin deðiþtirilmesi
	
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
		
		printf("Dizinin elemanlarýnýn deðeri\n");
		
		for(i=0; i<=9; i++)
		printf("%d\n",a[i]);
		
		kareleri(a);
		
		printf("\n\nKare alma iþlemi sonrasý dizi elemanlarýnýn deðerleri\n");
		
		for(i=0; i<=9; i++)
		printf("%d\n",a[i]);
		
	}
	
