#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	double sayi=0, usteyuvarla=0, altayuvarla=0;
	
	printf("Degeri Girin: ");
	scanf("%lf",&sayi);
	
	altayuvarla=floor(sayi);
	printf("Alt Sayiya Yuvarla: %f",altayuvarla);
	
	printf("\n");
	
	usteyuvarla=ceil(sayi);
	printf("Ust Sayiya Yuvarla: %f",usteyuvarla);
	
	
	return 0;
}
