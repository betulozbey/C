#include <stdio.h>
#include <stdlib.h>
/*
Bu program, bir kitab�n temel bilgilerini tan�t�r. Kullan�c�n�n girdi�i veya program�n kod i�erisinde �nceden belirlenmi� olan kitap ad�, yazar ad�, t�r, sayfa say�s� ve bas�m y�l� gibi bilgileri ekrana yazd�r�r.*/

int main() {
    char kitapad[] = "Avcunuzdaki Kelebek";
    char yazarad[] = "Ahmet Serif �zgoren";
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

