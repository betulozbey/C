#include <stdio.h>
#include <stdlib.h>
/*program sýnav notlarýný ve projenin puanýný kullanarak bir ortalama hesaplar.*/
int main() {
    int s1, s2, s3, p, ort;

    s1 = 65;
    s2 = 35;
    s3 = 15;
    p = 75;

    ort = (s1 + s2 + s3 + p) / 4; // Puan sýnav notu deðil, bu yüzden ortalama hesabýna dahil edilmelidir.

    printf("Sonuc: %d\n", ort);

    return 0;
}
