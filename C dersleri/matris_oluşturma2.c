#include <stdio.h>
#include <stdlib.h>

/* Bu program, 2 satýr ve 3 sütundan oluþan bir matris oluþturur ve bu matrise belirli deðerler atar. Daha sonra bu matrisin elemanlarýný ekrana yazdýrýr.*/

int main() {
	int matris[2][3]={10,20,30,40,50,60};
	
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",matris[i][j]);
		}
printf("\n");
}
return 0;
	}
	
	
	


