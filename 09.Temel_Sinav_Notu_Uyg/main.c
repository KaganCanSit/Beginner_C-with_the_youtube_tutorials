#include <stdio.h>
#include <stdlib.h>

int main() {
	//Genel Sýnav Notu Uygulamasý
	int sinav1, sinav2, sinav3, proje, sinavson, sinavortalama, sinavtoplam, projenot, gecerliliknotu;
	
	printf("Sinavlarin toplam agirliginin %yetmisbes'i projenin ise %yirmibes'i alinacaktir.\n");
	
	printf("Ogrencinin Ilk Sinav Notunu Giriniz: \n");
	scanf("%d",&sinav1);
	
	printf("Ogrencinin Ikinci Sinav Notunu Giriniz: \n");
	scanf("%d",&sinav2);
	
	printf("Ogrencinin Ucuncu Sinav Notunu Giriniz: \n");
	scanf("%d",&sinav3);
	
	printf("Ogreninin Proje Notunu Giriniz: \n");
	scanf("%d",&proje);
	
	printf("Girilen Sinav Notlari:%d %d %d \n",sinav1,sinav2,sinav3);
	printf("Girilen Proje Notu:%d \n",proje);
	
	sinavtoplam=sinav1+sinav2+sinav3;
	sinavortalama= sinavtoplam /3;
	sinavson = sinavortalama * 3/4;
	
	projenot= proje * 1/4;
	gecerliliknotu= sinavson + projenot;
	printf("Gecerlilik Notu:%d \n",gecerliliknotu);
	
	return 0;
}
