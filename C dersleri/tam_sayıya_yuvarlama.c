#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Bu program, kullan�c�n�n girdi�i bir ondal�k say�n�n floor ve ceil i�levlerini kullanarak en yak�n alt ve �st tam say�ya yuvarlamas�n� sa�lar. */

int main() {
    double sayi, sonuc1, sonuc2;
    
    printf("Ondalik sayiyi girin: ");
    scanf("%lf", &sayi);
    
    sonuc1 = floor(sayi);
    printf("Floor sonucu: %.3f\n", sonuc1);
    
    sonuc2 = ceil(sayi);
    printf("Ceil sonucu: %.3f\n", sonuc2);
    
    return 0;
}

