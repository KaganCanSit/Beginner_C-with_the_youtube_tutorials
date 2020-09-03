#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

/*
	//Ornek1
		
	int sayac=0;
	int i;
	for(i=1;i<=10;i++)
	{
		sayac=sayac+i;
	}
	printf("Sayac Degeriniz: %d",sayac);
	
	//(n.(n+1))/2
	//1 - 1+2=3 + 3+3=6 toplayarak geliyor.
*/

/*	
	//Ornek2
	int i;
	int faktoriyel=1;
	for(i=1;i<=5;i++)
	{
		faktoriyel=faktoriyel*i;
	}
	printf("5 sayisinin faktoriyel degeri= %d",faktoriyel);
	
	//5!=5.4.3.2.1
*/

	int sayi,i;
	int faktoriyel=1;
	
	printf("Faktoriyelinin Alinmasi Istediginiz Sayiyi Giriniz: ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++)
	{
		faktoriyel=faktoriyel*i;	
	}	
	printf("Sayinizin faktoriyeli= %d",faktoriyel);
	
	return 0;
}
