#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Bu program, kullan�c�dan bir taban ve �s de�eri al�r ve ard�ndan bu taban�n �ss�n� hesaplar.*/

int main() {
	int x,y;
	int sonuc;
	printf("taban: ");
	scanf("%d",&x);
	printf("us: ");
	scanf("%d",&y);
	sonuc=pow(x,y);
	printf("sonuc: %d",sonuc);
	
	return 0;
}
