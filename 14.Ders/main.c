#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	
	//14.Ders - While (�artl� D�ng�) D�ng�s�
/*
	Kullan�m Yap�s�
	While(�art)
	{
	��lemler
	}
*/	

/*
	//For Dng�s� �le Yap�l���
	int i;
	for(i=1;i<=5;i++)
	{
		printf("Merhaba Karadeniz \n");
	}
*/

/*
	//While D�ng�s� �Le
	int i;
	i=1;
	while(i<=5)
	{
		printf("Merhaba Ege Bolgesi");
		i++;
	}		
	//�nemli Not: i++ yazmassak sonsuza gidecektir.
*/

/*
	//Onek1
	//1 �le 10 aras�ndaki say�lar� listeleyen program
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
	//1 ile 20 aras�ndaki �ift say�lar� listeleyen fakat 14 say�s�n� listelemeyen prg. Yaz�n.
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
	//Klavyeden girilen say�n�n while ile faktoriyelini bulunuz.
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
