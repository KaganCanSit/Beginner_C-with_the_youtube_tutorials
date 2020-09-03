#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
/*
	int sayi;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi%2==0)
	{
		printf("Sayi Cifttir");
	}
	else
	{
		printf("Sayi Tektir");
	}
*/


/*
	//Klavyeden girilen deðer 5'e tam bölünüyor mu?
	int x;
	printf("Bir sayi giriniz: ");
	scanf("%d",&x);
	
	if(x%5==0)
	{
		printf("Sayi 5'e tam bolunuyor.");	
	}	
	else
	{
		printf("Sayi 5'e tam olarak bolunmuyor.");
	}
*/


/*
	//3ve 5'e bölünen sayýlarý bulma (ve baðlacý)
	int y;
	printf("Sayiyi giriniz: ");
	scanf("%d",&y);
	
	if(y%5==0 && y%5==0)
	{
		printf("Sayi 3'e ve 5'e tam bolunuyor.");
	}
	else
	{
		printf("Sayi 3'e ve 5'e tam bolunmuyor.");
	}
*/

	
	//Klavyede girilen dereceye göre suyun durumunu yazdýran programý yazdýran program
	//0'ýn altýnda buz / 0--100 arasýnda su / 100'ün üstüne buhar
	
	int su;
	printf("Suyun Madde Durumu \n");
	printf("Suyun derecesini giriniz: ");
	scanf("%d",&su);
	
	if(su<=0)
	{
		printf("Su buz(kati) haldedir.");
	}
	if(su>0 && su<100)
	{
		printf("Su sivi haldedir.");
	}
	if(su>=100)
	{
		printf("Su buhar haldedir.");
	}
	else
	{
		printf("Hatalý giris yaptýnýz.");
	}



	//9.Haftadan Sorular
/* 
*   3 Sýnav ve bir proje notu girilen öðrenci
	ort < 50  ff
	ort 50/60 dd
	ort 60/70 cc
	ort 70/85 bb
	ort > 85  aa
	
*	Kitapçý dükkanýnda indirim
	0*15 arasýnda satýlýrsa %10
	15/30 arasýnda satýlýrsa %12
	30'dan fazla ise  %15
	kitap fiyatý sabit
*/

	
/*	
	//Örnek-1
	float s1,s2,p1,ort;
	
	printf("Birinci Sinav Notunuzu Giriniz: ");
	scanf("%f",&s1);
	
	printf("Ýkinci Sinav Notunuzu Giriniz: ");
	scanf("%f",&s2);
	
	printf("Proje notunuzu giriniz: ");
	scanf("%f",&p1);
	
	ort=(s1+s2+p1)/3;
	printf("Ortalamaniz: %f \n",ort);
	
	if(ort<=50)
	{
		printf("ff ile kaldiniz");
	}
	if(ort>50 && ort<=60)
	{
		printf("dd ile gectiniz");
	}
	if(ort>60 && ort<=70)
	{
		printf("cc ile gectiniz");
	}
	if(ort>70 && ort<=85)
	{
		printf("bb ile gectiniz");
	}
	if(ort>85)
	{
		printf("aa ile  gectiniz");
	}
	
*/

	
	int alinankitap,fiyat,satistutari,indirim1,indirim2,indirim3;
	
	printf("Almak istediginiz baský sayisi: ");
	scanf("%d",&alinankitap);
	
	fiyat=10;
	satistutari=alinankitap*10;
	
	if(alinankitap>0 && alinankitap<15)
	{
		indirim1=satistutari - (satistutari/10);
		printf("Indirimli fiyatýnýz: %d",indirim1);
	}
	if(alinankitap<=15 && alinankitap<30);
	{
		indirim2=satistutari - ((satistutari/100)*12);
		printf("Indirimli Tutariniz: %d",indirim2);
	}
	if(alinankitap<=30)
	{
		indirim3=satistutari - ((satistutari/100)*14);
		printf("Indirimli Tutariniz: %d",indirim3);
	}
	
	
		
	return 0;
}
