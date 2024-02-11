#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<time.h>
#define MAX_OGRENCI_SAYISI 100

struct Ogrenci{
	char ad[50];
	char soyad[50];
	long int ogrenciNo;
	char telefonNo[20];
	char tcNo[12];
}; 

//Öğrenci  bilgilerini dosyadan okuyan fonksiyon
int DosyadanOgrenciBilgileriniOku(struct Ogrenci ogrenciler[]){
	int ogrenciSayisi = 0;
	FILE *dosya=fopen("ogrenciler.txt","r");
	if(dosya==NULL){
		printf("Dosya acilamadi.\n");
        exit(1);
	}
    while (fscanf(dosya,"%s %s %s %s %ld\n",
			ogrenciler[ogrenciSayisi].ad,
           	ogrenciler[ogrenciSayisi].soyad,
			ogrenciler[ogrenciSayisi].tcNo,
			ogrenciler[ogrenciSayisi].telefonNo,
			&ogrenciler[ogrenciSayisi].ogrenciNo
		) != EOF) {
        ogrenciSayisi++;
	}
	fclose(dosya);
	return ogrenciSayisi;
}

// Öğrenci bilgilerini dosyaya yazan fonksiyon
void OgrenciBilgileriniDosyayaYaz(const struct Ogrenci ogrenciler[], int ogrenciSayisi) { 
    FILE* dosya = fopen("ogrenciler.txt", "w");
    if (dosya == NULL) {
        printf("Dosya acilamadi.\n");
        exit(1);
    }
    int i;
    for (i = 0; i < ogrenciSayisi; i++) {
        fprintf(dosya,"%s %s %s %s %ld\n", 
			ogrenciler[i].ad, 
			ogrenciler[i].soyad,
            ogrenciler[i].tcNo, 
			ogrenciler[i].telefonNo,
			ogrenciler[i].ogrenciNo);
    }
    fclose(dosya);
}

void ogrencileriEkranaBas(struct Ogrenci ogrenciler[],int ogrenciSayisi){	
	int i;
	for (i = 0; i < ogrenciSayisi; i++) {
        printf("Ad:%s\n",ogrenciler[i].ad);
        printf("Soyad:%s\n",ogrenciler[i].soyad);
        printf("TC No:%s\n",ogrenciler[i].tcNo);
        printf("Telefon No:%s\n",ogrenciler[i].telefonNo);
        printf("Ogrenci No:%ld\n",ogrenciler[i].ogrenciNo);
        printf("\n");
    }	
}

bool ogrenciNumarasiVarMi(const struct Ogrenci ogrenciler[],int ogrenciSayisi,long long ogrenciNo){
	int i;
	for(i=0;i<ogrenciSayisi;i++){
		if(ogrenciler[i].ogrenciNo==ogrenciNo){
			return true; //öğrenci numarası mevcut
		}
	}
	return false;
}

void ogrenciEkle(struct Ogrenci ogrenciler[],int *ogrenciSayisi){
	if (*ogrenciSayisi < MAX_OGRENCI_SAYISI) {
		printf("Ad: ");
	    scanf("%s",ogrenciler[*ogrenciSayisi].ad);
	    printf("Soyad: ");
	    scanf("%s",ogrenciler[*ogrenciSayisi].soyad);
		while (1){
		printf("Tc no: ");
	    scanf("%s",ogrenciler[*ogrenciSayisi].tcNo);
	    	if (strlen(ogrenciler[*ogrenciSayisi].tcNo) != 11) {
	        	printf("TC Kimlik No 11 basamakli olmalidir!\n");
			}
			else{
				break;
			}
		}
		while (1) {
	    printf("Telefon no: ");
	    scanf("%s",ogrenciler[*ogrenciSayisi].telefonNo);
	    	if (strlen(ogrenciler[*ogrenciSayisi].telefonNo) != 10) {
	    		printf("Telefon no 10 basamakli olmalidir.Tekrar giriniz!\n");
	    	} else {
				break;
			}
		}
	    //Giriş yılı alındı
	    int girisYili;
	    printf("Giriş Yili(orn 2023): ");
	    scanf("%d",&girisYili);
	    int bolumKodu;
		int secim2;
		printf("Bolumunuzu seçiniz.\n1.Bilgisayar Muhendisliği\n2.Makine Muhendisliği\n3.Elektrik Elektronik Muhendisliği\n4.Endüstri Muhendisliği\n ");
		scanf("%d",&secim2);
		switch (secim2) {
			case 1:
				bolumKodu = 1000; // Bilgisayar Mühendisliği
				break;
			case 2:
				bolumKodu = 2000; // Makine Mühendisliği
				break;
			case 3:
				bolumKodu = 3000; // Elektrik Elektronik Mühendisliği
				break;
			case 4:
				bolumKodu = 4000; // Endüstri Mühendisliği
				break;
			default:  // Hata durumu
				printf("Geçersiz bölüm secimi!\n");
				break;
		}		  
	    // Son 2 basamağı için  rastgele bir sayı üretin
		int rastgeleBasamaklar=(rand() % 90) + 10; //10 ile 99 arasında bir rastgele sayi
		//Ogrenci numarası oluşturuldu
		long ogrenciNo=(long long)girisYili*1000000LL +bolumKodu * 100 + rastgeleBasamaklar; 
		//Aynı numaradan öğrenci var mı kontrol et
		if(ogrenciNumarasiVarMi(ogrenciler,*ogrenciSayisi,ogrenciNo)){
			//aynı numaradan öğrenci varsa eklemeyi durdur
			printf("Bu numaraya sahip bir ogrenci zaten var.Eklenemedi!\n");
		} 
		else {
			ogrenciler[*ogrenciSayisi].ogrenciNo=ogrenciNo;
			printf("Ogrenci no:%ld\n",ogrenciNo);
			(*ogrenciSayisi)++;
			// Öğrenci bilgilerini dosyaya yaz
			OgrenciBilgileriniDosyayaYaz(ogrenciler, *ogrenciSayisi);	  
			printf("Ogrenci eklendi.\n");	
				              
		} 
	}
   	else
    	printf("Maksimum ogrenci sayisina ulasildi.\n");
}

