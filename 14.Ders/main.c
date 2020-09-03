#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	
	//14.Ders - While (Þartlý Döngü) Döngüsü
/*
	Kullaným Yapýsý
	While(Þart)
	{
	Ýþlemler
	}
*/	

/*
	//For Dngüsü Ýle Yapýlýþý
	int i;
	for(i=1;i<=5;i++)
	{
		printf("Merhaba Karadeniz \n");
	}
*/

/*
	//While Döngüsü ÝLe
	int i;
	i=1;
	while(i<=5)
	{
		printf("Merhaba Ege Bolgesi");
		i++;
	}		
	//Önemli Not: i++ yazmassak sonsuza gidecektir.
*/

/*
	//Onek1
	//1 Ýle 10 arasýndaki sayýlarý listeleyen program
	int i;
	i=1;
	while(i<=10)
	{
		printf("%d. \n",i);
		i++;
	}
*/

/*
	//Ornek2
	//1 ile 20 arasýndaki çift sayýlarý listeleyen fakat 14 sayýsýný listelemeyen prg. Yazýn.
	int i;
	i=1;
	while(i<=20)
	{	
		if(i%2==0 && i!=14)
		{
			printf("Cift sayi bulundu: %d \n",i);	
		}
	i++;
	}
*/

/*
	//Ornek3
	//Girilen sayinin faktoriyelini while ile bulan kod.
	int sayi,faktoriyel;
	faktoriyel=1;
	sayi=5;
	
	while(sayi>1)
	{
		faktoriyel=faktoriyel*sayi;
		sayi--;
	}
	printf("Sonuc: %d",faktoriyel);
*/

	//Ornek4
	//Klavyeden girilen sayýnýn while ile faktoriyelini bulunuz.
	int sayi,faktoriyel;
	faktoriyel=1;
	printf("Faktoriyeli alinacak olan sayiyi giriniz: ",sayi);
	scanf("%d",&sayi);
	
	while(sayi>1)
	{
		faktoriyel=faktoriyel*sayi;
		sayi--;	
	}
	printf("Sonuc: %d", faktoriyel);
	
	return 0;
}
