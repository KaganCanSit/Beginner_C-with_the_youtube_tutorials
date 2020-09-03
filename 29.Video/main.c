#include <stdio.h>
#include <stdlib.h>

int main() {

/*
	//Soru1: Klavyeden taban sayýsý girilen dik üçgeni yýldýz(*) sembolü ile çizdiren programý kodlayýnýz.
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
	//Soru2: 1+5+9+13+....+81 dizisinin toplamýný bulan prg. kodlayýnýz.
	
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
	Bir futbol takýmýnýn 10 haftalýk maç istatistikleri verilen dizi bulunmaktadýr. Bu dizide 2'ler galibiyetleri, 1'ler maðlubiyetleri, 0'lar ise beraberlikleri belirtmektedir.
	Bu takýmýn küme düþmemesi için 12 paun almasý gerekmektedir. Verilere göre takýmýn 10 hafta sonunda kümede kalýp kalmadýðýný puan ile yazan prg. C dilinde yazýnýz.
	
	Not: Galibiyetler 3 puan, maðlubiyetler 0 puan, beraberlikler 1 puan verilecektir. Ýþlemleri dizi kullanara yapýnýz.
	*/
	
	//Soru mantýðý 2 = 3, 1 = 0 , 0 = 1 puan verilecek.
	
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