// Öğrenciyi öğrenci numarasına göre arayan fonksiyon
int OgrenciAra(const struct Ogrenci ogrenciler[], int ogrenciSayisi, long long arananOgrenciNo) {
	int i;
	for (i = 0; i < ogrenciSayisi; i++) {
		if (ogrenciler[i].ogrenciNo == arananOgrenciNo) {
			return i; // Öğrenci bulundu, indeksi döndür
		}
	}
	return -1; // Öğrenci bulunamadı, -1 döndür
}

// Öğrenci numarasını güncelleyen fonksiyon
void OgrenciNumarasiniGuncelle(struct Ogrenci *ogrenci, int girisYili, int bolumKodu) {
    // İlk 4 basamak, giriş yılı ile başlasın
	// Sonraki 4 basamak, bölüm kodu ile belirlensin
	// Son 2 basamak, rastgele bir sayı olsun
	int rastgeleBasamaklar = (rand() % 90) + 10; // 10 ile 99 arasında rastgele bir sayı
    long long yeniOgrenciNo = (long long)girisYili*10000 + bolumKodu*100 + rastgeleBasamaklar;
    // Yeni öğrenci numarasını atama
    ogrenci->ogrenciNo = yeniOgrenciNo;
}

void ogrenciDuzenle(struct Ogrenci ogrenciler[],int ogrenciSayisi,long int arananOgrenciNo){
	int indeks = OgrenciAra(ogrenciler, ogrenciSayisi, arananOgrenciNo); 
	if(indeks!=-1){
		int secim2;
		printf("Ogrencinin hangi bilgisini duzenlemek istersiniz ?\n");
		printf("1 Ad: %s\n",ogrenciler[indeks].ad);
		printf("2 Soyadı: %s\n",ogrenciler[indeks].soyad);
		printf("3 Tc No: %s\n",ogrenciler[indeks].tcNo);
		printf("4 Telefon No: %s\n",ogrenciler[indeks].telefonNo);
		printf("5 Ogrenci numarasi: %ld\n",ogrenciler[indeks].ogrenciNo);
		printf("-->");
		scanf("%d", &secim2);
		switch(secim2){
			case 1:
				printf("Yeni ad:");
				scanf("%s", ogrenciler[indeks].ad);
				break;
			case 2:
				printf("Yeni soyad:");
				scanf("%s", ogrenciler[indeks].soyad);
				break;
			case 3:
				printf("Yeni tc no: ");
				scanf("%s", ogrenciler[indeks].tcNo);
				break;
			case 4:
				printf("Yeni telefon numarası:");
				scanf("%s", ogrenciler[indeks].telefonNo);
				break;
			case 5:{
				// Öğrenci numarasını güncellemek için OgrenciNumarasiniGuncelle fonksiyonunu kullanabilirsiniz
				int yeniGirisYili,yeniBolumKodu;
				printf("Yeni giris yılı: ");
				scanf("%d", &yeniGirisYili);
				int secim3;
				printf("Bolumunuzu seciniz.\n1.Bilgisayar Muhendisliği\n2.Makine Muhendisliği\n3.Elektrik Elektronik Muhendisliği\n4.Endüstri Muhendisliği\n ");
				scanf("%d", &secim3);
					switch (secim3) {
						case 1:
							yeniBolumKodu = 1000; // Bilgisayar Mühendisliği
							break;
						case 2:
							yeniBolumKodu = 2000; // Makine Mühendisliği
							break;
						case 3:
							yeniBolumKodu = 3000; // Elektrik Elektronik Mühendisliği
							break;
						case 4:
							yeniBolumKodu  = 4000; // Endüstri Mühendisliği
							break;
						default:
							printf("Geçersiz bölüm secimi!\n");
							break;
					}
				OgrenciNumarasiniGuncelle(&ogrenciler[indeks], yeniGirisYili, yeniBolumKodu);
				printf("Yeni ogrenci no: %ld\n", ogrenciler[indeks].ogrenciNo);
				break;
			}
			default:
				printf("Gecersiz islem!\n");
				break;
		}	
	} else 
		printf("Gecersiz ogrenci numarasi. Ogrenci bulunamadi.\n");
}

