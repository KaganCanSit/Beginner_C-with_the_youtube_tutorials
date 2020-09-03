#include <stdio.h>
#include <stdlib.h>


	struct kitapbilgi
	{
		char kitapad[30];
		char yazarad[30];
		int fiyat;
		float puan;	
	};


int main() {
	
	struct kitapbilgi degisken={"SekerPortakali","Vasconceulos",15,7.25};
	
	printf("Kitap Ad: %s \n",degisken.kitapad);
	printf("Yazar Ad: %s \n",degisken.yazarad);
	printf("Fiyat: %d \n",degisken.fiyat);
	printf("Puani: %.2f \n",degisken.puan);
	
	
	return 0;
}
