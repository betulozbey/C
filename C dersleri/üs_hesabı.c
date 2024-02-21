#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Bu program, kullanýcýdan bir taban ve üs deðeri alýr ve ardýndan bu tabanýn üssünü hesaplar.*/

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
