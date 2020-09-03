#include <stdio.h>
#include <stdlib.h>



int main() {
	
	FILE *ders;
	char karakter;
	ders=fopen("C:\\Users\\Kaðan Can Þit\\Desktop\\ders.txt","r");
	//r=read
	
	do
	{
	karakter=getc(ders);
	
	printf("%c",karakter);
	}
	while(karakter!=EOF);
	//Eðer karakter dosya sonuna gelene kadar karakter almaya devam et.
	
	fclose(ders);
	
	
	return 0;
}
