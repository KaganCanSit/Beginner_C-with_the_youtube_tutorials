#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	
	//Burada ��zmeye �al��t���m sorulara "http://www.ckutuphanesi.com/tum-ornek-projeler/" adresi �zerinden ula�abilirsiniz. Gayet yararl� ve emekle haz�rlam��lar, emeklerine sa�l�k.
	

/*	
	//Soru1: "C programalama d�nyas�na ho�geldiniz." mesaj�n� ekrana yazd�ran program� yaz�n�z.
	printf("C Proglamlama Dunyasina Hosgeldiniz.");
*/



/*
	//Soru2: Kullan�c�dan say� girmesini isteyen ve girilen say�y� ekrana yazd�ran program� yaz�n�z.
	int sayi=0;
	
	printf("Sayi Degeri Giriniz: ");
	scanf("%d",&sayi);
	
	printf("Girilen Sayi Degeri: %d",sayi);	
*/



/*		
	//Soru3:Kullanc�dan iki say� girmesini ve bu say�lar� toplayan program.
	int sayi1=0, sayi2=0, toplam=0;
	
	printf("Ilk Sayi Degerini Giriniz: ");
	scanf("%d",&sayi1);
	printf("Ikinci Sayi Degerini Giriniz: ");
	scanf("%d",&sayi2);
	
	toplam=sayi1+sayi2;
	
	printf("Sayilar Toplami: %d",toplam);
*/



/*
	//Soru4:Bir kenar� girilen karenin alan ve �evresini hesaplayan program� yaz�n�z.
	int kenar=0, alan=0, cevre=0;
	
	printf("Karenizin Kenar Olcusunu Giriniz: ");
	scanf("%d",&kenar);
	
	//pow komutu �s alma komutudur. pow(sayi, �s de�eri)
	//Komutun kullan�m� i�in math.h k�t�phanesi eklemeniz gerekir. ===>>> #include <math.h> 
	alan=pow(kenar,2);
	cevre=kenar*4;
	
	printf("Karenizin Alani:%d\n",alan);
	printf("Karenizin Cevresi:%d",cevre);
*/



/*
	//Soru5:�ki kenar� girilen dikd�rtgenin alan ve �evresini hesaplayan program� yaz�n�z.
	int kisakenar=0, uzunkenar=0, alan=0, cevre=0;
	
	printf("Dikdortgenin Uzun Kenarinin Olcusunu Giriniz: ");
	scanf("%d",&uzunkenar);
	printf("Dikdortgenin Kisa Kenarinin Olcusunu Giriniz: ");
	scanf("%d",&kisakenar);

	alan=kisakenar*uzunkenar;
	cevre=(kisakenar*2)+(uzunkenar*2);
	
	printf("Dikdortgeninizin Alani:%d\n",alan);
	printf("Dikdortgeninizin Cevresi:%d",cevre);
*/



/*
	//Soru6:Yar��ap� girilen dairenin alan ve cevresini bulan program.
	int yaricap=0;
	float alan=0, cevre=0, pi=3.14;

	printf("Dairenin Yaricap Degerini Giriniz: ");
	scanf("%d",&yaricap);
	
	alan=pi*(pow(yaricap,2));
	cevre=2*pi*yaricap;
	
	printf("Dairenin Alani:%.3f\n",alan);
	printf("Dairenin Cevresi:%.3f\n",cevre);
*/



/*
	//Soru7:Kullac�dan gidilecek mesafe ve var�� zaman�n� sorarak olmas� gerekn h�z� bulunuz.
	int mesafe=0, zaman=0;
	float hiz=0;
	
	printf("Gidilecek Olan Mesafeyi Km Cinsinden Giriniz: ");
	scanf("%d",&mesafe);
	printf("Ne Kadar Surede Ulasmak Istediginizi Saat Biciminden Giriniz: ");
	scanf("%d",&zaman);
	
	hiz=mesafe/zaman;
	
	printf("Zamaninda Ulasabilmek Icin %.3f km/h Hiz Ile Yola Devam Etmelisiniz.",hiz);
*/	


	
/*	
	//Soru8:Kullan�c�dan ya��n� sorarak ay, hafta, g�n, saat, dakika ve saniye olarak hesaplayan program.
	int yas=0;
	float ay=0, hafta=0, gun=0, saat=0, dakika=0;	
	
	printf("Yasinizi Ogrenebilir Miyiz?\n");
	scanf("%d",&yas);
	
	ay=yas*12;
	hafta=yas*52.177457;
	gun=hafta*7;
	saat=gun*24;
	dakika=saat*60;
	
	printf("Hayatinizin Yaklasik Olarak: \n");
	printf("%f ay\n",ay);
	printf("%f hafta\n",hafta);
	printf("%f gun\n",gun);
	printf("%f saat\n",saat);
	printf("%f dakika\n",dakika);
	printf("Suresini Gecirdiniz. Zaman cok hizli geciyor. Sevdiginiz isler ve insanlar ile vakit gecirin. Gorusmek uzere.");
*/


	
/*	
	//Soru9:Girilen Sayinin Tek Veya Cift OLdugunu Bulan Prg. Yaz�n�z.
	int sayi=0;
	
	printf("Kontrol Edilecek Olan Sayi Degerini Giriniz: \n");
	scanf("%d",&sayi);
	
	if(sayi%2==0)
	{
		printf("Girdiginiz Deger Cifttir");
	}
	else
	{
		printf("Girdiginiz Deger Tektir");
	}
*/



