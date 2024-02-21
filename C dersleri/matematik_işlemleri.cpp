#include <stdio.h>

int main() {
    int sayi1, sayi2, sonuc, secim;

    sayi1 = 12;
    sayi2 = 16;

    printf("***Matematik Menusu***\n\n");
    printf("1-Karede alan ve cevre hesabi\n");
    printf("2-Girilen sayinin kupu\n");
    printf("3-Cemberde alan ve cevre hesabi\n");
    printf("4-5x^2 + 7x + 9 için x'e gore islemin sonucu\n");
    printf("5-Dikdortgende alan ve cevre hesabi\n\n");
    printf("Isleminizi secin: ");
    scanf("%d", &secim);

    switch (secim) {
        case 1:
            printf("Kare alani: %d\n", (sayi1 * sayi1));
            printf("Kare cevresi: %d\n", (4 * sayi1));
            break;
        case 2:
            printf("Girilen sayinin kupu: %d\n", (sayi2 * sayi2 * sayi2));
            break;
        case 3:
            {
                float yaricap;
                printf("Cemberin yaricapini girin: ");
                scanf("%f", &yaricap);
                printf("Cember alani: %.2f\n", (3.14 * yaricap * yaricap));
                printf("Cember cevresi: %.2f\n", (2 * 3.14 * yaricap));
            }
            break;
        case 4:
            {
                int x;
                printf("x degerini girin: ");
                scanf("%d", &x);
                sonuc = 5 * x * x + 7 * x + 9;
                printf("Sonuc: %d\n", sonuc);
            }
            break;
        case 5:
            {
                int en, boy;
                printf("Dikdortgenin enini ve boyunu girin: ");
                scanf("%d %d", &en, &boy);
                printf("Dikdörtgen alani: %d\n", (en * boy));
                printf("Dikdörtgen cevresi: %d\n", (2 * (en + boy)));
            }
            break;
        default:
            printf("Gecersiz islem secildi.\n");
    }

    return 0;
}
