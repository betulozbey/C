#include <stdio.h>
#include <stdlib.h>
/*Bu program, Fibonacci serisinin ilk on eleman�n� bulur ve ekrana yazd�r�r. Her ad�mda, en son �� say�n�n toplam�, bir sonraki Fibonacci say�s�n� verir. */

int main() {
int a,b,c,d,i;
a=1;
b=1;
c=1;
printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",c);
for(i=1;i<=10;i++)
{
	d=a+b+c;
	a=b;
	b=c;
    c=d;

printf("%d\n",d);
}
return 0;	
}
