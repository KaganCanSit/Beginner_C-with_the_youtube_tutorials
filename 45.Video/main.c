#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi=10;
	int sayi2=20;
	double sayi3=10.259;
	char kelime='a';
	
	printf("%d \n",sayi);
	printf("%d \n",sayi2);
	printf("%f \n",sayi3);
	printf("%c \n",kelime);
	
	printf("\n\n .:Bellek Adresleri:. \n\n");
	
	printf("%x\n",&sayi);
	printf("%x\n",&sayi2);
	printf("%x\n",&sayi3);
	printf("%x\n",&kelime);
	
	return 0;
}
