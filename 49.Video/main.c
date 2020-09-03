#include <stdio.h>
#include <stdlib.h>


	int toplam(int s1,int s2)
	{
		int sonuc;
		sonuc=s1+s2;
		return sonuc;
	}
	
//Toplama iþlemi içerisinde toplanacak olan iki deðeri tanýmladýk. Ve sonucu yanýnda ekledik.

int main() {
	
	int t;
	t=toplam(4,2);
	printf("%d \n",t);
	
	//Yazdýðýmýz fonksiyonda s1 ve s2 kýsýmlarý için deðer verdik. Bu sayede iþlemi direk fonksiyon üzerinden yaptýrdýk.
	//Birden fazla iþlemde ise tek tek deðer hesabý yapmak yerine fonk üstteki iki satýrý yazarýz.
	
	t=toplam(4,42);
	printf("%d",t);

	return 0;

}
