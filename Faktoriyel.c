#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
		int n;
		long f;
		printf("Sayýyý giriniz : "); scanf("%d",&n);
		f=1;
		while(n>1)
		{
			f=f*n;
			n=n-1;
		}
		printf("Sonuç = %d",f);
}
