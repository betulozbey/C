#include <stdio.h>
#include <stdlib.h>

/* Belirli bir aralıktaki sayıları belirli bir metinle birlikte ekrana yazdırarak tekrarlayıcı bir mesaj oluşturur. */

int main() {
int i;
for(i=0;i<=30;i+=5)
{
	printf("%d-Dongu mantigi\n",i);
}
	return 0;
}
