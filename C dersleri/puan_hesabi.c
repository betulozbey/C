#include <stdio.h>
#include <stdlib.h>

/* Program�n i�levi, T�rk�e, Matematik, Sosyal Bilgiler ve Fen Bilgisi testlerinden al�nan net say�lar� kullanarak bir ��rencinin YGS-1 puan�n� hesaplamakt�r. */

int main() {
//Ygs 1 Puan T�r� Hesaplama

//T�rk�e:1.999
//Matematik:3.998
//Sosyal Bilgiler:1
//Fen Bilgisi:2.999
//Taban:100.160

float Turkce,matematik,sosyal,fen,taban,toplampuan;
taban=100.160;
printf("Turkce netiniz: ");
scanf("%f",&Turkce);

printf("matematik netiniz: ");
scanf("%f",&matematik);

printf("sosyal netiniz: ");
scanf("%f",&sosyal);

printf("fen netiniz: ");
scanf("%f",&fen);

toplampuan=Turkce*1.999+matematik*3.998+sosyal*1+fen*2.999+taban;
printf("Ygs-1 Puan Turunde Sonucunuz: %f",toplampuan);
	return 0;
}
