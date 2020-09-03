#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char kitapad[30], yazarad[30],birlesmis[60];
	
	printf("Kitap Adi Ve Yazari Giriniz:" );
	scanf("%s%s",kitapad,yazarad);
	
	strcat(birlesmis,kitapad);
	strcat(birlesmis," ");
	strcat(birlesmis,yazarad);
	
	printf("\n \n");
	printf("%s",birlesmis);
	
	return 0;
}
