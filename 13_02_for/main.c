#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

/*	
	//Fibonacci Serisi
	//1 - 1 -2 -3 - 5 S�ral� olarak 2 de�erin toplam�ndan olu�uyor.
	
	//Ornek1
	//Fibonacci Sayi Dizisiniz �lk 10 De�erini Listeleyen Kod
	int a,b,c,i;
	a=1;
	b=1;
	printf("%d \n",a);
	printf("%d \n",b);

	for(i=1;i<=8;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d \n",c);
	}
	
*/
	
	//Tribonacci Sayi Dizisi - (Fibonaccinin 3'l�s�)
	//Ornek2
	//Tribonacci Sayi Dizisiniz �lk 10 De�erini Listeleyen Kod
	int a,b,c,e,i;
	a=1;
	b=1;
	e=1;
	printf("%d \n",a);
	printf("%d \n",b);
	printf("%d \n",e);
	
	for(i=1;i<=7;i++)
	{
		c=a+b+e;
		a=b;
		b=e;
		e=c;
		printf("%d \n",c);
	}
	
	return 0;
}
