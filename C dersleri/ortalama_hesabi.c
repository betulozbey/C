#include <stdio.h>
#include <stdlib.h>
/*program s�nav notlar�n� ve projenin puan�n� kullanarak bir ortalama hesaplar.*/
int main() {
    int s1, s2, s3, p, ort;

    s1 = 65;
    s2 = 35;
    s3 = 15;
    p = 75;

    ort = (s1 + s2 + s3 + p) / 4; // Puan s�nav notu de�il, bu y�zden ortalama hesab�na dahil edilmelidir.

    printf("Sonuc: %d\n", ort);

    return 0;
}
