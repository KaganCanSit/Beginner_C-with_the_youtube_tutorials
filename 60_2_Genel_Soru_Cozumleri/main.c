#include <stdio.h>
#include <stdlib.h>


int main() {
	//Burada ��zmeye �al��t���m sorulara "http://www.ckutuphanesi.com/tum-ornek-projeler/" adresi �zerinden ula�abilirsiniz. Gayet yararl� ve emekle haz�rlam��lar, emeklerine sa�l�k.

/*	
	//Soru31:Kuulan�c� negatif bir say� girene kadar kullan�c�dan say� girmesini isteyen ve negatif say� girildi�inde ekrana yazd�ran program.
	int sayi=0;
	
	while(sayi>=0)		
	{
		printf("Sayi Degeri Giriniz: ");
		scanf("%d",&sayi);
	}
	printf("Tebrikler, dongu kirildi! %d Sayi Degeri Negatif Bir Degerdir.",sayi);
*/
	
	
/*	
	//Soru32:Kullan�c� istedi�i s�rece yeniden �al��an basit hesap makinesi uygulamas� yaz�n�z.
	int sayi1=0, sayi2=0, sonuc=0;
	char islem, cevap;
	
	yeniden:
	
	printf("Isleminizi (+,-,/,*) seciniz: ");
	scanf("%s",&islem);
	
	printf("Islemin gerceklesecegi sayilari giriniz.\n");
	printf("1.Sayi: ");
	scanf("%d",&sayi1);
	printf("2.Sayi: ");
	scanf("%d",&sayi2);
	
	
	switch(islem)
	{
		case '+':
			sonuc=sayi1+sayi2;
			printf("Toplama Islemi Sonucunuz:%d\n",sonuc);
			break;
		case '-':
			sonuc=sayi1-sayi2;
			printf("Cikarma Islemi Sonucunuz:%d\n",sonuc);
			break;
		case '/':
			sonuc=sayi1/sayi2;
			printf("Bolme Islemi Sonucunuz:%d\n",sonuc);
			break;
		case '*':
			sonuc=sayi1*sayi2;
			printf("Carpma Islemi Sonucunuz:%d\n",sonuc);
			break;
		default:
		{
			printf("Yanlis Islem Secimi Yapt�n�z. Karakteri Kontrol Ediniz.\n\n");
			goto yeniden;
		}
	}		
	printf("Yeniden Islem Yapmak Istermisiniz?(e/h)\n");
	scanf("%s",&cevap);
	if(cevap=='e' || cevap=='E')
	{
		goto yeniden;
	}
	else
	{
		printf("Tesekkur Ederiz.");
	}	
/*
	
	//Soru33:Girilen bir say�daki rakamlar�n toplam�n� bulan program.
	//Soru34:Girilen bir sayinin �m�kemmel sayi� olup olmad���n� bulan program.
	//Soru35:Girilen bir say� asal say� ise, bundan sonraki 10 asal say�y� da listeleyen program.
	//Soru36:Kullan�c�n�n verece�i say�da ��rencinin puanlar�n� sorarak bu puanlar�n toplam�n� ve ortalamas�n� bulan program.
	//Soru37:Girilen 10 say� i�erisinde en b�y�k ve en k���k olan say�lar� bulan program.
	//Soru38:Kullan�c�n�n girdi�i 5 say�y� k���kten b�y��e do�ru s�ralay�p listeleyen program
	//Soru39:10 tane say�n�n �ift, tek ve asal olanlar�n� ayr� ayr� listeleyen program.
	//Soru40:Bir dizi i�erisinde verilen say�lar aras�ndan aranan bir say�y� bulan program.
	//Soru41:5 ��rencinin boylar�n� ve kilolar�n� sorarak boy ve kilo ortalamas�n� bulan program.
	//Soru42:Kullan�c�n�n girece�i 5 say�y� kullan�c�n�n istedi�i d�zende s�ralay�p ekrana listeleyen program.
	//Soru43:Girilen say�n�n hangi aral�kta oldu�unu binary arama metodu ile bulan program.
	//Soru44:3*3'l�k bir matrisin degerlerini kullan�c�ya soran ve matrisi ekrana yazd�ran program.
	//Soru45:3*3'l�k bir matrisin de�erlerini kullan�c�ya  soran ve matrisin ekrana yazd�ran program.

	return 0;
}
