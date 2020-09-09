#include <stdio.h>
#include <stdlib.h>



int main() {
/*	
	//Soru46:Kullan�c�n�n de�erlerini verece�i 4*4'l�k bir matrisi ve transposesini ekrana yazd�ran program.
	
	//Transpoze: �arpzlama int[3][2] ==>> int [2][3]
	//Transpoze �rnek: https://www.youtube.com/watch?v=kLbieVyn41o
	
	int dizi[4][4], i=0, j=0;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d - %d: Dizi Degerini Giriniz:",i,j);
			scanf("%d",&dizi[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n=====================\n\n");
	printf("Normal Dizi\n");	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\t %d ",dizi[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n=====================\n\n");
	printf("Transpoze Dizi\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\t %d ",dizi[j][i]);
		}
		printf("\n");
	}
*/
	
	
	
	
	//Soru47: Girilen matrisin simetrik olup olmad���n� kontrol eden program.
	
	//i=satir - j=sut�n
	int matris[3][3], i=0, j=0;
	int kontrolsimetrik=0;
				
				
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d - %d Matris Degerini Giriniz: ",i,j);
			scanf("%d",&matris[i][j]);
		}
		printf("\n");
	}
	
	kontrolsimetrik=1;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i!=j)
			{
				if(matris[i][j] != matris[j][i])
				{
					//Matris 0/0 - 0/1 �zerinden s�ral� ilerlerken 0/1 degerine kar��l�k 1/0 de�eri de e� say�y� matris i�erisinde bar�nd�r�yorsa matris simetriktir.
					kontrolsimetrik=0;
					break;	
				}
			}
		}
	}
	
	
	if(kontrolsimetrik==1)
	{
		printf("Matris Degeriniz Simetriktir.");
	}
	else
	{
		printf("Matris Degeriniz Simetrik Degildir.");
	}
	
	return 0;
}
