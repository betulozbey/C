#include <stdio.h>
#include <stdlib.h>
/*Bu program, kullan�c�n�n girdi�i bir say�n�n fakt�riyelini hesaplar. */

int main() {
    int i, sayi;
    int faktoriyel = 1;

    printf("Faktoriyeli alinacak sayiyi girin: ");
    scanf("%d", &sayi);
    for (i = 1; i <= sayi; i++) {
        faktoriyel *= i;
    }
    printf("Sonucunuz: %d\n", faktoriyel);
    return 0;
}