/*
	//Soru10:Kullan�c�dan iki say� girmesini isteyen ve bu say�lar�n b�y�kl�klerini kar��la�t�ran program.
	int sayi=0,sayi1=0;
	
	printf("Ilk Sayiyi Giriniz: ");
	scanf("%d",&sayi);
	printf("Ikinci Sayiyi Giriniz: ");
	scanf("%d",&sayi1);
	
	if(sayi>sayi1)
	{
		printf("%d sayi degeri %d sayi degerinden buyuktur.\n",sayi,sayi1);
	}
	if(sayi1>sayi)
	{
		printf("%d sayi degeri %d sayi degerinden buyuktur. \n",sayi1,sayi);
	}
	if(sayi==sayi1)
	{
		printf("Sayi Degerleri Birbirine Esittir");
	}
*/

/*
	//Soru11:Koordinatlar� verilen iki mesafe aras�nda mesafeyi bulan program.
	int x1=0, x2=0, y1=0, y2=0;
	float mesafe=0;
	
	printf("Ilk noktanizin x,y noktalarini giriniz: \n");
	scanf("%d%d",&x1,&y1);
	printf("Ikinci noktanizin x,y noktalarini giriniz: \n");
	scanf("%d%d",&x2,&y2);
	
	mesafe=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("Iki mesafe arasi mesafe: %f",mesafe);
*/

/*	
	//Soru12:Ya�� girilen bir ki�inin se�imlerde oy verme yeterlili�i olup olad���n� test eden program.
	int yas=0;
	
	printf("Yas Degerinizi Giriniz: ");
	scanf("%d",&yas);
	
	if(yas<18)
	{
		printf("Henuz Oy Vermek Icin Yasiniz Yeterli Degil");
	}
	else
	{
		printf("Oy Kullanabilirsiniz.");
	}
*/

/*	
	//Soru13:Girilen y�l�n art�k y�l olup olmad���n� tespit eden program.
	int yil=0;
	printf("Artik Yil Kontrolu Yapilacak Olan Yili Giriniz: ");
	scanf("%d",&yil);
	
	if(yil %4==0)
	{
		printf("Girmis Oldugunuz Yil Artik Yil'dir.");
	}
	else
	{
		printf("Girmis Oldugunuz Yil Artik Yil Degildir.");
	}
*/

/*	
	//Soru14:Girilen bir nota kar��l�k gelen durumu yazd�ran pogram.
	int vize=0, final=0, ortalama=0;
	
	printf("Vize Notunuzu Giriniz: \n");
	scanf("%d",&vize);
	printf("Final Notunuzu Giriniz: \n");
	scanf("%d",&final);
	
	ortalama=(vize*0.4)+(final*0.6);
	printf("Not Ortalamaniz: %d \n",ortalama);
	printf("\n**********\n");
	
	if(ortalama<=100 && ortalama>=90)
	{
		printf("AA notu ile gectiniz. Tebrikler.");
	}
	if(ortalama<=84 && ortalama>=80)
	{
		printf("BA notu ile gectiniz. Tebrikler.");
	}
	if(ortalama<=79 && ortalama>=74)
	{
		printf("BB notu ile gectiniz. Tebrikler.");
	}
	if(ortalama<=74 && ortalama>=70)
	{
		printf("CB notu ile gectiniz. Tebrikler.");
	}
	if(ortalama<=70 && ortalama>=65)
	{
		printf("CC notu ile gectiniz. Tebrikler.");
	}
	if(ortalama<=65 && ortalama>=60)
	{
		printf("DC notu ile gectiniz. Tebrikler.");
	}
	if(ortalama<=60 && ortalama>50)
	{
		printf("DD notu ile gectiniz. Tebrikler.");
	}
	else(ortalama<50);
	{
		printf("FF notu ile kaldiniz.");
	}
*/	

	
	//Soru15:Klavyeden girilen harfin sesli harf olup olmad���n� kontrol eden program.
	char harf;
	
	printf("Harfinizi Giriniz: ");
	scanf("%c",&harf);
	
	if(harf=='A'||harf=='E'||harf=='I'||harf=='�'||harf=='U'||harf=='O'||harf=='�'||harf=='a'||harf=='e'||harf=='�'||harf=='i'||harf=='u'||harf=='o'||harf=='�')
	{
		printf("Harfiniz sesli harftir.");
	}
	else
	{
		printf("Harfiniz sessiz harf.");
	}

		
	return 0;
}
