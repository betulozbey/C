#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1 ile 10 arasýndaki sayýlarý while döngüsü ile listeleyen kod
    int sayi1 = 1;
    printf("1 ile 10 arasindaki sayilar:\n");
    while (sayi1 <= 10) {
        printf("%d\n", sayi1);
        sayi1++;
    }
    printf("\n");

    // 1 ile 20 arasýndaki çift sayýlarý çift sayýlarý listeleyen, ama 14 sayýsýný listelemeyen kod
    int sayi2 = 1;
    printf("1 ile 20 arasindaki cift sayilar (14 haric):\n");
    while (sayi2 <= 20) {
        if (sayi2 % 2 == 0 && sayi2 != 14) {
            printf("%d\n", sayi2);
        }
        sayi2++;
    }
    printf("\n");

    // Girilen sayýnýn faktöriyelini while ile bulan kod
    int girilen_sayi, faktoriyel = 1;
    printf("Faktoriyeli bulunacak sayiyi girin: ");
    scanf("%d", &girilen_sayi);
    int sayac = girilen_sayi;
    while (sayac > 1) {
        faktoriyel *= sayac;
        sayac--;
    }
    printf("Faktoriyel: %d\n", faktoriyel);

    return 0;
}

