#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	
	/* Ornek1
	int sayi;
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	printf("Girmis oldugunuz sayi: %d",sayi);
	*/
	
	
	/* Ornek2
	int sayi1,sayi2,toplam,fark,carpim;
	
	printf("Toplamak Istediginiz Ilk Sayiyi Giriniz: ");
	scanf("%d",&sayi1);
	
	printf("Toplamak Istediginiz Ikinci Sayiyi Giriniz: ");
	scanf("%d",&sayi2);
	
	printf("Girmis Oldugunuz Sayilar: %d %d \n",sayi1,sayi2);
	
	toplam=sayi1+sayi2;
	fark=sayi1-sayi2;
	carpim=sayi1*sayi2;
	
	printf("Girmis Oldugunuz Degerlerin Toplam Sonucu= %d \n",toplam);
	printf("Girmis Oldugunuz Degerlerin Fark Sonucu= %d \n",fark);
	printf("Girmis Oldugunuz Degerlerin Carpim Sonucu= %d \n",carpim);
	*/
	
	/*
	//Ornek3
	int kenar,alan,cevre;
	
	printf("Karenin Kenarini Giriniz: ");
	scanf("%d",&kenar);

	alan=kenar*kenar;
	cevre= kenar*4;
	
	printf("Karenin Alani=%d\n",kenar);
	printf("Karenin Cevresi=%d\n",cevre);
	/*
	
	//Sinema Sorusu
	/* 
	Bir sinemada ücretlendirme þu þekildedir;
	Mýsýr:2
	Kola:2
	Su:1
	Bilet:8
	Toplan alýnan ürünlerin ve biletin ücretleri toplamýný hesaplayan program.
	*/
	
	int toplam,misir,kola,su,bilet;
	
	printf("Almak Istediginiz Bilet Sayisi: ");
	scanf("%d",&bilet);
	
	printf("Almak Istediginiz Kola Miktari: ");
	scanf("%d",&kola);
	
	printf("Almak Istediginiz Misir Miktari: ");
	scanf("%d",&misir);
	
	printf("Almak Istediginiz Su Miktari: ");
	scanf("%d",&su);
	
	toplam =(bilet*8)+(kola*2)+(misir*2)+(su*1);
	
	
	printf("Satin Alinan Urunler:%d adet Bilet, %d adet Kola, %d adet Misir, %d adet Su \n",bilet,kola,misir,su);
	printf("Odemeniz Gereken Tutar: %d ",toplam);
	
	
	
	
	
	
	
	return 0;
}
