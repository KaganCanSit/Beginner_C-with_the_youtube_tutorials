#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//Matematik Fonksiyonlarý - SQRT Kullanýmý
	
	//Klavyeden girilen sayýnýn karekökünü alan prg. yazýnýz.
	
	int sayi=0;
	double sonuc;
	
	printf("Sayiyi Girin: ");
	scanf("%d",&sayi);
	
	sonuc=sqrt(sayi);
	printf("%.4f",sonuc);
	
	return 0;
}
