#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
		int n;
		long f;
		printf("Say�y� giriniz : "); scanf("%d",&n);
		f=1;
		while(n>1)
		{
			f=f*n;
			n=n-1;
		}
		printf("Sonu� = %d",f);
}
