#include <stdio.h>
#include <stdlib.h>



int main() {
	
	//"metinbelgesi adý ile dosya tanýmladýk"
	FILE *metinbelgesi;
	
	//Ýçeriklerin hangi tipte ve boyutta olduðunun yaný sýra içeriðini tanýmladýk.
	char veri1[30]="Yazilim ";
	char veri2[30]="Muhendisligi ";
	char veri3[30]="Bolumu ";
	
	//metinbelgesi deðikenini hangi konumda hangi isimle yer alacaðýný belirledik. 
	//Ýþlem olarak ise "w"(write-yazdýr) ile yazdýrýlacaðýný belirttik.
	metinbelgesi=fopen("C:\\Users\\Kaðan Can Þit\\Desktop\\Ders2.txt","w");
	
	//Çýktý olarak tanýmladýðýmýz deðiþkenleri dosya içerisine çýktý olarak verdik.
	fputs(veri1,metinbelgesi);
	fputs(veri2,metinbelgesi);
	fputs(veri3,metinbelgesi);
	
	return 0;
}
