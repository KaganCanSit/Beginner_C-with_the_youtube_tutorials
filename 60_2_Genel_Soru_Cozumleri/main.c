#include <stdio.h>
#include <stdlib.h>


int main() {
	//Burada çözmeye çalýþtýðým sorulara "http://www.ckutuphanesi.com/tum-ornek-projeler/" adresi üzerinden ulaþabilirsiniz. Gayet yararlý ve emekle hazýrlamýþlar, emeklerine saðlýk.

/*	
	//Soru31:Kuulanýcý negatif bir sayý girene kadar kullanýcýdan sayý girmesini isteyen ve negatif sayý girildiðinde ekrana yazdýran program.
	int sayi=0;
	
	while(sayi>=0)		
	{
		printf("Sayi Degeri Giriniz: ");
		scanf("%d",&sayi);
	}
	printf("Tebrikler, dongu kirildi! %d Sayi Degeri Negatif Bir Degerdir.",sayi);
*/
	
	
/*	
	//Soru32:Kullanýcý istediði sürece yeniden çalýþan basit hesap makinesi uygulamasý yazýnýz.
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
			printf("Yanlis Islem Secimi Yaptýnýz. Karakteri Kontrol Ediniz.\n\n");
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
*/



/*	
	//Soru33:Girilen bir sayýdaki rakamlarýn toplamýný bulan program.
	int sayi=0, birler=0, toplam=0;
	
	printf("Sayi Degeri Giriniz: ");
	scanf("%d",&sayi);
	
 	while( sayi > 0 )
 	{
 		birler = sayi%10;
 		toplam = toplam + rakam;
 		sayi = sayi/10;
	}
 
 	printf("\nGirilen Degerin Rakamlari toplami %i",toplam);
*/	



/*
	//Soru34:Girilen bir sayinin “mükemmel sayi” olup olmadýðýný bulan program.

	//MÜKEMMEL SAYI NEDÝR? 
	//Kendisi hariç bütün pozitif bölenlerinin toplamý kendisine eþit olan sayýlara mükemmel sayý denir. 6 bir mükemmel sayýdýr. 
	//Çünkü 6'nýn pozitif bölenleri 1,2,3 ve 6'dýr. Kendisi hariç diðer bölenlerini toplarsak 1+2+3=6 eder.
	//Kaynak : http://www.bilimist.com/blog-41/mukemmel-sayilar-nedir-.html

	int sayi=0, i=0, toplam=0;
	
	printf("\n==========Mukemmel Sayi Kontrolu==========\n");
	
	printf("Kontrol Edilecek Olan Sayi Degerini Giriniz: \n"),
	scanf("%d",&sayi);
	
	for(i=1;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			toplam=toplam+i;
		}
	}
	if(sayi==toplam)
	{
		printf("Sayi Mukemmel Sayidir.");
	}
	else
	{
		printf("Sayi Mukemmel Sayi Degildir.");
	}
*/	
	
	//Soru35:Girilen bir sayý asal sayý ise, bundan sonraki 10 asal sayýyý da listeleyen program.
	int i=0, sayi=0, sayac=0;
	
	printf("Sayi Degerini Giriniz: ");
	scanf("%d",&sayi);
	
	for(i=2;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			sayac++;
		}
	}
	if(sayac==0)
	{
		printf("Sayi Asaldir.");
	}
	else
	{
		printf("Sayi Asal Degildir.");
	}
	
	//Soru36:Kullanýcýnýn vereceði sayýda öðrencinin puanlarýný sorarak bu puanlarýn toplamýný ve ortalamasýný bulan program.
	//Soru37:Girilen 10 sayý içerisinde en büyük ve en küçük olan sayýlarý bulan program.
	//Soru38:Kullanýcýnýn girdiði 5 sayýyý küçükten büyüðe doðru sýralayýp listeleyen program
	//Soru39:10 tane sayýnýn çift, tek ve asal olanlarýný ayrý ayrý listeleyen program.
	//Soru40:Bir dizi içerisinde verilen sayýlar arasýndan aranan bir sayýyý bulan program.
	//Soru41:5 öðrencinin boylarýný ve kilolarýný sorarak boy ve kilo ortalamasýný bulan program.
	//Soru42:Kullanýcýnýn gireceði 5 sayýyý kullanýcýnýn istediði düzende sýralayýp ekrana listeleyen program.
	//Soru43:Girilen sayýnýn hangi aralýkta olduðunu binary arama metodu ile bulan program.
	//Soru44:3*3'lük bir matrisin degerlerini kullanýcýya soran ve matrisi ekrana yazdýran program.
	//Soru45:3*3'lük bir matrisin deðerlerini kullanýcýya  soran ve matrisin ekrana yazdýran program.

	return 0;
}
