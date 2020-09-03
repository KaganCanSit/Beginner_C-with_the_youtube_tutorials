#include <stdio.h>
#include <stdlib.h>
/*
	//Klavyeden girmiþ old. en ve boy degerine göre içi dolu dikdörtgen çizen prg yazýnýz.
	void dikdortgen(int kisa, int uzun)
	{
		int i,j;
		for(i=0;i<kisa;i++)
		{
			//Bariz tekrarlý hata ikinci döngüye i deðiþkenini tekrar atama. Deðer Deðiþiyor.
			for(j=0;j<uzun;j++)
			{					
				printf("*");
			}
			printf("\n");
		}
	}

int main() {
	
	int s1,s2;
	
	printf("Dikdortgenin Kisa Kenarini Giriniz: ");
	scanf("%d",&s1);
	printf("Dikdortgenin Uzun Kenarini Giriniz: ");
	scanf("%d",&s2); 
	
	dikdortgen(s1,s2);
	
	return 0;
}
*/



//ALINTI KOD ÝNCELE

// Ýçi boþ kare yapmak
# include<stdio.h>
# include<conio.h>
int main(){
	int m,n,space,i,j,k;
	printf("Satir degerini giriniz ");
	scanf("%d",&m);
	printf("Sutun degerini giriniz ");
	scanf("%d",&n);
	
	space=(n-2)*2+1;
	
		//Üst Sütun
		for (i=0;i<n;i++)
		{ 
			printf("* ");
		}
		
		printf("\n");
		
		//Ýki satýrda burada. Aþaðýya Doðru.
		for (j=0;j<(m-2);j++)
		{ 
			printf("*");
			for(k=0;k<space;k++)
			{
			printf(" ");
			}
		
			printf("*\n");
		}
		
		//Alt Sutünlar
		for(i=0;i<n;i++)
		{ 
		printf("* ");
		}
	
getch(); 
return 0;
}

	
