#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//Gösterici deðerine dair matematiksel iþlemler vb.
	
	char harf='k';
	char *pt=&harf;
	
	printf("Adres:%c \n",harf);
	printf("Sayi Degeri:%x \n",pt);
	
	//Ramdaki deðeri þu an örnek olarak 62fe17
	//Arttýrdýðýmýzda ise
	
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
