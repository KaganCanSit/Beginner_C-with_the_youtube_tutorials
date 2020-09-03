#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int sayi1=0,sayi2=0, sonuc=0;
	
	printf("Birinci Sayiyi Giriniz: ");
	scanf("%d",&sayi1);
	
	printf("Ikinci Sayiyi Giriniz: ");
	scanf("%d",&sayi2);
	
	sonuc=pow(sayi1,sayi2);
	printf("Sonuc: %d",sonuc);
	
	return 0;
}
