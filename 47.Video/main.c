#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//G�sterici de�erine dair matematiksel i�lemler vb.
	
	char harf='k';
	char *pt=&harf;
	
	printf("Adres:%c \n",harf);
	printf("Sayi Degeri:%x \n",pt);
	
	//Ramdaki de�eri �u an �rnek olarak 62fe17
	//Artt�rd���m�zda ise
	
	pt++;
	printf("Yeni Sayi Degeri:%x \n",pt);
	//62fe18
	
	pt--;
	printf("2.Yeni Sayi Degeri:%x \n",pt);
	//62fe17 
	
	pt=pt+5;
	printf("3.Yeni Sayi Degeri:%x \n",pt);
	
	//Sayi Degeri= Adresleri
	
	
	
	return 0;
}
