#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	/*
	float s1,s2,p1,ort;
	
	printf("Ortalama Hesaplama Programina Hosgeldiniz \n");
	printf("Degerleri ondalikli olarak 78.4 gibi giribilirsiniz.\n");
	
	printf("Birinci sinav notunuzu giriniz: ");
	scanf("%f",&s1);
	
	printf("Ikinci sinav notunuzu giriniz: ");
	scanf("%f",&s2);

	printf("Proje sinav notunuzu giriniz: ");
	scanf("%f",&p1);

	ort=(s1+s2+p1)/3;
	
	printf("Girmis oldugunuz not degerleri= Ilk Sinav %f, Ikinci Sinav %f, Proje Notunuz %f \n",s1,s2,p1);
	printf("Ortalama Notunuz= %f",ort);
	*/
	
	
	
	/*
	//Maaþýn yapýlacak zam ile ulaþacaðý tutar
	
	float maas,yenimaas,zammiktari;
	
	printf("*****Zam Maas Hesabi*****\n\n");
	
	printf("Maasinizi Giriniz: ");
	scanf("%f",&maas);
	
	printf("Zam Oranini Giriniz: ");
	scanf("%f",&zammiktari);
	
	yenimaas=maas+(maas/100)*zammiktari;
	
	printf("Yeni Maasiniz: %f \n",yenimaas);
	*/
	
	
	
	/*
	//Çemberde Alan ve Çevre - pi*r*r / 2*pi*r pi=3,14 alacaðýz.
	
	float yaricap,alan,cevre,pi;
	
	printf("Cemberin Yaricapini Giriniz: ");
	scanf("%f",&yaricap);
	
	pi=3.14;
	alan=pi*yaricap*yaricap;
	cevre=2*pi*yaricap;
	
	printf("Cemberin Alani= %f \n",alan);
	printf("Cemberin Cevresi= %f ",cevre);
	*/
	
	//Ygs 1 Puan Türü Hesaplama
	//Türkçe:1.999 / Matematik 3.998 / Sosyal Bilgiler:1 / Fen Bilgisi:2.9999
	//Taban Eklenicek Puan:100.160
	
	float tr,mat,sos,fen,taban,toplampuan;
	
	taban=100.160;
	
	printf("Turkce Netiniz: ");
	scanf("%f",&tr);
	
	printf("Matematik Netiniz: ");
	scanf("%f",&mat);
	
	printf("Sosyal Netiniz: ");
	scanf("%f",&fen);
	
	printf("Fen Netiniz: ");
	scanf("%f",&fen);
	
	
	toplampuan=taban+(tr*1.999)+(mat*3.998)+(sos*1)+(fen*2.999);
	
	printf("LGS1 turunda sonucunuz: %f",toplampuan);
	
	
	
	
	
	return 0;
}
