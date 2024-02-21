#include <stdio.h>
#include <stdlib.h>

/* Bu program, öðrencilerin iki sýnav notunu girdikten sonra baþarý durumlarýný hýzlý bir þekilde görmelerini saðlar.*/

int main() {

printf("ogrenci ortalama hesap bilgi sistemi");
printf("\n\n");

int s1,s2,ort;
printf("Sinav bir degerini girin: ");
scanf("%d",&s1);

printf("Sinav iki degerini girin: ");
scanf("%d",&s2);

ort=(s1+s2)/2;
printf("ortalama: %d\n\n",ort);

if (ort>=50)
{
printf("tebrikler gectiniz :)");
}
else
{
printf("maalesef kaldiniz :(");
}

	return 0;
}
