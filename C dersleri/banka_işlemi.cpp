#include<stdio.h>
/*bir banka i�lem sim�lasyonu. Kullan�c�ya bakiyesini sorgulama veya para �ekme gibi i�lemler i�in se�enekler sunuyor.*/


int main() {
    int bakiye = 10000;
    int islem;
    
    printf("Yapilacak islemi secin:\n");
    printf("1. Bakiye sorgulama\n");
    printf("2. Para �ekme\n");
    
    scanf("%d", &islem);

    switch(islem) {
        case 1:
            printf("Bakiye: %d\n", bakiye);
            break;
        case 2:
            {
                int cekilecek_miktar;
                printf("�ekmek istedi�iniz miktar� girin: ");
                scanf("%d", &cekilecek_miktar);
                if (cekilecek_miktar > bakiye)
                    printf("Bakiye yetersiz\n");
                else {
                    bakiye -= cekilecek_miktar;
                    printf("%d TL �ekildi. Yeni bakiye: %d\n", cekilecek_miktar, bakiye);
                }
            }
            break;
        default:
            printf("Ge�ersiz i�lem se�ildi.\n");
    }

    return 0;
}
