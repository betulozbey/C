#include <stdio.h>
#include <stdlib.h>

int main() {
//Klavyeden girilen dereceye g�re suyun durumunu yazd�ran program� kodlay�n
	printf("***suyun durumu***\n\n");
	int su;
	printf("sicaklik degerini girin: ");
	scanf("%d",&su);
	if(su<=0)
	{
		printf("su  buz halinde");
	}
	if(su>0 && su<100)
	{
		printf("su sivi halinde");
	}
	if(su>=100)
	{
		printf("su buhar halinde");
	}

return 0;
}
