#include <stdio.h>
#include <stdlib.h>



int main() {
	//fgets --> Toplu Okuma
	//fputs --> Toplu Yazma
	
	FILE *ders;
	char karakter[50];
	
	ders=fopen("C:\\Users\\Ka�an Can �it\\Desktop\\ders.txt","r");
	
	//A�a��daki tan�mda 2 al�nacak olan karakter say��s�n� belirtir.
	//Fakat alt sat�ra ge�i� yapmaz.
	fgets(karakter,50,ders),
	puts(karakter);
	fclose(ders);
	
	return 0;
}
