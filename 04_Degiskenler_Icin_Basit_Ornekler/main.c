#include <stdio.h>
#include <stdlib.h>


int main() {
	
	/* Hat�rlatma
	char kitapadi[20]="Mufettis";
	printf("Kitap Adi:%s ",kitapadi);
	*/
	
	/*
	scanf -->
	D��ar�dan veri almak amac�yla kullan�l�r.
	Fakat boslugu kabul etmez. 			
	Orn: Merhaba Dunya yaz�m�nda sadece ilk yaz�lm�� Merhaba kelimesini al�r.
	*/
	
	
	
	
	char kitapadi[30];
	printf("Eklemek Istediginiz Kitad Adini Birlesik Olarak Yaziniz: \n");
	scanf("%s",&kitapadi);
		//& Gemici d���m�, Ampersant i�areti kullan�c�dan veri al�rken kullan�l�r.	
	printf("Girmis Oldugunuz Kitap Adi:%s",kitapadi);
	
	/*
	Yukar�daki kodda ilk olarak char ile birr karakter metni ve b�y�kl���n� tan�mlad�k.
	Daha sonra kullan�c�dan bir veri girmesini istedik.
	Scanf yard�m� girilen veriyi alarak printf komutu ile ekrana yazd�rd�k.
	*/
	
	return 0;
}
