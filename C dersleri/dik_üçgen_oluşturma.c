#include <stdio.h>
#include <stdlib.h>

/*  Bu program, kullanýcýnýn girdiði bir taban deðerine göre bir dik üçgen oluþturur.  */

int main() {
	int i,j,taban;
	printf("taban degerini girin: ");
	scanf("%d",&taban);
	for(i=1;i<=taban;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
return 0;
}
