#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//18.Ders
	//Dizileri listeleme ve döngülerde kullanmak, toplama vb. iþlemler


/*	
	int sayilar[] = {159,456,79,83,147,681,43};
	
	//Uzun yol tek tek yazmak
	//printf("%d",sayilar[2]);
	
	int i=0;
	for(i=0;i<7;i++)
	{
		printf("%d \n",sayilar[i]);
	}	
*/	

	int sayilar[5]={12,18,36,14,20};
	int toplam=0;
	int i=0;
	
	for(i=0;i<5;i++)
	{
		toplam=toplam+sayilar[i];
	}
	printf("Toplam: %d",toplam);
	return 0;
}
