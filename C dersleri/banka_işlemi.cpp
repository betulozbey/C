#include<stdio.h>
/*bir banka iþlem simülasyonu. Kullanýcýya bakiyesini sorgulama veya para çekme gibi iþlemler için seçenekler sunuyor.*/


int main() {
    int bakiye = 10000;
    int islem;
    
    printf("Yapilacak islemi secin:\n");
    printf("1. Bakiye sorgulama\n");
    printf("2. Para çekme\n");
    
    scanf("%d", &islem);

    switch(islem) {
        case 1:
            printf("Bakiye: %d\n", bakiye);
            break;
        case 2:
            {
                int cekilecek_miktar;
                printf("Çekmek istediðiniz miktarý girin: ");
                scanf("%d", &cekilecek_miktar);
                if (cekilecek_miktar > bakiye)
                    printf("Bakiye yetersiz\n");
                else {
                    bakiye -= cekilecek_miktar;
                    printf("%d TL çekildi. Yeni bakiye: %d\n", cekilecek_miktar, bakiye);
                }
            }
            break;
        default:
            printf("Geçersiz iþlem seçildi.\n");
    }

    return 0;
}
