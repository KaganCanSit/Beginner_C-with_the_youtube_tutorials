#include <stdio.h>
#include <stdlib.h>



int main() {
	
	//"metinbelgesi ad� ile dosya tan�mlad�k"
	FILE *metinbelgesi;
	
	//��eriklerin hangi tipte ve boyutta oldu�unun yan� s�ra i�eri�ini tan�mlad�k.
	char veri1[30]="Yazilim ";
	char veri2[30]="Muhendisligi ";
	char veri3[30]="Bolumu ";
	
	//metinbelgesi de�ikenini hangi konumda hangi isimle yer alaca��n� belirledik. 
	//��lem olarak ise "w"(write-yazd�r) ile yazd�r�laca��n� belirttik.
	metinbelgesi=fopen("C:\\Users\\Ka�an Can �it\\Desktop\\Ders2.txt","w");
	
	//��kt� olarak tan�mlad���m�z de�i�kenleri dosya i�erisine ��kt� olarak verdik.
	fputs(veri1,metinbelgesi);
	fputs(veri2,metinbelgesi);
	fputs(veri3,metinbelgesi);
	
	return 0;
}
