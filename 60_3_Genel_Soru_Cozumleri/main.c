#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
/*	
	//Soru46:Kullanýcýnýn deðerlerini vereceði 4*4'lük bir matrisi ve transposesini ekrana yazdýran program.
	
	//Transpoze: Çarpzlama int[3][2] ==>> int [2][3]
	//Transpoze Örnek: https://www.youtube.com/watch?v=kLbieVyn41o
	
	int dizi[4][4], i=0, j=0;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d - %d: Dizi Degerini Giriniz:",i,j);
			scanf("%d",&dizi[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n=====================\n\n");
	printf("Normal Dizi\n");	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\t %d ",dizi[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n=====================\n\n");
	printf("Transpoze Dizi\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\t %d ",dizi[j][i]);
		}
		printf("\n");
	}
*/
	
	
	
/*	
	//Soru47: Girilen matrisin simetrik olup olmadýðýný kontrol eden program.
	
	//i=satir - j=sutün
	int matris[3][3], i=0, j=0;
	int kontrolsimetrik=0;
				
				
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d - %d Matris Degerini Giriniz: ",i,j);
			scanf("%d",&matris[i][j]);
		}
		printf("\n");
	}
	
	kontrolsimetrik=1;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i!=j)
			{
				if(matris[i][j] != matris[j][i])
				{
					//Matris 0/0 - 0/1 üzerinden sýralý ilerlerken 0/1 degerine karþýlýk 1/0 deðeri de eþ sayýyý matris içerisinde barýndýrýyorsa matris simetriktir.
					kontrolsimetrik=0;
					break;	
				}
			}
		}
	}
	
	
	if(kontrolsimetrik==1)
	{
		printf("Matris Degeriniz Simetriktir.");
	}
	else
	{
		printf("Matris Degeriniz Simetrik Degildir.");
	}
*/



/*
	//Soru48: karaktere kadar bir kelime girilmesini isteyen ve bunu yazdýran program.
	char kelime[10];
	
	printf("10 Karaktere Kadar Bir Kelime Giriniz: ");
	scanf("%s",&kelime);
	
	printf("\n");
	printf("Kelimeniz: %s",kelime);
*/



/*
	//Soru49:Girilen iki kelimeden hangisinin uzun olduðunu bulan program.
	char kelime1[25], kelime2[25], sonuc;
	
	printf("Birinci Kelimeyi Giriniz: ");
	scanf("%s",&kelime1);
	printf("Ikinci Kelimeyi Giriniz: ");
	scanf("%s",&kelime2);
	
	
	//Bu kýsým sonuc=strcmp(kelime1,kelime2); þeklinde hesaplatýlarak 1 true 0 false þeklinde yapýlabilir.
	//Bu yolun kodlarý aþaðýda ekler mevcut.
	//sonuc=strcmp(kelime1,kelime2);
	
	kelimeuzunlugu1=strlen(kelime1);
	kelimeuzunlugu2=strlen(kelime2);

	printf("\n");
		
	//if(sonuc==1)
	if(kelimeuzunlugu1>kelimeuzunlugu2)
	{
		printf("1.Kelime Daha Uzundur.");
	}
	else
	{
		printf("2.Kelime Daha Uzundur");
	}
*/



/*
	//Soru50: Ayrý ayrý girilen ad ve soyad bilgilerini birleþtiren program.
	char ad[25], soyad[25], birlestirme[100];
	
	printf("Adiniz: ");
	gets(ad);
	printf("Soyadiniz: ");
	gets(soyad);
	
	strcpy(birlestirme,ad);
	strcat(birlestirme," ");
	strcat(birlestirme,soyad);
	
	printf("\nAdiniz Ve Soyadiniz: %s",birlestirme);
*/



/*	
	//Soru51:Girilen kelimenin karakter sayýsýný hesaplayan program.
	//Kilit Nokta strlen komutu.
	char kelime[30], karaktersayi;
	
	printf("Kelimenizi Giriniz: ");
	scanf("%s",&kelime);
	
	karaktersayi=strlen(kelime);
	
	printf("\n%s Kelimeniz - %d Karakter",kelime,karaktersayi);
*/	
	


/*	
	//!Kontrol - Bu soru üzerine baþka bir algortmik düþünce bulunabilir.
	//Soru52:Girilen kelime de bulunan sesli harfleri sayan program.
	char kelime[30];
	int i=0, sayac=0, uzunluk=0;
	
	printf("Kelimenizi Giriniz: ");
	scanf("%s",&kelime);
	
	uzunluk=strlen(kelime);
	//a, e, ý, i, o, ö, u, ü
	
	for(i=0;i<uzunluk;i++)
	{
		if(kelime[i]=='a' || kelime[i]=='A' ||kelime[i]=='e' || kelime[i]=='E' || kelime[i]=='ý' || kelime[i]=='I' || kelime[i]=='i' || kelime[i]=='Ý' || kelime[i]=='o' || kelime[i]=='O' ||  kelime[i]=='ö' || kelime[i]=='Ö' || kelime[i]=='u' || kelime[i]=='U' || kelime[i]=='ü' || kelime[i]=='Ü')
		{
			sayac++;
		}
	}
	
	printf("%d Adet Sesli Harf Mevcut",sayac);
*/	



	
	//Soru53:Girilen kelime de kullanýcýðýnýn istediði karakterden kaç tane olduðunu bulan program.


	
	//Soru54:Kullanýcý tarafýndan girilen bir metnin tersini veren program.
	//Soru55:Girilen bir metnin harflerini alfaebtik olarak sýralayan program.
	//Soru56:Kullanýcý tarafýndan girilen bir metindeki harfleri büyük harflere çeviren program.
	//Soru57:Kullanýcý tarafýndan girilen bir metindeki kelimelerin baþ harflerinibüyük yazan program.
	//Soru58:Kullanýcý tarafýndan girilen bir desimal sayýyý binary formata ddönüþtüren program.
	//Soru59:Kullanýcýdan öðrencilerin adý ve yaþýný alarak bunlarý küçükten büyüðe sýralayan program.
	//Soru60: Kullanýcý tarafýndan girilen sayýnýn asal olup olmadýðýný fonksiyon kulllanarak hesaplayan program.	
	return 0;
}
