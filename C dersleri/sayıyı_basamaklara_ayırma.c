#include <stdio.h>
#include <stdlib.h>

/* Bu program, verilen bir say�n�n y�zler, onlar ve birler basamaklar�n� ay�rarak ekrana yazd�r�r. Bu t�r bir i�lem, bir say�n�n basamaklar�n� analiz etmek veya i�lemek i�in gereklidir.*/

int main() {
	int sayi;
	sayi=486;
	int birler,onlar,yuzler;
	
	yuzler=sayi/100;
	printf("%d\n",yuzler);
	
	onlar=sayi/10;
	onlar=onlar%10;
	printf("%d\n",onlar);
	
	birler=sayi%10;
	printf("%d",birler);
	
return 0;
}
