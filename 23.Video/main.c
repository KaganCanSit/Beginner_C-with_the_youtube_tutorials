#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//23.Ders - Çok Boyutlu Diziler
	//Dizilerin satýr ve sütunun eleman sayýsý
	//x,y = int dizi[x][y]
	//Matris de fazlaca kullanýlýyor.
	//Satranç ve dama tahtasý gibi alanlarý oluþturmak için kullanýlýyor.
	
/*	
	int dizi[2][2];
	//	A	B
	//	C	D
	
	dizi[0][0]=10;
	dizi[0][1]=20;
	dizi[1][0]=30;
	dizi[1][1]=40;
	
	printf("%Matrisin 0-0 da bulunan elemani: %d \n",dizi[0][0]);
	printf("%Matrisin 0-1 de bulunan elemani: %d \n",dizi[0][1]);
	printf("%Matrisin 1-0 da bulunan elemani: %d \n",dizi[1][0]);
	printf("%Matrisin 1-1 de bulunan elemani: %d \n",dizi[1][1]);
*/
	int dizi[3][3];
	
	dizi[0][0]=10;
	dizi[0][1]=20;
	dizi[0][2]=30;
	dizi[1][0]=40;
	dizi[1][1]=50;
	dizi[1][2]=60;
	dizi[2][0]=70;
	dizi[2][1]=80;
	dizi[2][2]=90;
	
	
	printf("%Matrisin 0-0 da bulunan elemani: %d",dizi[0][0]);
	printf("   ");
	printf("%Matrisin 0-1 de bulunan elemani: %d",dizi[0][1]);
	printf("   ");
	printf("%Matrisin 0-2 de bulunan elemani: %d",dizi[0][2]);
	printf("   \n");
	
	printf("%Matrisin 1-0 da bulunan elemani: %d",dizi[1][0]);
	printf("   ");
	printf("%Matrisin 1-1 de bulunan elemani: %d",dizi[1][1]);
	printf("   ");
	printf("%Matrisin 1-2 de bulunan elemani: %d",dizi[1][2]);
	printf("   \n");
	
	printf("%Matrisin 2-0 da bulunan elemani: %d",dizi[2][0]);
	printf("   ");
	printf("%Matrisin 2-1 de bulunan elemani: %d",dizi[2][1]);
	printf("   ");
	printf("%Matrisin 2-2 de bulunan elemani: %d",dizi[2][2]);
	printf("   \n");
	
	return 0;
}
