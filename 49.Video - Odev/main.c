#include <stdio.h>
#include <stdlib.h>

//Klavyeden girilen iki sayýyý toplayan ve yazan fonkisyon olarak c  prog. kodunu yazýnýz.

	int toplama()
	{
		int sayi1,sayi2;
		
		printf("Toplanacak olan ilk sayiyi giriniz: ");
		scanf("%d",&sayi1);
		printf("Toplanacak olan ikinci sayiyi giriniz: ");
		scanf("%d",&sayi2);
		
		int sonuc;
		sonuc=sayi1+sayi2;
		
		printf("Toplama Sonucu: %d",sonuc);
		
		return sonuc;
	}
int main() {
	
	toplama();
	
	return 0;
}
