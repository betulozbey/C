#include <stdio.h>
#include <stdlib.h>

/* Bu program, verilen bir sayýnýn yüzler, onlar ve birler basamaklarýný ayýrarak ekrana yazdýrýr. Bu tür bir iþlem, bir sayýnýn basamaklarýný analiz etmek veya iþlemek için gereklidir.*/

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
