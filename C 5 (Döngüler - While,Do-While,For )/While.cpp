#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	/*
	int i=1;
	while(i<=10)
	{
		printf("Hello World!\n");
		i++;
	}
	printf("D�ng� Sonland�!");
	*/
	
	
	
	/*
	int i=1;
	while(i<=10)
	{
		printf("%d say�s�n�n kaersi = %d\n",i,i*i);
		i++;
	}
	*/
	
	
	
	/*
	int i=1;
	while(i<=10)
	{
		printf("1 x %d = %d\t",i,i*1);
		printf("2 x %d = %d\t",i,i*2);
		printf("3 x %d = %d\t",i,i*3);
		printf("4 x %d = %d\t",i,i*4);
		printf("5 x %d = %d\t",i,i*5);
		i++;
	}
	*/
	
	
	
	/*
	int i=1;
	while(i<=10)
	{
		if(i%2==0)
		{
			printf("�ift : %d\n",i);
		}
		else
		{
			printf("Tek :  %d\n",i);
		}
		i++;
	}
	*/
	
	
	
	
	int i,sayi;
	while(i<=10)
	{
		printf("Say� giriniz : "); scanf("%d",&sayi);
		printf("%d say�s�n�n karek�k� = %.1f\n",sayi,sqrt(sayi));
		i++;
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
