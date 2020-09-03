#include <stdio.h>
#include <stdlib.h>



int main() {
	
/*
	FILE *dosya;
	dosya=fopen("C:\\Users\\Kaðan Can Þit\\Desktop\\bilgi.txt","w");
	
	//putc de bulunan c'ne nereden geliyor?
	putc('a',dosya);
	putc('\n',dosya);
	putc('b',dosya);
	
	//Birinci parametre verinin kendisi ikinci parametre ise hangi deðiþkene yazdýrdýðýmýz.
	
	fclose(dosya);
*/
	
	//Ödev: Ad,soyad,yaþ ve okulunuzu birer satýr boþlukla metin belgesine yazdýrýnýz.
	FILE *dosya;
	dosya=fopen("C:\\Users\\Kaðan Can Þit\\Desktop\\odev.txt","w");
	
	fputs("Kagan Can Sit",dosya);
	fputs("\n",dosya);
	fputs("Yas:19 \n",dosya);
	fputs("Manisa Celal Bayar Universitesi Hasan Fergi Turgutlu Teknoloji Fakultesi",dosya);
	
	fclose(dosya);
	
	return 0;
}
