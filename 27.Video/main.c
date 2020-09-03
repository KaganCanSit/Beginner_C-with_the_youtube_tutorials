#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//Örnek Sorular Ve Çözümler
	//1.SORU: Üç basamaklý rakamlarý birbirinden farklý kaç tane sayý olduðunu bulan prg. kodlayýnýz.
/*	
	int sayac=0;
	int i;
	int a,b,c;
	
	for(i=100;i<1000;i++)
	{
		a=i/100;
		b=(i/10)%10;
		c=i%10;
		if(a!=b && a!=c && b!=c)
		{
			sayac++;
		}
	}
	
	printf("3 basamakli rakamlari birbirinden farkli %d sayi vardir.",sayac);
*/

/*	
	//Soru2
	int a=5,b=4,c=1,i;
	
	a=b*a+c-4;
	b=c*a+2;
	
	for(i=0;i<3;i++)
	{
		c=c+1;
	}
	
	int toplam=a+b+c;
	printf("%d",toplam);
	//Çýktýsý nedir?
	//40 - Püf nokta= a ikinci iþlemde birinci iþlemdeki deðerini alýr.
*/

/*
	//3.soru:Klavyeden girilen sayýnýn tam bölenlerini bulan prg. kodlayýn.
	
	int sayi=0;
	
	printf("Tam bolenleri bulunacak olan sayiyi giriniz: ");
	scanf("%d",&sayi);
	
	
	int i=0;
	
	for(i=1;i<10;i++)
	{
		if(sayi%i==0)
		{
			printf("Sayi %d degerine tam bolunur. \n",i);	
		}	
	}
*/
	
	
	//4.Soru: Klavyeden girilen sayýnýn küpünü alan prg. yazýnýz.
	
	int sayi=0, kupcarpim=0;
	printf("Kupunu Almak Isteginiz Sayiyi Giriniz: ");
	scanf("%d",&sayi);
	
	kupcarpim=sayi*sayi*sayi;
	printf("Sayinin Kupu: %d",kupcarpim);
	
	
	
	
	
	return 0;
	
}
