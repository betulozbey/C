#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxRecords 100

/*
Bu kod, DHCP sunucunun kullandýðý bir dosyadan ("dhcpd.leases.txt") kiracý (lease) kayýtlarýný okuyan ve bu kayýtlarý ekrana yazdýran bir programdýr.
*/

//lease kayitlarini temsil eden struct
struct LeaseRecord {
   	char ip[16];
    char mac[18];
   	char startTime[21];
    char endTime[21];
    char clientName[100];
    char bindingState[25];
};
//strtok fonksiyonu ile parcalama islemi 
char* strtok(char *str, const char *delim); 
 
int main(){
struct LeaseRecord records[maxRecords] = {0};
int recordCount = 0;
//Dosyaya erisildi
FILE *file=fopen("dhcpd.leases.txt", "r");
if(file==NULL){
	printf("Dosya okunamadï¿½\n");
	printf("Dosyanin ilgili konuma olup olmadigini ve erisim yetkinizin olup olmadigini kontrol ediniz:");
	exit(0);		
}
else 	
	printf("Dosya basariyla acildi.\n");
	
// Dosyanin sonuna gidildi(fseek)
if (fseek(file, 0, SEEK_END) != 0) {
	perror("Dosya konumu degistirme hatasi!");
	fclose(file);
	return 1;
}  
// Dosya isaretcisinin su anki konumu alindi(ftell)
long dosyaBoyutu = ftell(file);
//-1 ya da -1L hatayï belirtiyor.l longtan geliyor
if (dosyaBoyutu == -1L) { 
	perror("Dosya konumu alma hatasi!");
	fclose(file);
	return 1;
}
printf("Dosya isaretcisi su an %ld. konumda\n", dosyaBoyutu);
 
// Dosyanin basina git(fseek)
if (fseek(file, 0, SEEK_SET) != 0) {
    perror("Dosya konumu degistirme hatasi");
    fclose(file);
    return 1;
}

// Dosya verilerini tutmak icin dinamik bellek tahsisi yapildi
char *veriler = (char *) calloc(dosyaBoyutu + 1, sizeof(char)); //once 0 lar sonra tutar 
//  "abc"  'a' 'b' 'c' '\0'
if (veriler == NULL) {
    perror("Bellek tahsis hatasï¿½");
    fclose(file);
    return 1;
}

fread(veriler, dosyaBoyutu,sizeof(char) ,file);
int n = -1;
char* delim = "\n";
char* satir = strtok (veriler, delim);


while (satir != NULL) {
    if (strstr(satir, "lease")) {
    	n++;
    	char* ipstart = strstr(satir, "lease") + 6;
        char* p = memchr(ipstart, ' ', 16);
        strncpy(records[n].ip, ipstart, p - ipstart);
	} else if (strstr(satir, "starts")) {
    	char *sTime=strstr(satir,"starts epoch")+31;
    	strcpy(records[n].startTime, sTime);
    } else if(strstr(satir,"ends")) {
    	char*eTime=strstr(satir,"ends epoch")+29;
    	strcpy(records[n].endTime, eTime);
	} else if(strstr(satir,"ethernet")) {
		char *mc=strstr(satir,"hardware ethernet")+18;
		strncpy(records[n].mac,mc, 17); 
	} else if ( strstr(satir,"binding state")
	      && !strstr(satir,"next")
		  && !strstr(satir,"rewind")
	) {
		char *bs=strstr(satir,"binding state")+14;
		char* p = memchr(bs, ';', 13);
		strncpy(records[n].bindingState, bs, p - bs);
   } else if(strstr(satir,"client-hostname")){
		char *cn=strstr(satir,"client-hostname")+16;
		char *c=memchr(cn, ';', 100);
		strncpy(records[n].clientName, cn, c-cn);
	}
	satir = strtok (NULL, delim);
}

int k;
for (k = 0; k <= n; k++) {
	printf("KAYIT: %d\n", k);	
	printf("~~ ip: %s\n", records[k].ip);	
	printf("~~ start date: %s\n", records[k].startTime);
 	printf("~~ end date: %s\n", records[k].endTime);
	printf("~~ mac: %s\n", records[k].mac);
	printf("~~ binding state: %s\n", records[k].bindingState);
	printf("~~ client hostname: %s\n", records[k].clientName);
	printf("\n");
}
free(veriler);
fclose(file); 
return 0;
}





