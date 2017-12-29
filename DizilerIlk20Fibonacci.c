#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
	int fib[20];
	int i;
	
	fib[0]=0;
	fib[1]=1;
	for(i=2; i<=19; i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
	}
	for(i=0; i<=19; i++)
	{
		printf("%d. Fibonacci sayýsý = %d\n",i,fib[i]);
	}
}
