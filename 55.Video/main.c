#include <stdio.h>
#include <stdlib.h>



int main() {
	
/*
	FILE *dosya;
	dosya=fopen("C:\\Users\\Ka�an Can �it\\Desktop\\bilgi.txt","w");
	
	//putc de bulunan c'ne nereden geliyor?
	putc('a',dosya);
	putc('\n',dosya);
	putc('b',dosya);
	
	//Birinci parametre verinin kendisi ikinci parametre ise hangi de�i�kene yazd�rd���m�z.
	
	fclose(dosya);
*/
	
	//�dev: Ad,soyad,ya� ve okulunuzu birer sat�r bo�lukla metin belgesine yazd�r�n�z.
	FILE *dosya;
	dosya=fopen("C:\\Users\\Ka�an Can �it\\Desktop\\odev.txt","w");
	
	fputs("Kagan Can Sit",dosya);
	fputs("\n",dosya);
	fputs("Yas:19 \n",dosya);
	fputs("Manisa Celal Bayar Universitesi Hasan Fergi Turgutlu Teknoloji Fakultesi",dosya);
	
	fclose(dosya);
	
	return 0;
}
