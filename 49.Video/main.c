#include <stdio.h>
#include <stdlib.h>


	int toplam(int s1,int s2)
	{
		int sonuc;
		sonuc=s1+s2;
		return sonuc;
	}
	
//Toplama i�lemi i�erisinde toplanacak olan iki de�eri tan�mlad�k. Ve sonucu yan�nda ekledik.

int main() {
	
	int t;
	t=toplam(4,2);
	printf("%d \n",t);
	
	//Yazd���m�z fonksiyonda s1 ve s2 k�s�mlar� i�in de�er verdik. Bu sayede i�lemi direk fonksiyon �zerinden yapt�rd�k.
	//Birden fazla i�lemde ise tek tek de�er hesab� yapmak yerine fonk �stteki iki sat�r� yazar�z.
	
	t=toplam(4,42);
	printf("%d",t);

	return 0;

}
