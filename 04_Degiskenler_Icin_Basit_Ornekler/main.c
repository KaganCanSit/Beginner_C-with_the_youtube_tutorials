#include <stdio.h>
#include <stdlib.h>


int main() {
	
	/* Hatýrlatma
	char kitapadi[20]="Mufettis";
	printf("Kitap Adi:%s ",kitapadi);
	*/
	
	/*
	scanf -->
	Dýþarýdan veri almak amacýyla kullanýlýr.
	Fakat boslugu kabul etmez. 			
	Orn: Merhaba Dunya yazýmýnda sadece ilk yazýlmýþ Merhaba kelimesini alýr.
	*/
	
	
	
	
	char kitapadi[30];
	printf("Eklemek Istediginiz Kitad Adini Birlesik Olarak Yaziniz: \n");
	scanf("%s",&kitapadi);
		//& Gemici düðümü, Ampersant iþareti kullanýcýdan veri alýrken kullanýlýr.	
	printf("Girmis Oldugunuz Kitap Adi:%s",kitapadi);
	
	/*
	Yukarýdaki kodda ilk olarak char ile birr karakter metni ve büyüklüðünü tanýmladýk.
	Daha sonra kullanýcýdan bir veri girmesini istedik.
	Scanf yardýmý girilen veriyi alarak printf komutu ile ekrana yazdýrdýk.
	*/
	
	return 0;
}
