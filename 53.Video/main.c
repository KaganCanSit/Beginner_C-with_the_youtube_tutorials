#include <stdio.h>
#include <stdlib.h>

#define maksimum(s1,s2) (s1>s2) ? s1:s2
//s1 ve s2 deðiþkenler. 2.paramatre içerisine þartlarý yazalým. ? sorgula hangisi büyükse yaz.

int main() {
	
	int sayi1=0,sayi2=0;
	printf("Karsilastirilacak Sayi Degerlerini Giriniz:\n");
	scanf("%d%d",&sayi1,&sayi2);
	
	printf("Buyuk Olan Sayi \n");
	printf("%d \n",maksimum(sayi1,sayi2));
	
	
	return 0;
}
