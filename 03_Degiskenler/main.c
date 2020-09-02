#include <stdio.h>
#include <stdlib.h>



int main() {
	
	//Değişkenler  
	
	/*
		Seçilebilecek Yöntemin Önemi - Olay İle Bağıntısı = Mantar Pano İğnesi - Raptiye - Uhu - Prit - Sıkıştırma hangi yöntem en hızlı ve doğru
		
		Değişken Örnekleri= string, int, double, float, char, long, short
		Değişkenler farklı veri tipleri için kullanılır. Örnek vermek gerekirse yazı,sayı,ondalıklı sayı vb. gibi
	*/
	
/*	
	//Örnek olarak dışarıdan herhangi bir girdi almadan değerleri yazdırmak için kullandığımız kod.
	//[değer] --> Barındırabileceği karakter sayısını belirtir.
	
	char kitapadi[20]="Mufettis";
	char kitapyazar[10]="Gogol";
	
	printf("%s\n",kitapadi);
	printf("%s",kitapyazar);
	
*/

/*
	//Örneğin bu kısımda çıktı. Sadece 10 karakterlik yer verdigimiz icin "Tiyatro Ki" olacaktır.
	char kitaptur[10]="Tiyatro Kitabı";
	printf("Kitaptur: %s",kitaptur);
*/


	char kitapad[21]="Avucunuzda ki Kelebek";
	char yazar[30]="Ahmet Serif Izgoren";
	char turu[10]="Hikaye";
	char sayfa[3]="124";
	char basimyil[4]="2001";
	
	printf("*********** Kitap Bilgileri **********\n\n");
	printf("Kitap Adi: %s  Kitap Yazari: %s\n",kitapad,yazar);
	printf("Kitap Turu:%s - Kitap Sayfa Sayisi:%s\n",turu,sayfa);
	printf("Kitap Basim Yili:%s\n\n",basimyil);
	printf("**************************************\n\n");


	return 0;
}
