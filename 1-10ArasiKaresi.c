#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
	int a[10];
	int i;
	
	for(i=0; i<=9; i++)
	{
		a[i] = (i+1)*(i+1);
	}
	for(i=0; i<=9; i++)
	{
		printf("%d. elemanýn deðeri %d\n",i,a[i]);
	}
}
