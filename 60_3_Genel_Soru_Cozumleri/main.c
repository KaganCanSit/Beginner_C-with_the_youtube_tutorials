#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main() {
/*	
	//Soru46:Kullan�c�n�n de�erlerini verece�i 4*4'l�k bir matrisi ve transposesini ekrana yazd�ran program.
	
	//Transpoze: �arpzlama int[3][2] ==>> int [2][3]
	//Transpoze �rnek: https://www.youtube.com/watch?v=kLbieVyn41o
	
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
	//Soru47: Girilen matrisin simetrik olup olmad���n� kontrol eden program.
	
	//i=satir - j=sut�n
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
					//Matris 0/0 - 0/1 �zerinden s�ral� ilerlerken 0/1 degerine kar��l�k 1/0 de�eri de e� say�y� matris i�erisinde bar�nd�r�yorsa matris simetriktir.
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
	//Soru48: karaktere kadar bir kelime girilmesini isteyen ve bunu yazd�ran program.
	char kelime[10];
	
	printf("10 Karaktere Kadar Bir Kelime Giriniz: ");
	scanf("%s",&kelime);
	
	printf("\n");
	printf("Kelimeniz: %s",kelime);
*/



/*
	//Soru49:Girilen iki kelimeden hangisinin uzun oldu�unu bulan program.
	char kelime1[25], kelime2[25], sonuc;
	
	printf("Birinci Kelimeyi Giriniz: ");
	scanf("%s",&kelime1);
	printf("Ikinci Kelimeyi Giriniz: ");
	scanf("%s",&kelime2);
	
	
	//Bu k�s�m sonuc=strcmp(kelime1,kelime2); �eklinde hesaplat�larak 1 true 0 false �eklinde yap�labilir.
	//Bu yolun kodlar� a�a��da ekler mevcut.
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
	//Soru50: Ayr� ayr� girilen ad ve soyad bilgilerini birle�tiren program.
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
	//Soru51:Girilen kelimenin karakter say�s�n� hesaplayan program.
	//Kilit Nokta strlen komutu.
	char kelime[30], karaktersayi;
	
	printf("Kelimenizi Giriniz: ");
	scanf("%s",&kelime);
	
	karaktersayi=strlen(kelime);
	
	printf("\n%s Kelimeniz - %d Karakter",kelime,karaktersayi);
*/	
	


/*	
	//!Kontrol - Bu soru �zerine ba�ka bir algortmik d���nce bulunabilir.
	//Soru52:Girilen kelime de bulunan sesli harfleri sayan program.
	char kelime[30];
	int i=0, sayac=0, uzunluk=0;
	
	printf("Kelimenizi Giriniz: ");
	scanf("%s",&kelime);
	
	uzunluk=strlen(kelime);
	//a, e, �, i, o, �, u, �
	
	for(i=0;i<uzunluk;i++)
	{
		if(kelime[i]=='a' || kelime[i]=='A' ||kelime[i]=='e' || kelime[i]=='E' || kelime[i]=='�' || kelime[i]=='I' || kelime[i]=='i' || kelime[i]=='�' || kelime[i]=='o' || kelime[i]=='O' ||  kelime[i]=='�' || kelime[i]=='�' || kelime[i]=='u' || kelime[i]=='U' || kelime[i]=='�' || kelime[i]=='�')
		{
			sayac++;
		}
	}
	
	printf("%d Adet Sesli Harf Mevcut",sayac);
*/	



/*	
	//Soru53:Girilen kelime de kullan�c���n�n istedi�i karakterden ka� tane oldu�unu bulan program.
	char metin[200], aranan;
	int metinuzunluk=0, i=0, sayac=0;

	printf("Metninizi Giriniz: ");
	gets(metin);
	
	printf("Saymak Istediginiz Karakteri Giriniz: ");
	scanf("%c",&aranan);
	
	metinuzunluk = strlen(metin);

	for(i=0;i<metinuzunluk;i++)
	{
		if(aranan == metin[i])
		{
			sayac++;
		}
	}

	printf("Aradiginiz Karakterden Metin Icerisinde %d Tane Var.",sayac);
*/



/*	
	//Soru54:Kullan�c� taraf�ndan girilen bir metnin tersini veren program.
	char metin[200], yenimetin[200];
	int uzunluk=0, i=0;
	
	printf("Metninizi Giriniz: ");
	gets(metin);
	
	uzunluk=strlen(metin);
	
	for(i=0;i<uzunluk;i++)
	{
		yenimetin[i]=metin[uzunluk-1-i];
	}
		
	printf("\nEski Metin: %s",metin);
	printf("\nYeni Metin: %s",yenimetin);
*/


/*
	//Soru55:Girilen bir metnin harflerini alfabetik olarak s�ralayan program.
	char metin[200], araci;
	int i=0, n=0, uzunluk=0;
	
	printf("Metninizi Giriniz: ");
	gets(metin);
	
	uzunluk=strlen(metin);
	
	for(i=0;i<uzunluk-1;i++)
      {
            for(n=i+1;n<uzunluk;n++)
         	 {
              if(metin[i]>metin[n])
              {
                  araci = metin[i];
                  metin[i] = metin[n];
                  metin[n] = araci;
              }
          }
      }
	
	printf("%s",&metin);
*/



/*
	//Soru56:Kullan�c� taraf�ndan girilen bir metindeki harfleri b�y�k harflere �eviren program.
	//Kilit nokta ASCII tablosuna g�re karakter aras�nda 32 fark vard�r. �rne�in A=65 iken a=97'dir.
	char metin[250], karakter=' ';
	int i=0, uzunluk=0;
	
	printf("Metininizi Giriniz: ");
	gets(metin);
	
	//Tan�mlanan karakter null de�ilse ASCII tablosuna g�re karakter de�erini 32 azalt.
	while(metin[i]!='\0')
	{	
		//Kilit Nokta: E�er karakter ' '(bo�luk) ise i'yi bir artt�rarak sonraki karaktere ge�. Yoksa bo�luk say�lmaz. �rn Merhaba Dunya ��kt�s� ===> MERHABA olur sadece.
		if(metin[i]==' ')
		{
			i++;
		}
		
		karakter=metin[i];
		metin[i]=karakter-32;
		i++;
	}

	printf("%s",metin);
*/




	//Soru57:Kullan�c� taraf�ndan girilen bir metindeki kelimelerin ba� harflerini b�y�k yazan program.
	char metin[250], karakter=' ';
	int i=0, uzunluk=0;
	
	printf("Turkce Karakter Bulunmadan Kucuk Harfler Ile Metininizi Giriniz: ");
	gets(metin);
	
	uzunluk=strlen(metin);
	
	//Tan�mlanan karakter null de�ilse ASCII tablosuna g�re karakter de�erini 32 azalt.
	while(metin[i]!='\0')
	{	
		if(metin[i]==' ')
		{
			i++;
			karakter=metin[i];
			metin[i]=karakter-32;
		}
		//while d�ng�s�n�n son bulmas� i�in var.
		i++;
	}
	
	//Ba�lang�� Harfi ��in!
	if(metin[0])
	{
		karakter=metin[0];
		metin[0]=karakter-32;
	}
	
	printf("%s",metin);

	
	return 0;
}
