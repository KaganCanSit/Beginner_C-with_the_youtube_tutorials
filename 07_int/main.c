#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//math.h kütüphanesi matematiksel fonksiyonlarý kendi içerisinde barýndýran bir küütüphanedir.


int main() {
	
	//int deðiþkeni
	
	/*
	Ýnt deðiþkenler aritmetik iþlemler yapabilmek için kullanýlýr. 
	Fakat sadece tam sayý kýsýmlarýný alýr. Ondalýklý kýsýmlarý almaz.
	Char deðiþkeninde ise sayýlarý kullanýcýdan alsanýzda iþlem yapamazsýnýz.Sebebi ise yazý karakteri olarak kabul etmesidir. Sayýsal deðer olarak görmez.
	Float'da ise ondalýklý veriler için kullanýlýr.
	
	int =1 ,2
	float =1 - 1,3- 1,2
	*/




/*	
	//Basit Tanýmlama Örneði
	int sayi;
	sayi=11;
	printf("Sayi Degeri: %d",sayi);
*/	




/*	
	//Ornek1
	int s1,s2,islem;
	s1=10;
	s2=6,
	islem=s1/s2;
	
	printf("Sonuc: %d \n",islem);
*/	
	


	
	/*
	Tam sayýlarý tanýmladýðýmýz için (int) ondalýklý deðerleri iþleme katmaz.
	Tam bölünemeyen yukarýda ki örnekte olduðu gibi bilgisayar 1 sonucu verdi.
	*/
/*	
	//Ornek2
	int kenar,cevre,alan;
	kenar=10;
	cevre=10*4;
	alan=10*10;
	
	printf("Karenin Cevresi= %d \n",cevre);
	printf("Karenin Alani= %d",alan);
*/
	
	
	
/*	
	//Ornek 3
	int sayi1, sayi2, toplam;
	sayi1 = 40;
	sayi2 = 80;
	toplam=sayi1+sayi2;
	
	printf("Toplam Sonuc: %d",toplam);
*/
	
	//Ornek 4
	int sayi,sayi1,topla,carp,fark,bol;
	
	sayi=50;
	sayi1=10;
	
	topla=sayi+sayi1;
	fark=sayi-sayi1;
	carp=sayi*sayi1;
	bol=sayi/sayi1;
	
	printf("Toplam = %d \n",topla);
	printf("Carpim = %d \n",carp);
	printf("Fark = %d \n",fark);
	printf("Bolum = %d \n",bol);

	return 0;
}
