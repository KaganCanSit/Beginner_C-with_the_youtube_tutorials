#include <stdio.h>
#include <stdlib.h>

int main() {

/*
	//Soru1: Klavyeden taban say�s� girilen dik ��geni y�ld�z(*) sembol� ile �izdiren program� kodlay�n�z.
	int taban=0,yukseklik=0,j=0,i=0;
	
	printf("Ucgenin Tabaninda Bulunacak Olan Yildiz Sayisini Giriniz: ");
	scanf("%d",&taban);
	
	for(i=1;i<=taban;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
*/

/*
	//Soru2: 1+5+9+13+....+81 dizisinin toplam�n� bulan prg. kodlay�n�z.
	
	int toplam=0,i=0;

	for(i=1;i<=81;i+=4)
	{
		toplam=toplam+i;
	}
	printf("Toplam Deger: %d",toplam);
*/

	//Soru3: 
	
	//	2	1	0	0	2	1	1	2	1	0
	
	/*
	Bir futbol tak�m�n�n 10 haftal�k ma� istatistikleri verilen dizi bulunmaktad�r. Bu dizide 2'ler galibiyetleri, 1'ler ma�lubiyetleri, 0'lar ise beraberlikleri belirtmektedir.
	Bu tak�m�n k�me d��memesi i�in 12 paun almas� gerekmektedir. Verilere g�re tak�m�n 10 hafta sonunda k�mede kal�p kalmad���n� puan ile yazan prg. C dilinde yaz�n�z.
	
	Not: Galibiyetler 3 puan, ma�lubiyetler 0 puan, beraberlikler 1 puan verilecektir. ��lemleri dizi kullanara yap�n�z.
	*/
	
	//Soru mant��� 2 = 3, 1 = 0 , 0 = 1 puan verilecek.
	
	int skor[10]={2,1,0,0,2,1,1,2,1,0};
	int i=0,puan=0;
	
	for(i=0;i<10;i++)
	{
		if(skor[i]==2)
		{
			puan=puan+3;
		}
		
		if(skor[i]==0)
		{
			puan=puan+1;
		}
	}
	
	printf("Takimin %d Puana Sahiptir. Bundan Dolayi; \n",puan);
	
	if(puan<12)
	{
		printf("Takiminiz puani sebebiyle kume dusmustur.");
	}
	else
	{
		printf("Takiminiz yeterli puani nedeniyle kumede kalmaya devam edicektir.Tebrikler.");
	}
	return 0;
}
