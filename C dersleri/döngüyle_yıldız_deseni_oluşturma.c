#include <stdio.h>
#include <stdlib.h>

/*  Bu program, y�ld�z (*) deseni olu�turan bir d�ng� kullanarak dik ��gen ve ters dik ��gen olu�turur.*/

int main() {
	int i,j,k,l;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(k=1;k<=5;k++)
	{
		for(l=5;l>=k;l--)
		{
			printf("*");
			
		}
		printf("\n");
	}
return 0;
}
