#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	
	// Y�ld�zlarla �ekil �izdirme
	//*****
/*	
	int i=0;
	for(i=0;i<=5;i++)
	{
		printf("*");
	}
*/

/*
	//Y�ld�zlar ile alt alta 5 defa ***** yazd�r.
	
	int i=0;
	for(i=0;i<=5;i++)
	{
		printf("***** \n");
	}
*/

	//Y�ld�zlar ile dik ��gen olu�turmak
	
	int i=0,j=0;
	for(i=0;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}	
	return 0;
}
