#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	int x;
	printf("Say� giriniz : "); scanf("%d",&x);
	if(x%2==1)
	{
		printf("Tek say� girdiniz.");
	}
	else
	{
		printf("�ift say� girdiniz.");
	}
	return 0;
}
