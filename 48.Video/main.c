#include <stdio.h>
#include <stdlib.h>

	void listele()
	{
		printf("Ali Yildiz\n");
		printf("Ayse Ozturk\n");
		printf("Ahmet Cinar\n");
		printf("Hakan Kaya\n");
		printf("Mehmet Tas");		
	}

int main() {
	
	listele();	
		
	//Kendi fonksiyonumuzu oluþturmamýzýn birinci sebebi kod yükünü azaltmasý.
	//Buradaki amaç uzun bir kod içerisinde birçok alanda kullanýlacak degerleri yukarýda yer verdik.
	//Örn: Müþteri eklenmesi ve çýkaraýlmasý için tek tek yazmaktansa sadece void de düzenleriz.
		
	return 0;
}
