#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//math.h k�t�phanesi matematiksel fonksiyonlar� kendi i�erisinde bar�nd�ran bir k��t�phanedir.


int main() {
	
	//int de�i�keni
	
	/*
	�nt de�i�kenler aritmetik i�lemler yapabilmek i�in kullan�l�r. 
	Fakat sadece tam say� k�s�mlar�n� al�r. Ondal�kl� k�s�mlar� almaz.
	Char de�i�keninde ise say�lar� kullan�c�dan alsan�zda i�lem yapamazs�n�z.Sebebi ise yaz� karakteri olarak kabul etmesidir. Say�sal de�er olarak g�rmez.
	Float'da ise ondal�kl� veriler i�in kullan�l�r.
	
	int =1 ,2
	float =1 - 1,3- 1,2
	*/




/*	
	//Basit Tan�mlama �rne�i
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
	Tam say�lar� tan�mlad���m�z i�in (int) ondal�kl� de�erleri i�leme katmaz.
	Tam b�l�nemeyen yukar�da ki �rnekte oldu�u gibi bilgisayar 1 sonucu verdi.
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
