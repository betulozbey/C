#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Bu program, kullanýcýnýn girdiði bir ondalýk sayýnýn floor ve ceil iþlevlerini kullanarak en yakýn alt ve üst tam sayýya yuvarlamasýný saðlar. */

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

