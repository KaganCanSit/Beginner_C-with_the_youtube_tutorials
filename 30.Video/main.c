#include <stdio.h>
#include <stdlib.h>


int main() {
	
	/*
	Soru1: Bir havayolu �irketi yolcular� i�in bagaj s�n�rlamas� uygulayacakt�r. Her yolcunun el i�in 8, normal i�in 15kg bagaj ta��ma hakk� bulunmaktad�r. E�er yolcular el
	haklar�n� ge�erse kg ba��na 4tl, normal haklar�n� ge�erse kg ba��na 5tl �deme yapmak durumundad�r. Buna g�re klavyeden el ve normal bagajlar�n�n a��rl���n� giren yocular�n
	�demesi gereken bagaj �creti ne kadard�r, c dili ile hesaplay�n? 
	Haklar�ndan az girmeleri durumunda masraf� 0 olarak nitelendiriniz.
	*/

/*	
	int elkg=0, bagajkg=0, eltutar=0, bagajtutar=0, toplam=0;
	
	printf("El Ile Tasicaginiz Yukun Agirligini Giriniz(kg): \n");
	scanf("%d",&elkg);	
	printf("Bagajda Tasicaginiz Yukun Agirligini Giriniz(kg): \n");
	scanf("%d",&bagajkg);
	
	if(elkg<=8 && bagajkg<=15)
	{
		printf("Bagaj Haklar�n�z Dolmam��t�r. Ek Tutar Odemiyeceksiniz. Keyifli Yolculuklar Dileriz... \n");
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
	//Soru2:Klavyeden birbirinden farkl� 2 say� girilmesini sa�layan ve bu iki say� aras�ndaki(bu iki say� dahil) tamsay�lar�n toplam�n� hesaplay�p ekrana yazd�ran prg yaz�n�z.
	

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
	Soru3:Heybeliada'da bulunan yaz�l�m evi otelinde k�� mevsiminden 320 ki�i kalm��t�r. �lkbahar da k�� mevsiminin d�rtte biri, yaz mevsiminde ilkbahar�n 8 kat� ve sonbaharda
	yaz mevsinin 10 da biri kadar ki�i kald���na g�re bu otelde 1 y�l i�inde ka� ki�i kalm��t�r. C dili hesaplay�n�z.
	*/
	
/*	
	int bahar=0, yaz=0, sonbahar=0, kis=320, toplam=0;
	
	bahar=kis/4;
	yaz=bahar*8;
	sonbahar=yaz/10;
	
	toplam=bahar+yaz+sonbahar+kis;
	printf("Toplam yilda kalan kisi sayisi: %d",toplam);
*/
	
	
	//Soru4:Klaveyden girilen 3 basamakl� say�n�n rakamlar� toplam�n� bula prg. yaz�n�z.
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
