#include <stdio.h>
#include <stdlib.h>

int main() {
/*	
	//m=matris 
	//[2][2] > boyutu
	
	int m1[2][2]={10,12,15,18};
	int m2[2][2]={8,11,14,6};
	int mtoplam[2][2];
	
	//printf("%d",m1[0][0]);
	
	int i,j,k,l;

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			mtoplam[i][j]=m1[i][j]+m2[i][j];
		}
	}
	
	//Yazdýrma Komutu
	for(k=0;k<2;k++)
	{
		for(l=0;l<2;l++)
		{
			printf("%d ",mtoplam[k][l]);
		}
		printf("\n");
	}
*/

	//Odev: [2][3] tipinde iki matrisin deðerlerini dýþarýdan alan ve toplayan prg. yazýnýz.
	
	int matris1[2][3], matris2[2][3];

	printf("2/3 Alanli Iki Adet Matrisin Degerlerini Giriniz\n");

	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n 1.Matris'in Degerini Giriniz:");
			scanf("%d",&matris1[i][j]);
			
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n 2.Matris'in Degerini Giriniz:");
			scanf("%d",&matris2[i][j]);
			
		}
	}
	
	int toplam[2][3];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			toplam[i][j]=matris1[i][j]+matris2[i][j];		
		}
	}
	
	
	printf("Matrisler Toplami \n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",toplam[i][j]);	
		}
		printf("\n");
	}
	
	return 0;
}
