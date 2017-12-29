#include <stdio.h>
#include <stdlib.h>

//MATRÝS YAZDIRMA

int main(int argc, char *argv[]) {
	
	int i,j;
	int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}



//ÝKÝ MATRÝSÝ TOPLAMA

int main(int argc, char *argv[]) {
	
	int i,j;
	int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int b[3][3] = {{3,1,4},{2,4,2},{1,0,0}};
	int sonuc[3][3];
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{			
			sonuc[i][j] = a[i][j] + b[i][j];
			printf("%d ",sonuc[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}



//MATRÝS INVERS ALMA (TERSÝNÝ ALMA)

int main(int argc, char *argv[]) {
	
	int i,j;
	int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int tersi[3][3];
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("TERSI ALINMIS HALI\n");
	
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			tersi[i][j] = a[j][i];
			printf("%d ",tersi[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
*/

