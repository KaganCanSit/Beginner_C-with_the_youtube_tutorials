#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//Matematik Fonksiyonlar� - SQRT Kullan�m�
	
	//Klavyeden girilen say�n�n karek�k�n� alan prg. yaz�n�z.
	
	int sayi=0;
	double sonuc;
	
	printf("Sayiyi Girin: ");
	scanf("%d",&sayi);
	
	sonuc=sqrt(sayi);
	printf("%.4f",sonuc);
	
	return 0;
}
