#include <stdio.h>
#include <stdlib.h>
/*Bu program, Fibonacci serisinin ilk on elemanýný bulur ve ekrana yazdýrýr. Her adýmda, en son üç sayýnýn toplamý, bir sonraki Fibonacci sayýsýný verir. */

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
