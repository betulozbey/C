#include <stdio.h>
#include <stdlib.h>
/*
Bu program, bir kitabýn temel bilgilerini tanýtýr. Kullanýcýnýn girdiði veya programýn kod içerisinde önceden belirlenmiþ olan kitap adý, yazar adý, tür, sayfa sayýsý ve basým yýlý gibi bilgileri ekrana yazdýrýr.*/

int main() {
    char kitapad[] = "Avcunuzdaki Kelebek";
    char yazarad[] = "Ahmet Serif Ýzgoren";
    char tur[] = "Hikaye";
    int sayfa = 124;
    int basimyili = 2021;

    printf("***** Kitap Tanitimi *****\n\n");
    printf("Kitap Adi: %s\n", kitapad);
    printf("Yazar Adi: %s\n", yazarad);
    printf("Tur: %s\n", tur);
    printf("Sayfa Sayisi: %d\n", sayfa);
    printf("Basim Yili: %d\n", basimyili);

    return 0;
}

