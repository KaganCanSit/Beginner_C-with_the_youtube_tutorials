#include <stdio.h>
#include <stdlib.h>



int main() {
	
/*	
	char kaynak[30]="Merhaba Balikesir";
	char kopya[30]="";
	
	//Koyna�� kopyaya g�nder. Veriyi kaynaktan al, kopyaya aktar.
	strcpy(kopya,kaynak);
	printf("%s",kopya);
*/	
	
	char nereden[30]="Merhaba Ankara";
	char nereye[30]="";
	
	//"n" kaynaktan kopyalan�cak olan verinin ka� karakter olaca��n� belirtiyor.
	strncpy(nereye,nereden,5);
	printf("%s",nereye);
	
	return 0;
}
