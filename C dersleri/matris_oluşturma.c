#include <stdio.h>
#include <stdlib.h>

/* Bu program, bir 2x2 boyutunda bir matris olu�turur ve bu matrise belirli de�erler atar. Sonra bu matrisin elemanlar�n� ekrana yazd�r�r. */

int main() {
	int dizi[2][2];
	dizi[0][0]=10;
	dizi[0][1]=20;
	dizi[1][0]=30;
	dizi[1][1]=40;
	printf(" %d  ",dizi[0][0]);
	printf(" %d\n",dizi[0][1]);
	printf(" %d  ",dizi[1][0]);
	printf(" %d",dizi[1][1]);

return 0;
}
