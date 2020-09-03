#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	
	// Yýldýzlarla Þekil Çizdirme
	//*****
/*	
	int i=0;
	for(i=0;i<=5;i++)
	{
		printf("*");
	}
*/

/*
	//Yýldýzlar ile alt alta 5 defa ***** yazdýr.
	
	int i=0;
	for(i=0;i<=5;i++)
	{
		printf("***** \n");
	}
*/

	//Yýldýzlar ile dik üçgen oluþturmak
	
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
