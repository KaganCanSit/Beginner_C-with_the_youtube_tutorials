#include <stdio.h>
#include <stdlib.h>



int main() {
	/* 
	---Odev--
	Kitap Adi
	Yazar�
	Sayfa Say�s�
	Bas�m Tarihi
	Bas�m Evi
	T�r�
	*/
	
	//Karantina, Beyza Alko�, 446 , 2016  ,�ndigo, Roman
	//�ki �ekilde ��zelim. Kullan�c�dan isteme, direk yazd�rma

/*	
	//Direk Yazd�rma
	char kitapad[9]="Karantina";
	char yazarad[10]="BeyzaAlkoc";
	char yayinev[14]="IndigoYayinevi";
	char tur[5]="Roman";
	
	int sayfa=446, basimyil=2016;
	
	printf("Kitap Adi: %s\n",kitapad);
	printf("Kitabin Yazari: %s\n",yazarad);
	printf("Kitabin Yayinevi:%s\n",yayinev);
	printf("Kitap Turu:%s\n",tur);
*/
	
	//Kullan�cadan isteyerek yazd�rma
	char kitapadi[30], yazarad[30], yayinevi[30], tur[15];
	int sayfa=0, basimyil=0;
	
	printf("Kitabin Adini Giriniz: ");
	scanf("%s",&kitapadi);
	printf("Kitabin Yazarini Giriniz: ");
	scanf("%s",&yazarad);
	printf("Kitabin Sayfa Sayisini Giriniz: ");
	scanf("%d",&sayfa);
	printf("Kitabin Yayinevini Giriniz: ");
	scanf("%s",&yayinevi);
	printf("Kitabin Basim Yilini Giriniz:");
	scanf("%d",&basimyil);
	printf("Kitabin Turunu Giriniz: ");
	scanf("%s",&tur);
	
	printf("\n\n==============================\n");
	printf("Kitabin Adi Ve Yazari: %s - %s\n", kitapadi,yazarad);
	printf("Kitabin Sayfa Sayisi: %d\n",sayfa);
	printf("Yayinevi:%s - Basim Yili:%d\n",yayinevi,basimyil);
	printf("Kitabin Turu:%s",tur);
	printf("\n==============================\n");

	
	return 0;
}
