#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
	int a[10];
	int i;
	
	for(i=1; i<=10; i++)
	{
		printf("%d. Say�y� gir : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n-------------------------------------\n\n");
	
	for(i=10; i>=1; i--)
	{
		printf("%d. s�rada girilen say� = %d\n",9-i,a[i]);
	}
}

