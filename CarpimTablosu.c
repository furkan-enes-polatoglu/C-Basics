#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
	int i,j;
	for(i=1; i<=10; i++)
	{
		for(j=1; j<=10; j++)
		{
			printf("%4.0d",i*j);
			printf("\n");
		}
	}
}