int OgrenciSilByIndex(struct Ogrenci ogrenciler[], int *ogrenciSayisi, int indeks) {
    if (indeks >= 0 && indeks < *ogrenciSayisi) {//Başarı durumu döndür
        // Öğrenciyi bulduk, şimdi silelim
        int i;
        for (i = indeks; i < (*ogrenciSayisi) - 1; i++) {
            // İndeksten sonraki öğrencileri bir önceki indekse kopyala
            ogrenciler[i] = ogrenciler[i + 1];
        }
        (*ogrenciSayisi)--; // Öğrenci sayisini azalt
        printf("Ogrenci basariyla silindi.\n");
		//Dosyayı güncelleyin
        OgrenciBilgileriniDosyayaYaz(ogrenciler, *ogrenciSayisi);
    } else { // Başarısızlık durumunu döndür
        printf("Gecersiz ogrenci numarasi. Ogrenci bulunamadi.\n");
        return 0; 
    }
}
int main(){
    struct Ogrenci ogrenciler[MAX_OGRENCI_SAYISI] = {0};
    int ogrenciSayisi = DosyadanOgrenciBilgileriniOku(ogrenciler);
    //ogrencileriEkranaBas(ogrenciler,ogrenciSayisi);
    //OgrenciBilgileriniDosyayaYaz(ogrenciler,ogrenciSayisi);
    int secim;
    while (1) {
        printf("Menu:\n");
        printf("0.Cikis\n");
        printf("1.Ogrenci Listele\n");
        printf("2.Ogrenci Ekle\n");
        printf("3.Ogrenci Duzenle\n");
        printf("4.Ogrenci Sil\n");
        printf("Seciminizi yapin: ");
        scanf("%d", &secim);
        if (secim == 0) {
        	printf("Programdan cikiliyor...\n");
        	break; // Sonsuz döngüyü sonlandır
        }
	    switch (secim) {
	        case 1:     // Ogrenci Listele
	            printf("Ogrenci Bilgileri:\n");
	            ogrencileriEkranaBas(ogrenciler,ogrenciSayisi);
	    		break;
            case 2:  // Ogrenci Ekle
	            ogrenciEkle(ogrenciler,&ogrenciSayisi);
				OgrenciBilgileriniDosyayaYaz(ogrenciler,ogrenciSayisi);
	            break;	
			case 3: {
				long  arananOgrenciNo;
				printf("Duzenlemek istediginiz ogrenci numarasini girin: ");
				scanf("%ld", &arananOgrenciNo);
				ogrenciDuzenle(ogrenciler, ogrenciSayisi, arananOgrenciNo);
				OgrenciBilgileriniDosyayaYaz(ogrenciler, ogrenciSayisi);
				break;
			}
			case 4:{
				// Öğrenci silme işlemi
			    long arananOgrenciNo;
				printf("Silmek istediginiz ogrenci numarasini girin: ");
				scanf("%ld", &arananOgrenciNo);
   			 	int silmeSonucu = OgrenciSilByIndex(ogrenciler, &ogrenciSayisi, OgrenciAra(ogrenciler, ogrenciSayisi, arananOgrenciNo));
				if (silmeSonucu) {
					printf("Ogrenci basariyla silindi.\n");
					OgrenciBilgileriniDosyayaYaz(ogrenciler, ogrenciSayisi);
					exit(0);
				} else 
					printf("Ogrenci silinemedi.\n");	
				break;		
		}	
	}
}
    return 0;
}
