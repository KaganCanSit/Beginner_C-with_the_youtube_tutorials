#include <stdio.h>
#include <stdlib.h>

int main() {
	
/*
	int i=0, j=0, yatay=0, dikey=0;	
	
	printf("Yatay da kac yildiz olacagini giriniz: ");
	scanf("%d",&yatay);
	
	printf("Dikey de kac yildiz oldugunu giriniz: ");
	scanf("%d",&dikey);
	
	for(i=1;i<=dikey;i++)
	{
		for(j=1;j<=yatay;j++)
		{
			printf("*");
		}
		printf("\n");
	}
*/	

/*
	//Klavyeden girilen boy deðerine göre üçgen oluþturan prg. yazýnýz.
	int i=0, j=0, dikey=0;
	
	printf("Ucgenin Dikey Uzunlugunu Giriniz: ");
	scanf("%d",&dikey);
	
	for(i=1;i<=dikey;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
*/


	//Ýçi Dolu bir Eþkenar Üçgen oluþturun.
	int j,i,k,boy,l;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&boy);
	
	
	for(i=1;i<=boy;i++)
	{
		for(j=boy;j>=i;j--)
		{
			printf(" ");
		
		}
			for(k=1;k<=i;k++)
			{
				printf("*");
			}
			for(l=2;l<=i;l++)
			{
				printf("*");
			}
		printf("\n");
	}
	
	return 0;
}

	return 0;
}
