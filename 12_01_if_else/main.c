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
	//Klavyeden girilen de�er 5'e tam b�l�n�yor mu?
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
	//3ve 5'e b�l�nen say�lar� bulma (ve ba�lac�)
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

	
	//Klavyede girilen dereceye g�re suyun durumunu yazd�ran program� yazd�ran program
	//0'�n alt�nda buz / 0--100 aras�nda su / 100'�n �st�ne buhar
	
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
		printf("Hatal� giris yapt�n�z.");
	}



	//9.Haftadan Sorular
/* 
*   3 S�nav ve bir proje notu girilen ��renci
	ort < 50  ff
	ort 50/60 dd
	ort 60/70 cc
	ort 70/85 bb
	ort > 85  aa
	
*	Kitap�� d�kkan�nda indirim
	0*15 aras�nda sat�l�rsa %10
	15/30 aras�nda sat�l�rsa %12
	30'dan fazla ise  %15
	kitap fiyat� sabit
*/

	
/*	
	//�rnek-1
	float s1,s2,p1,ort;
	
	printf("Birinci Sinav Notunuzu Giriniz: ");
	scanf("%f",&s1);
	
	printf("�kinci Sinav Notunuzu Giriniz: ");
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
	
	printf("Almak istediginiz bask� sayisi: ");
	scanf("%d",&alinankitap);
	
	fiyat=10;
	satistutari=alinankitap*10;
	
	if(alinankitap>0 && alinankitap<15)
	{
		indirim1=satistutari - (satistutari/10);
		printf("Indirimli fiyat�n�z: %d",indirim1);
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
