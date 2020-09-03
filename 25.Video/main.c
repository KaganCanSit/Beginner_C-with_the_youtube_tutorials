#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int satir=0,sutun=0,x,y;
	
	//Dýþarýdan deðerleri alýyoruz.
	printf("Matris'in satir degerini giriniz: ");
	scanf("%d",&satir);
	printf("Matris'in sutun degerinin giriniz: ");
	scanf("%d",&sutun);
	
	int matris[satir][sutun];

	for(x=0;x<satir;x++)
	{
		for(y=0;y<sutun;y++)
		{
			printf("\n[%d][%d] ",y+1,x+1);
			scanf("%d",&matris[y][x]);
		}		
	}
	
	for(x=0;x<satir;x++)
	{
		for(y=0;y<sutun;y++)
		{
			printf(" %d ",matris[y][x]);
		}
		printf("\n");
	}
	
	return 0;
}
