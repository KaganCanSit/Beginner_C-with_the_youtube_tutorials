#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//�rnek Sorular Ve ��z�mler
	//1.SORU: �� basamakl� rakamlar� birbirinden farkl� ka� tane say� oldu�unu bulan prg. kodlay�n�z.
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
	//��kt�s� nedir?
	//40 - P�f nokta= a ikinci i�lemde birinci i�lemdeki de�erini al�r.
*/

/*
	//3.soru:Klavyeden girilen say�n�n tam b�lenlerini bulan prg. kodlay�n.
	
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
	
	
	//4.Soru: Klavyeden girilen say�n�n k�p�n� alan prg. yaz�n�z.
	
	int sayi=0, kupcarpim=0;
	printf("Kupunu Almak Isteginiz Sayiyi Giriniz: ");
	scanf("%d",&sayi);
	
	kupcarpim=sayi*sayi*sayi;
	printf("Sayinin Kupu: %d",kupcarpim);
	
	
	
	
	
	return 0;
	
}
