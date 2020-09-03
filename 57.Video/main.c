#include <stdio.h>
#include <stdlib.h>



int main() {
	//fgets --> Toplu Okuma
	//fputs --> Toplu Yazma
	
	FILE *ders;
	char karakter[50];
	
	ders=fopen("C:\\Users\\Kağan Can Şit\\Desktop\\ders.txt","r");
	
	//Ağaşıdaki tanımda 2 alınacak olan karakter sayıısını belirtir.
	//Fakat alt satıra geçiş yapmaz.
	fgets(karakter,50,ders),
	puts(karakter);
	fclose(ders);
	
	return 0;
}
