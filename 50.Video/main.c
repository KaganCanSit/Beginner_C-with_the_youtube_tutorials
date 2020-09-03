#include <stdio.h>
#include <stdlib.h>

/*
	//Video öncesi benim yazýmým
	//Klavyeden girilen sayýnýn kübünü bulan fonksiyon.
	int kupbul(int s1)
	{
		int kup;
		kup=s1*s1*s1;
		printf("Girmis Oldugunuz Sayi Degerinin Kubu: %d",kup);
		return 0;
	}

int main() {
	
	int sayi;
	
	printf("Kubu Alinacak Olan Sayi Degerini Giriniz: ");
	scanf("%d",&sayi);	
	
	kupbul(sayi);
	
	return 0;
}
*/

	//Video Çözümü
	//Klavyeden girilen sayýnýn kübünü bulan fonksiyon.
	
	int kupbul(int sayi)
	{
		int sonuc=sayi*sayi*sayi;
		return sonuc;
	}
	
	int main(){
		
		int  s;
		printf("Sayiyi Girin: ");
		scanf("%d",&s);
		printf("\nSonuc: %d",kupbul(s));
	
	return 0;
}
