#include <stdio.h>
#include <stdlib.h>

/* Bu program, 2 sat�r ve 3 s�tundan olu�an bir matris olu�turur ve bu matrise belirli de�erler atar. Daha sonra bu matrisin elemanlar�n� ekrana yazd�r�r.*/

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
	
	
	


