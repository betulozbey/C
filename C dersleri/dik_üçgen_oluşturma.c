#include <stdio.h>
#include <stdlib.h>

/*  Bu program, kullan�c�n�n girdi�i bir taban de�erine g�re bir dik ��gen olu�turur.  */

int main() {
	int i,j,taban;
	printf("taban degerini girin: ");
	scanf("%d",&taban);
	for(i=1;i<=taban;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
return 0;
}
