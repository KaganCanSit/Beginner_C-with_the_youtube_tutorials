#include <stdio.h>
#include <stdlib.h>
/*
	//Klavyeden girmi� old. en ve boy degerine g�re i�i dolu dikd�rtgen �izen prg yaz�n�z.
	void dikdortgen(int kisa, int uzun)
	{
		int i,j;
		for(i=0;i<kisa;i++)
		{
			//Bariz tekrarl� hata ikinci d�ng�ye i de�i�kenini tekrar atama. De�er De�i�iyor.
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



//ALINTI KOD �NCELE

// ��i bo� kare yapmak
# include<stdio.h>
# include<conio.h>
int main(){
	int m,n,space,i,j,k;
	printf("Satir degerini giriniz ");
	scanf("%d",&m);
	printf("Sutun degerini giriniz ");
	scanf("%d",&n);
	
	space=(n-2)*2+1;
	
		//�st S�tun
		for (i=0;i<n;i++)
		{ 
			printf("* ");
		}
		
		printf("\n");
		
		//�ki sat�rda burada. A�a��ya Do�ru.
		for (j=0;j<(m-2);j++)
		{ 
			printf("*");
			for(k=0;k<space;k++)
			{
			printf(" ");
			}
		
			printf("*\n");
		}
		
		//Alt Sut�nlar
		for(i=0;i<n;i++)
		{ 
		printf("* ");
		}
	
getch(); 
return 0;
}

	
