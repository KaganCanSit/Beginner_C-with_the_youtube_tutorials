#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
/*
	char sehir[15];
	int i;
	for(i=0;i<2;i++)
	{
		printf("Sehri Giriniz: ");
		scanf("%s",sehir);
		printf("Girilen sehir: %s",sehir);
		printf("\n\n");
	}
*/


/*
	//Odev
	//3 þehri ardý ardýna girip aþaðýya þehirleri listeleyen prg. yazýnýz.
	char sehir[3][15];
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("Sehir Ismi Giriniz:  ");
		scanf("%s",&sehir[i]);		
	}

	printf("\n\n");
	printf("Girmis Olgunuz Sehir Isimleri \n");
	
	for(i=0;i<3;i++)
	{
		printf("%s \n",sehir[i]);	
	}
*/


/*	
	int dizi[100];
	int i=0,sayi=0;
	
	printf("Eleman Sayisi: ");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++)
	{
		printf("Dizinin %d degerini girin: ",i+1);
		//i+1 i dizide ki 0 deðerini yok saymak için kullandýk.
		scanf("%d",&dizi[i]);
	}
	printf("\n\n");
	printf("Girilen Degerler \n");
	
	for(i=0;i<sayi;i++)
	{
		printf("%d \n",dizi[i]);
	}
*/	
	
	//Odev2
	//Dýþarýdan alýnan elaman sayýsý ve dizinin toplamý ve ortalamasýný yapan uyg. yapýnýz.
	
	int dizi[20];
	int i=0,sayi=0;
	int ortalama=0,toplam=0;
	
	printf("Kac adet dizi elemani olacagini giriniz: ");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++)
	{
		printf("Deger Giriniz: ",i+1);
		scanf("%d",&dizi[i]);
	}
	printf("\n\n");
	
	for(i=0;i<sayi;i++)
	{
		printf("Girilen Degerler: %d \n",dizi[i]);
		toplam=toplam+dizi[i];
		ortalama=toplam/sayi;
	}
	printf("Toplam Deger: %d \n Ortalama Degeri: %d \n",toplam,ortalama);
	
	
	
	
	return 0;
}
