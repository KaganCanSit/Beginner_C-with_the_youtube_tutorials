#include <stdio.h>
#include <stdlib.h>

int main() {


	//degisken=veriable
	//*degisken �n�nde y�ld�z varsa bir pointer g�sterici oldu�unu prg. bildirilir.
	
	int sayi=20;
	//sayi de�i�kenin bellek adresini s de tutuyoruz.
	int *s=&sayi;
	
	//�lk olarak say�y� sonra bellek adresini yazd�raca��z.
	printf("Sayi Degeri:%d \n",sayi);
	printf("Adres:%x \n",s);

	printf("\n\n--------------------------- \n\n");

	char harf='a';
	char *h=&harf;
	
	printf("Harfiniz:%c \n",harf);
	printf("Bellek Adresi:%x \n",h);
	
	return 0;
}
