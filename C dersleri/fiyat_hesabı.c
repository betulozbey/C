#include <stdio.h>
#include <stdlib.h>
/*Program�n amac�, kullan�c�n�n se�ti�i �r�nlerin miktar�n� ve fiyatlar�n� kullanarak toplam �denecek tutar� hesaplamakt�r. */

int main() {
int misir,kola,su,bilet,toplam;
printf("misir adeti: ");
scanf("%d",&misir);

printf("kola adeti: ");
scanf("%d",&kola);

printf("su adeti: ");
scanf("%d",&su);

printf("bilet adeti: ");
scanf("%d",&bilet);

toplam=misir*2+kola*2+su*1+bilet*8;

printf("toplam borcunuz: %d",toplam);
printf("TL...");

	return 0;
}
