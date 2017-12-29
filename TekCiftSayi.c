#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	int x;
	printf("Sayý giriniz : "); scanf("%d",&x);
	if(x%2==1)
	{
		printf("Tek sayý girdiniz.");
	}
	else
	{
		printf("Çift sayý girdiniz.");
	}
	return 0;
}
