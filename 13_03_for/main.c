#include <stdio.h>
#include <stdlib.h>


int main() {

/*
	//1.Soru
	//1-50 aras�nda 5'e tam b�l�nen say�lar� listeleyen program.
	
	int i;
	for(i=1;i<=50;i++)
	{
		if(i%5==0)
		{
			printf("%d sayisi 5'e tam bolunur. \n",i);
		}
		else
		{
			printf("%d sayisi tam olarak bolunmez. \n",i);
		}		
	}
	
*/

	//2.Soru
	//3 Basamakl� say�y� basamaklar�na ay�ran program� kodlay�n.
	int sayi;
	printf("Sayiyi Giriniz: ");
	scanf("%d",&sayi);
	
	int birler,onlar,yuzler;
	yuzler=sayi/100;
	printf("%d \n",yuzler);
	
	onlar=sayi/10;
	onlar=onlar%10;
	printf("%d \n",onlar);
	
	birler=sayi%10;
	printf("%d \n",birler);
	
	return 0;
}
