#include <stdio.h>
#include <stdlib.h>
/*Bu kod, kullanýcýdan bir kitapla ilgili bilgileri (kitap adý, yazarý, sayfa sayýsý, basým evi, basým tarihi ve tür) alýr ve bu bilgileri ekrana yazdýrýr.*/
int main() {
    char Kitapadi[50], Yazari[50], Sayfasayisi[10], Basimevi[50], Basimtarihi[10], Tur[50];

    printf("Kitapadi: ");
    scanf("%s", Kitapadi);

    printf("Yazari: ");
    scanf("%s", Yazari);

    printf("Sayfasayisi: ");
    scanf("%s", Sayfasayisi);

    printf("Basimevi: ");
    scanf("%s", Basimevi);

    printf("Basimtarihi: ");
    scanf("%s", Basimtarihi);

    printf("Tur: ");
    scanf("%s", Tur);

    printf("\nKitapadi: %s\n", Kitapadi);
    printf("Yazari: %s\n", Yazari);
    printf("Sayfasayisi: %s\n", Sayfasayisi);
    printf("Basimevi: %s\n", Basimevi);
    printf("Basimtarihi: %s\n", Basimtarihi);
    printf("Tur: %s\n", Tur);

    return 0;
}

