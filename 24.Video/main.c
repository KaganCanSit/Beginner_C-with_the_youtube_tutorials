#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int matris[2][3]={10,20,30,40,50,60};
	
	//printf("Birinci Satirin 0'inci elemani: %d \n",matris[0][0]);
	//printf("%d",matris[1][0]);	
	//Bizden istenilen üstteki iki satýr gibi deðil de döngü ile sýralý olarak yazdýrmamýz.
	
	int x=0,y=0;
	for(y=0;y<2;y++)
	{
		for(x=0;x<3;x++)
		{
			printf("%d ",matris[y][x]);	
		}
		printf("\n");
	}

	return 0;
}
