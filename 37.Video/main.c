#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char kitapad[40];
	printf("Mesajinizi Giriniz: ");
	scanf("%s",&kitapad);
	
	printf("Scanf Ile Yazdirma Sonucu: %s",kitapad);
	
	printf("\n");
	
	//A�a��daki sat�r c�mle ile toplam 10 karakter olacak �ekilde bo�luk b�rakt�.
	printf("%10s",kitapad);
	
	printf("\n");
	
	//A�a��daki Satir ise yaz� ile toplam 20 olacak �ekilde ba�a bo�luk ekler.(15). Yaz�lan kelimenin ilk 5 karakterini yazd�r�r. 15 bo�luk + 5 karakter.
	printf("%20.5s",kitapad);
	
	printf("\n");
	
	//A�a��daki satirda ise sa��ndaki kalan bo�luklara 40'a tamamlayacak �ekilde null de�er atar.
	printf("%-20s",kitapad);
	
	return 0;
}
