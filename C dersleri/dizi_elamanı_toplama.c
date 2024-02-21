#include <stdio.h>
#include <stdlib.h>

/* Bu kod dizinin elemanlarýný toplar ve toplam deðeri ekrana yazdýrýr. */

int main(int argc, char *argv[]) {
	
	int sayilar[]={10,15,20,35};
	int toplam=0;
	int i;
	for(i=0;i<4;i++)
	{
		toplam=toplam+sayilar[i];
	}
    printf("toplam: %d",toplam);

return 0;
}
