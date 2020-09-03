#include <stdio.h>
#include <stdlib.h>


int main() {

/*	
	char kelime[300];
	printf("Kelimenizi Girin: ");
	scanf("%s",kelime);
	printf("Katar Uzunlugu: %d",strlen(kelime));
*/

	char metin[250];
	printf("Kisa metninizi giriniz: ");
	gets(metin);
	printf("\n\n");
	puts(metin);
	printf("Katar Uzunlugu: %d",strlen(metin));
	
	return 0;
}
