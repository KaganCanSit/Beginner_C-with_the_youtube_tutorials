#include <stdio.h>
#include <stdlib.h>



int main() {
	
	//De�i�kenler  
	
	/*
		Se�ilebilecek Y�ntemin �nemi - Olay �le Ba��nt�s� = Mantar Pano ��nesi - Raptiye - Uhu - Prit - S�k��t�rma hangi y�ntem en h�zl� ve do�ru
		
		De�i�ken �rnekleri= string, int, double, float, char, long, short
		De�i�kenler farkl� veri tipleri i�in kullan�l�r. �rnek vermek gerekirse yaz�,say�,ondal�kl� say� vb. gibi
	*/
	
/*	
	//�rnek olarak d��ar�dan herhangi bir girdi almadan de�erleri yazd�rmak i�in kulland���m�z kod.
	//[de�er] --> Bar�nd�rabilece�i karakter say�s�n� belirtir.
	
	char kitapadi[20]="Mufettis";
	char kitapyazar[10]="Gogol";
	
	printf("%s\n",kitapadi);
	printf("%s",kitapyazar);
	
*/

/*
	//�rne�in bu k�s�mda ��kt�. Sadece 10 karakterlik yer verdigimiz icin "Tiyatro Ki" olacakt�r.
	char kitaptur[10]="Tiyatro Kitab�";
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
