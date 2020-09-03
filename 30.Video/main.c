#include <stdio.h>
#include <stdlib.h>


int main() {
	
	/*
	Soru1: Bir havayolu þirketi yolcularý için bagaj sýnýrlamasý uygulayacaktýr. Her yolcunun el için 8, normal için 15kg bagaj taþýma hakký bulunmaktadýr. Eðer yolcular el
	haklarýný geçerse kg baþýna 4tl, normal haklarýný geçerse kg baþýna 5tl ödeme yapmak durumundadýr. Buna göre klavyeden el ve normal bagajlarýnýn aðýrlýðýný giren yocularýn
	ödemesi gereken bagaj ücreti ne kadardýr, c dili ile hesaplayýn? 
	Haklarýndan az girmeleri durumunda masrafý 0 olarak nitelendiriniz.
	*/

/*	
	int elkg=0, bagajkg=0, eltutar=0, bagajtutar=0, toplam=0;
	
	printf("El Ile Tasicaginiz Yukun Agirligini Giriniz(kg): \n");
	scanf("%d",&elkg);	
	printf("Bagajda Tasicaginiz Yukun Agirligini Giriniz(kg): \n");
	scanf("%d",&bagajkg);
	
	if(elkg<=8 && bagajkg<=15)
	{
		printf("Bagaj Haklarýnýz Dolmamýþtýr. Ek Tutar Odemiyeceksiniz. Keyifli Yolculuklar Dileriz... \n");
	}
	else
	{
		eltutar=(elkg*4)-(8*4);
		bagajtutar=(bagajkg*5)-(15*5);
		toplam=eltutar+bagajtutar;
		printf("Fazladan Yukunuz Oldugu Icin Odeminiz Gereken Tutar: %d \n",toplam);
	}
*/



/*
	//Soru2:Klavyeden birbirinden farklý 2 sayý girilmesini saðlayan ve bu iki sayý arasýndaki(bu iki sayý dahil) tamsayýlarýn toplamýný hesaplayýp ekrana yazdýran prg yazýnýz.
	

	int sayi1=0,sayi2=0,toplam=0,i=0;
	
	yeniden:
	printf("\nIki Deger Arasindaki Sayi Degerlerini Toplamini Elde Etmek Icin Sayi Degerlerini Giriniz:  \n");
	scanf("%d %d",&sayi1,&sayi2);
	
	if(sayi1==sayi2)
	{
		printf("Degerler Birbirine Esit Olamaz.Tekrar Deneyiniz.");
		goto yeniden;
	}
	if(sayi1<sayi2)
	{
		for(i=sayi1;i<=sayi2;i++)
		{
			toplam=toplam+i;
		}
		printf("Toplam Deger: %d",toplam);
	}
	
	if(sayi1>sayi2)
	{
		for(i=sayi2;i<=sayi1;i++)
		{
			toplam=toplam+i;
		}
		printf("Toplam Deger: %d",toplam);
	}
*/


	
	/*
	Soru3:Heybeliada'da bulunan yazýlým evi otelinde kýþ mevsiminden 320 kiþi kalmýþtýr. Ýlkbahar da kýþ mevsiminin dörtte biri, yaz mevsiminde ilkbaharýn 8 katý ve sonbaharda
	yaz mevsinin 10 da biri kadar kiþi kaldýðýna göre bu otelde 1 yýl içinde kaç kiþi kalmýþtýr. C dili hesaplayýnýz.
	*/
	
/*	
	int bahar=0, yaz=0, sonbahar=0, kis=320, toplam=0;
	
	bahar=kis/4;
	yaz=bahar*8;
	sonbahar=yaz/10;
	
	toplam=bahar+yaz+sonbahar+kis;
	printf("Toplam yilda kalan kisi sayisi: %d",toplam);
*/
	
	
	//Soru4:Klaveyden girilen 3 basamaklý sayýnýn rakamlarý toplamýný bula prg. yazýnýz.
	int sayi=0, yuzler=0, onlar=0, birler=0, rakamtoplam=0;
	
	printf("3 Basamakli sayi giriniz: ");
	scanf("%d",&sayi);
	
	yuzler=sayi/100;
	onlar=(sayi/10)%10;
	birler=(sayi%100)%10;
	
	printf("Sayi Degerleri: %d %d %d \n",yuzler,onlar,birler);
	

	rakamtoplam=yuzler+onlar+birler;
	printf("Rakamlar Toplami: %d",rakamtoplam);
	
	return 0;
}
