#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {

/*	
	double sayi=0, sonuc=0;
	printf("Mutlak Degeri Alinacak Olan Degeri Giriniz:");
	scanf("%lf",&sayi);
	sonuc=fabs(sayi);
	printf("Sonuc: %.lf",sonuc);
*/

	double sayi=0,sonuc=0,sonuc2=0;
	printf("Mutlak Degeri Alinacak Olan Degeri Giriniz:");
	scanf("%lf",&sayi);
	sonuc=fabs(sayi);
	printf("Sonuc: %.lf",sonuc);
	
	sonuc2=log(sayi);
	printf("Sonuc Logaritma: %.4lf",sonuc2);
	
	return 0;
}
