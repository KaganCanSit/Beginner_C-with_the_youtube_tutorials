#include <stdio.h>
#include <stdlib.h>



int main() {
	
	FILE *ders;
	char karakter;
	ders=fopen("C:\\Users\\Ka�an Can �it\\Desktop\\ders.txt","r");
	//r=read
	
	do
	{
	karakter=getc(ders);
	
	printf("%c",karakter);
	}
	while(karakter!=EOF);
	//E�er karakter dosya sonuna gelene kadar karakter almaya devam et.
	
	fclose(ders);
	
	
	return 0;
}
