#include <stdio.h>
#include <stdlib.h>



int main() {
	
/*	
	char kaynak[30]="Merhaba Balikesir";
	char kopya[30]="";
	
	//Koynaðý kopyaya gönder. Veriyi kaynaktan al, kopyaya aktar.
	strcpy(kopya,kaynak);
	printf("%s",kopya);
*/	
	
	char nereden[30]="Merhaba Ankara";
	char nereye[30]="";
	
	//"n" kaynaktan kopyalanýcak olan verinin kaç karakter olacaðýný belirtiyor.
	strncpy(nereye,nereden,5);
	printf("%s",nereye);
	
	return 0;
}
