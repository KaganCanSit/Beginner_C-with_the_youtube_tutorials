#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	
/*	
	int sayi;
	sayi=5;
	
	if(sayi==5)
	{
		printf("Girilen Deger Dogru");
	}
	else
	{
		printf("Girilen Deger Hatalý");
	}
*/


/*
	int s1,s2,toplam;
	
	printf("Birinci Sayiyi Giriniz: ");
	scanf("%d",&s1);
	
	printf("Ikinci Sayiyi Giriniz: ");
	scanf("%d",&s2);

	toplam=s1+s2;
	
	if(toplam>=50)
	{
		printf("Girilen Degerler Toplami 50'den Buyuk - Islem Sonucu:%d",toplam);
	}	
	else
	{
		printf("Girilen Degerler Toplami 50'den Kucuk - Islem Sonucu:%d",toplam);
	}
*/
	
	
	int s1,s2,ort;
		
	printf("Ders Gecme Ve Kalma Notu Hesaplama\n\n");
	printf("Birinci Sinavin yuzde 40, Ikincisinin yuzde 60 Gecerli \n");

	printf("Birinci Sinav Notunuzu Giriniz: ");
	scanf("%d",&s1);
	
	printf("Ikinci Sinav Notunuzu Giriniz: ");
	scanf("%d",&s2);

	ort=(s1*0.4)+(s2*0.6);
	printf("Ortalamanýz: %d \n",ort);
	
	if(ort>=50)
	{
		printf("Tebrikler. Gectiniz.");
	}
	else
	{
		printf("Maalesef. Gecemediniz.");
	}
	
	
	return 0;
}



