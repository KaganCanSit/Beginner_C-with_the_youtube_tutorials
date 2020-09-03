#include <stdio.h>
#include <stdlib.h>


	struct kayit
	{
		char ad[30];
		int no;
		int sinif;
		float ort;
	};
	
	struct kayit ogrenci;

int main() {
	
	printf("Adiniz Ve Soyadiniz: ");
	scanf("%s",&ogrenci.ad);
	
	printf("Okul Numaraniz: ");
	scanf("%d",&ogrenci.no);
	
	printf("Sinifiniz: ");
	scanf("%d",&ogrenci.sinif);
	
	printf("Ortalama Degeriniz: ");
	scanf("%f",&ogrenci.ort);
	
	printf("%s \n",ogrenci.ad);
	printf("%d \n",ogrenci.no);
	printf("%d \n",ogrenci.sinif);
	printf("%f \n",ogrenci.ort);
	
	return 0;
}
