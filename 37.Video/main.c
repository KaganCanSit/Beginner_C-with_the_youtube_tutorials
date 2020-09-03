#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char kitapad[40];
	printf("Mesajinizi Giriniz: ");
	scanf("%s",&kitapad);
	
	printf("Scanf Ile Yazdirma Sonucu: %s",kitapad);
	
	printf("\n");
	
	//Aþaðýdaki satýr cümle ile toplam 10 karakter olacak þekilde boþluk býraktý.
	printf("%10s",kitapad);
	
	printf("\n");
	
	//Aþaðýdaki Satir ise yazý ile toplam 20 olacak þekilde baþa boþluk ekler.(15). Yazýlan kelimenin ilk 5 karakterini yazdýrýr. 15 boþluk + 5 karakter.
	printf("%20.5s",kitapad);
	
	printf("\n");
	
	//Aþaðýdaki satirda ise saðýndaki kalan boþluklara 40'a tamamlayacak þekilde null deðer atar.
	printf("%-20s",kitapad);
	
	return 0;
}
