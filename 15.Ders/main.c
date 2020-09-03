#include <stdio.h>
#include <stdlib.h>

int main() {

/*	
	//Switch Case
	int aynum;
	printf("Ay numarasi giriniz: ");
	scanf("%d",&aynum);
	
	switch(aynum)
	{
		case 1: printf("Ocak Ayi"); 	break;
		case 2:	printf("Subat Ayi");	break;
		case 3:	printf("Mart Ayi");		break;
		case 4: printf("Nisan Ayi");	break;
		case 5: printf("Mayis Ayi");	break;
		case 6:	printf("Haziran Ayi");	break;
		case 7: printf("Temmuz Ayi");	break;
		case 8: printf("Agustos Ayi");	break;
		case 9: printf("Eylul Ayi");	break;
		case 10:printf("Ekim Ayi");		break;
		case 11:printf("Kasim Ayi");	break;
		case 12:printf("Aralik Ayi");	break;
		default: printf("Hatali Sayi Girisi"); break;
	}	
	
	//Onemli Not: break komutu ile case'ler sonlandýrýlmazsa alltakileri de üst  case ile birlikte yazar.
	//Case 1 break yaptýðýmýzda durum 1 gerçekleþir ve gidiþat kýrýlarak, döngüden çýkýlýr.	

*/

/*
	//Ornek1
	//t --> Türkçe m --> Matematik s --> Sosyal Bilgiler f -->Fen Bilgisi
	//Harfleri girildiðinde ders çýktýlarýný giren ve yanlýþ deðerde hatalý giriþ yazan prg. yazýnýz.
	
	char basharf;
	printf("Ders Secmek Icin Dersin Bas Harfini Giriniz.(Turkce, Matematik, Sosyal Bil., Fen Bilgisi)\n");
	printf("Onemli Hatýrlatma - Bas Harfleri Lutfen Kucuk  Giriniz");
	printf("Dersin Bas Harfini Giriniz: ");
	scanf("%s",&basharf);
	
	switch(basharf)
	{
		case 't': printf("Secilen Ders Turkce"); break;
		case 'm': printf("Secilen Ders Matematik"); break;
		case 's': printf("Secilen Ders Sosyal Bilgiler"); break;
		case 'f': printf("Secilen Ders Fen Bilgisi"); break;
		default: printf("Yanlis Harf Girdiniz."); break;
	}
*/	

	
	//Odev
	//Haftanýn günlerini veren program(swicth case)
	
	int gun;
	printf("Gunleri secmek icin 1-7 arasinda sayi giriniz.\n");	
	printf("Sayi giriniz: ");
	scanf("%d",&gun);
	
	switch(gun)
	{
		case 1: printf("Pazartesi"); break;
		case 2: printf("Sali"); 	 break;
		case 3: printf("Carsamba");	 break;
		case 4: printf("Persembe");	 break;
		case 5: printf("Cuma");		 break;
		case 6: printf("Cumartesi"); break;
		case 7: printf("Pazar");	 break;
	}
	
	
	
	
	
	
	return 0;
}
