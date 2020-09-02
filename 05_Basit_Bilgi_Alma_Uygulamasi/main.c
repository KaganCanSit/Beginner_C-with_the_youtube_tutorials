#include <stdio.h>
#include <stdlib.h>



int main() {
	
	char ad[20], soyad[20], sehir[13], meslek[20];
	int yas;
	
	printf("Adinizi Giriniz: ");
	scanf("%s",&ad);
	printf("Soyadinizi Giriniz: ");
	scanf("%s",&soyad);
	printf("Yasinizi Giriniz: ");
	scanf("%d",&yas);
	printf("Yasadiginiz Sehir: ");
	scanf("%s",&sehir);
	printf("Mesleginiz: ");
	scanf("%s",&meslek);
	
	printf("\n\n=================================\n");
	
	printf("Adi:%s - Soyadi:%s \n",ad,soyad);
	printf("Yasi: %d\n\n",yas);
	printf("Yasadigi Sehir:%s\n",sehir);
	printf("Meslegi:%s\n",meslek);
	
	printf("=================================");
	
	return 0;
}
