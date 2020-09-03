#include <stdio.h>
#include <stdlib.h>

int main() {


	//degisken=veriable
	//*degisken önünde yýldýz varsa bir pointer gösterici olduðunu prg. bildirilir.
	
	int sayi=20;
	//sayi deðiþkenin bellek adresini s de tutuyoruz.
	int *s=&sayi;
	
	//Ýlk olarak sayýyý sonra bellek adresini yazdýracaðýz.
	printf("Sayi Degeri:%d \n",sayi);
	printf("Adres:%x \n",s);

	printf("\n\n--------------------------- \n\n");

	char harf='a';
	char *h=&harf;
	
	printf("Harfiniz:%c \n",harf);
	printf("Bellek Adresi:%x \n",h);
	
	return 0;
}
