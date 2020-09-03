#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	double derece=0,sonucsin=0,sonuccos=0;
	
	printf("Derece Degerini Giriniz: ");
	scanf("%lf",&derece);
	
	sonucsin=sin(derece);
	printf("Sinus:%.7lf \n",sonucsin);
	
	sonuccos=cos(derece);
	printf("Cosinus:%.7lf \n",sonuccos);
	
	
	return 0;
}
