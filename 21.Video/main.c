#include <stdio.h>
#include <stdlib.h>

int main() {
/*	
	int i=0,a=0;
	
	for(i=1;i<=6;i++)
	{
		for(a=6;a>=i;a--)
		{
			printf("*");
		}
		
		printf("\n");
	}
*/

	int i=0, j=0 ,a=0;
	
	for(i=1;i<=6;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(i=1;i<=6;i++)
	{
		for(a=6;a>=i;a--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
