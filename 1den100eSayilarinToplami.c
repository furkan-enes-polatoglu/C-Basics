#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int i,j;
	i=1;
	j=0;
	while(i<100)
	{
		j+=i;
		i++;
	}
	printf("%d",j);
	
}
