#include <stdio.h>
#include <stdlib.h>
#include <math.h>


	int sayi1,sayi2,sonuc;
	char islemsec;
	
int main() {

	//Switch Case kullanarak kullanýcýdan alýnan iki sayýya basit matematiksel iþlemler yapan prg. yazýnýz.
	
	printf("Birinci Sayiyi Giriniz: ");
	scanf("%d",&sayi1);	
	printf("Ikinci Sayiyi Giriniz: ");
	scanf("%d",&sayi2);
	
	printf("- toplama icin 1, + cikarma icin 2, / bolme icin 3, * carpma icin 4 \n");
	printf("Yapmak Istediginiz Islemi Seciniz: ");
	scanf("%d",&islemsec);
	
	switch(islemsec)
	{
		case 1: 
			sonuc=sayi1+sayi2;
			printf("Toplama Islemi Sonucu: %d",sonuc);
			break;
		
		case 2:
			sonuc=sayi1-sayi2;
			printf("Cikarma Islemi Sonucu: %d",sonuc);
			break;
		
		case 3:
			sonuc=sayi1/sayi2;
			printf("Bolme Islemi Sonucu: %d",sonuc);
			break;
		
		case 4:
			sonuc=sayi1*sayi2;
			printf("Carpma Islemi Sonucu: %d",sonuc);
			break;
		
		default:
			printf("Yanlis Sembol Girdiniz.");
			break;
	}	
	
	
	
		
	
	return 0;
}
