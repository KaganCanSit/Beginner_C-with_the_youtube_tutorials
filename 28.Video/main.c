#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

/*	
	//Soru1: Bir bakteri t�r� her saat ba�� kendini ikiye b�lerek �o�almaktad�r. Bu labaratuvarda 24 saat sonra ka� tane bakteri olur?
	
	int baksay=0,i=0;
	printf("Baslangictaki Bakteri Sayisi Giriniz: ");
	scanf("%d",&baksay);
	
	for(i=1;i<=24;i++)
	{
		baksay=baksay*2;
	}
	
	printf("24 Saat Sonra Son Durumdaki Bakteri Sayisi: %d",baksay);

*/

/*
	//S�leyman Abinin Yard�m� Ve Math.h K�t�phanesi Yard�m�yla ��z�m�
	int baksay=0,sonuc=0;
	printf("Baslangictaki Bakteri Sayisi Giriniz: ");
	scanf("%d",&baksay);

	sonuc= pow(2,24)*baksay;
		
	printf("24 Saat Sonra Son Durumdaki Bakteri Sayisi: %d",sonuc);
*/	

/*	
	//Soru2: Klavyeden 4 tane tam say� al�p bunlar�n toplam�n� bulan program� kodlay�n�z.
	
	int s1=0,s2=0,s3=0,s4=0,toplam=0;
	
	printf("Toplamlarini Bulmak Isteginiz 4 Adet Sayiyi Giriniz: \n");
	scanf("%d %d %d %d",&s1 ,&s2, &s3, &s4);
	
	toplam=s1+s2+s3+s4;
	
	printf("Sayilarin Toplami: %d",toplam);
*/	

/*
	//Soru3: Klavyeden 0 girilene kadar sayilari toplayan programi yaz�n�z.
	
	int sayi, toplam=0;

	while(sayi!=0)
	{
		printf("Sayi Degeri Giriniz: ");
		scanf("%d",&sayi);
		toplam=sayi+toplam;
	}
	printf("Girilen Degerlerin Toplami: %d",toplam);
*/
	
	
	//Soru4: Bir otoparkta �cretlendirme sistemi �u �ekildedir.
	/* 	0-4 saat=10
		5-8 saat=12
		9-12 saat=15
		13++ saat=20
	*/
	//Klavyeden otoparkta ka� saat kald��� girilen arac�n �demesi gereken tutar� hesaplayan prg. kodlay�n�z.
	
	int saat=0,tutar=0;
	printf("Aracinizin Otoparkta Kalma Suresini Giriniz: ");
	scanf("%d",&saat);
	
	if(saat<=4)
	{
		tutar=saat*10;
		printf("Odeyeceginiz Tutar: %d",tutar);
	}
	if(saat>=5 && saat<=8)
	{
		tutar=saat*12;
		printf("Odeyeceginiz Tutar: %d",tutar);
	}
	if(saat>9 && saat<=12)
	{
		tutar=saat*15;
		printf("Odeyeceginiz Tutar: %d",tutar);
	}
	else
	{
		tutar=saat*20;
		printf("Odeyeceginiz Tutar: %d",tutar);
	}
	
	return 0;
}
