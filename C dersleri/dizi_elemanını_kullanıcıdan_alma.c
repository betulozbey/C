#include <stdio.h>
#include <stdlib.h>

/* Bu kod, bir dizinin elemanlarını dinamik olarak kullanıcıdan almak ve ekrana yazdırmak için kullanılabilir. */

int main(int argc, char *argv[]) {
int dizi[100];
int i,sayi;
printf("Eleman sayisi: ");
scanf("%d",&sayi);
for(i=0;i<sayi;i++)
{
	printf("dizinin %d. degerini girin: ",i+1);
	scanf("%d",&dizi[i]);
}
printf("\n\n");
for(i=0;i<sayi;i++)
{
	printf(" %d",dizi[i]);
}
	return 0;
}
