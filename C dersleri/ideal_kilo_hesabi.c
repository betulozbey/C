#include <stdio.h>
#include <stdlib.h>

/* Bu program bir kiþinin ideal kilosunu hesaplar. */

int main() {
	printf("ideal kilo hesaplama");
	printf("\n");
	//ideal kilo hesabý
	//(boy - 100 + yas / 10)*0.8--> Kadýn  0.9--> Erkekler
	float boy,kilo,yas,idealkilo;
	boy=156;
	yas=20;
	idealkilo=(boy-100+yas/10)*0.9;
	printf("ideal kilonuz: %f",idealkilo);
	return 0;
}
