#include <stdio.h>
#include <stdlib.h>

/* Bu program, kullan�c�dan sat�r ve s�tun say�s�n� alarak bir matris olu�turur. Kullan�c� daha sonra matrisin her bir eleman�n� girebilir. Sonra, olu�turulan matrisi ekrana yazd�r�r. */

int main() {
int satir,sutun,i,j,k,n;
printf("satir sayisi: ");
scanf("%d",&satir);

printf("sutun sayisi: ");
scanf("%d",&sutun);

int matris[satir][sutun];
for(i=0;i<satir;i++)
{
	for(j=0;j<sutun;j++)
	{
		printf("\n deger: [%d][%d]-->",i+1,j+1);
		scanf("%d",&matris[i][j]);
	}
	
}
printf("\n\nolusan matris\n");
for(k=0;k<satir;k++)
{
	for(n=0;n<sutun;n++)
	{
		printf(" %d ",matris[k][n]);
	}
	printf("\n");
}



	return 0;
}
