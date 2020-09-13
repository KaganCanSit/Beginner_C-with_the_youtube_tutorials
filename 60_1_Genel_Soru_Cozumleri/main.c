#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {


/*	
	//Soru16:Haftalýk gün numarasýna göre haftanýn gününü veren program.
	int gunsayi=0;
	
	yeniden:
	
	printf("Haftanin Hangi Gunu Oldugunu Sayi Ile Belirtiniz.(1-7): ");
	scanf("%d",&gunsayi);
	
	switch(gunsayi)
	{
		case 1:
			printf("Sectiginiz Gun Pazartesi.");
			break;
		case 2:
			printf("Sectiginiz Gun Sali.");
			break;
		case 3:
			printf("Sectiginiz Gun Carsamba.");
			break;
		case 4:
			printf("Sectiginiz Gun Persembe.");
			break;
		case 5:
			printf("Sectiginiz Gun Cuma.");
			break;
		case 6:
			printf("Sectiginiz Gun Cumartesi.");
			break;
		case 7:
			printf("Sectiginiz Gun Pazar.");
			break;
		default:
			printf("Yanlis Sayi Degeri Girdiniz.Lutfen yeniden deneyiniz.\n");
			goto yeniden;
			break;
	}
*/	
	
	

/*	
	//Soru17:Girilen yaþa göre hangi hayat diliminde oldugunu veren program.
	int yas=0;
	
	printf("Yas Degerini Giriniz:");
	scanf("%d",&yas);
		
	if(yas>=0 && yas<=6)
	{
		printf("Kisi Bebeklik Ve Ilk Cocukluk Donemindedir.");
	}
	if(yas>6 && yas<=12)
	{
		printf("Kisi Orta Cocukluk Donemindedir.");
	}
	if(yas>12 && yas<=18)
	{
		printf("Kisi Ergenlik Donemindedir.");
	}
	if(yas>18 && yas<=30)
	{
		printf("Kisi Genc Yetiskinlik Donemindedir.");
	}
	if(yas>30 && yas<65)
	{
		printf("Kisi Yetiskinlik Donemindedir.");
	}
	if(yas>=65)
	{
		printf("Kisi Yaslilik Donemindedir.");
	}
*/	
	
	

/*	
	//Soru18: Basit Hesap Makinesi Uygulamasý
	int sayi1=0, sayi2=0, sonuc=0;
	char islem;
	
	yeniden:
	
	printf("Islem Secimi Yapiniz.(+,-,/,*): ");
	scanf("%c",&islem);
	
	if(islem !='+' && islem != '-' && islem !='/' && islem != '*')
	{
		printf("Yanlis Sembol Girdiniz. Lutfen Tekrar  Deneyiniz.\n");
		goto yeniden;
	}
	
	printf("Islem yapilacak olan sayilari giriniz.\n");
	printf("1.Sayi Degerini Giriniz: ");
	scanf("%d",&sayi1);
	printf("2.Sayi Degerini Giriniz: ");
	scanf("%d",&sayi2);
	
	
	if(islem == '+')
	{
		sonuc=sayi1+sayi2;
		printf("Toplama Islemi Sonucunuz: %d",sonuc);
	}
	if(islem == '-')
	{
		sonuc=sayi1-sayi2;
		printf("Cikarma Islemi Sonucunuz: %d",sonuc);
	}
	if(islem == '/')
	{
		sonuc=sayi1/sayi2;
		printf("Bolme Islemi Sonucunuz: %d",sonuc);
	}
	if(islem == '*')
	{
		sonuc=sayi1*sayi2;
		printf("Carpma Islemi Sonucunuz: %d",sonuc);
	}
*/



/*
	//Soru19: Basit Hesap Makinesi Uygulamasý (Switch yapýsý ile çözülmeli)
	int sayi1=0, sayi2=0, sonuc=0;
	char islem;

	yeniden:
	
	printf("Islem Secimi Yapiniz.(+,-,/,*): ");
	scanf("%c",&islem);
	
	printf("Islem yapilacak olan sayilari giriniz.\n");
	printf("1.Sayi Degerini Giriniz: ");
	scanf("%d",&sayi1);
	printf("2.Sayi Degerini Giriniz: ");
	scanf("%d",&sayi2);

	switch(islem)
	{
		case '+':
			sonuc=sayi1+sayi2;
			printf("Toplama Islemi Sonucu:%d",sonuc);
			break;
		case '-':
			sonuc=sayi1-sayi2;
			printf("Cikarma Islemi Sonucu:%d",sonuc);
			break;
		case '/':
			sonuc=sayi1/sayi2;
			printf("Bolme Islemi Sonucu:%d",sonuc);
			break;
		case '*':
			sonuc=sayi1*sayi2;
			printf("Carpma Islemi Sonucu:%d",sonuc);
			break;
		default:
			printf("Yanlis Sembol Girdiniz. Lutfen Tekrar  Deneyiniz.\n");
			goto yeniden;
			break;
	}
*/



/*
	//Soru20:Bir üçgenin girilen kenar ölçülerine göre üçgen türünü bulan program.
	int kenar1=0, kenar2=0, kenar3=0;
	
	printf("Ucgeninizin Kenar Olculerini Giriniz\n");
	printf("1.Kenar: ");
	scanf("%d",&kenar1);
	printf("2.Kenar: ");
	scanf("%d",&kenar2);
	printf("3.Kenar: ");
	scanf("%d",&kenar3);
	
	if( (kenar1==kenar2) && (kenar1==kenar3) && (kenar2==kenar3))
	{
		printf("Ucgeniniz Eskenar Ucgendir.");
	}
	else if ((kenar1==kenar2) || (kenar1==kenar3))
	{
		printf("Ucgeniniz Ikizkenar Ucgendir.");
	}
	else
	
	{
		printf("Ucgeninizin Kenarlari Esit Degil. Dik Ucgen Veya Karma Bir Ucgen olabilir.");
	}
*/



/*	
	//Soru21:Kullanýcýya medeni halini, evli ise kaç çocuðu olduðunu soran ve gerekli mesajlarý veren programý yazýnýz.
	int cocuksay=0;
	char durum, cocukdurum;
	
	printf("Sorulari evet (e-E giriniz)/ hayir (h-H giriniz) seklinde cevaplayiniz.\n\n");
	printf("Evli misiniz?(e/h) :" );
	scanf("%s",&durum);
	
	if(durum == 'e' || durum=='E')
	{
		printf("Hayat arkadasinizi bulmussunuz. Bu sevindirici. Tebrik ederiz.\n");
			printf("Cocuk sahibi misiniz?(e/h)\n");
			scanf("%s",&cocukdurum);
			if(cocukdurum == 'e' || cocukdurum=='E')
			{
				printf("Ne mutlu! Kac cocuga sahipsiniz?\n");
				scanf("%d",&cocuksay);
				
				if(cocuksay<=2)
				{
				printf("Kucuk,sicak bir yuvaya sahipsiniz.");
				}
				else
				{	
				printf("Buyuk bir aileye sahipsiniz.");
				}
			}
			else if(cocukdurum == 'h' || cocukdurum=='H')
			{
				printf("Bizi bilgilendirdiginiz icin tesekkur ederiz.");
			}
			else
			{
				printf("Yanlis harf girdiniz.");
			}
	}
	else if(durum == 'h' || durum=='H')
	{
		printf("Bizi bilgilendirdiginiz icin tesekkur ederiz.");
	}
	else
	{
		printf("Yanlis harf girdiniz.");
	}
*/



/*
	//Soru22:Girilen bir sayýnýn asallýðýný kontrol eden program.
	int sayi=0 ,i=0, sayac=0;
	
	printf("Sayi Degerini Giriniz: ");
	scanf("%d",&sayi);
	
	for(i=2;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			sayac++;
		}
	}
	if(sayac == 0)
	{
		printf("Sayi Asaldir.");
	}
	else
	{
		printf("Sayi Asal Degildir.");
	}
*/


/*
	//Soru23:1'den 25'E ileri ve 25'den 1'e geri sayan ve yazdýran program.
	int i=0, j=0;
	
	for(i=1;i<=25;i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for(j=25;j>=1;j--)
	{
		printf("%d ",j);
	}
*/	



/*
	//Soru24:1'den 50 sayýsý kadar sayýlarý tek çift olarak ayýran program.
	int sayi=50, i=0;
	
	for(i=0;i<=sayi;i++)
	{
		if(i%2==0)
		{
			printf("Cift Sayi:%d \n",i);
		}
		else
		{
			printf("Tek Sayi:%d \n",i);
		}
	}
	
	//Ayrý ayrý yazmasaný istersek baþka bir for döngüsü ile çftlerden sonra yazdýrabiliriz.
*/

	
	
/*
	//Soru25:Girilen bir sayý  için çarpým tablosu oluþturan program.
	int sayi=0, i=0;
	
	printf("Sayi  Degeri Giriniz:");
	scanf("%d",&sayi);
	
	printf("\n====================\n\n");
	
	for(i=1;i<=10;i++)
	{
		printf("   %d x %d = %d\n",sayi,i,sayi*i);
	}
	
	printf("\n====================");
*/	

	
	
/*	
	//Soru26:Girilen bir sayýnýn faktöriyelini bulan program.
	int sayi=0, faktoriyel=1, i=0;
	
	printf("Faktoriyelini almak istediginiz sayiyi giriniz: ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++)
	{
		faktoriyel=faktoriyel*i;
	}
	printf("Sayi Degerinin Faktoriyeli: %d",faktoriyel);
*/



/*
	//Soru27:Girilen bir sayýnýn kuvvetini bulan program(normal ve pow()ile)
	int i=0, sayi=0, us=0, sonuc, sonuc1;
	
	printf("Sayi Degerini Giriniz: ");
	scanf("%d",&sayi);
	printf("Kacinci Kuvvetini Almak Istiyorsunuz: ");
	scanf("%d",&us);
	
	for(i=1;i<=us;i++)
	{
		sonuc1=sonuc1*sayi;
	}
	printf("Normal Sonuc: %d\n",sonuc1);
	
	//pow komutu için #include <math.h> eklendi.
	sonuc=pow(sayi,us);
	printf("Pow Sonucu: %d",sonuc);
*/	


	
/*	
	//	Bu sorunun temel mantýðýnda yardým alýmýþtýr! Sorunun kýsa mantýksal özeti þu þekildedir.
	//	Asal sayýlarýn kontrolünü yapabilmek için "dogrulukkontrolcusu" adýnda deðiþkeni tanýmladýk ve döngü öncesi elimizdeki tüm deðer aralýðýnda sayýlarýn asal olduðunu kabul ettik. ('a' - asal)
	//	Daha sonra if ile asal olmayan sayýlarý bularak bunlarýn deðerini 'd' (deðil) þeklinde deðiþtirdik. Bir açýdan 0-1 doðru yanlýþ kontrolü yapmýþ olduk.
	//	Döngü dýþarýsýna dýþarak dedik ki eðer dogrulukkontrolcusu='a'(asal) ise bu degerleri yazdýr.
	//	Bu sayede asal olmayan sayýlarý iþaretlediðimiz 'd'	olanlar printf komutu ile yazdýrýlmayarak, dizi dýþarýsýnda býraktýk.	
	
	//Soru28:Girilen iki sayý arasýnda bulunan asal sayýlarý listeleyen program.
	int baslangic=0, bitis=0, i=0, n=2;
	char dogrulukkontrolcusu = 'a';
		
	printf("==========Iki Sayi Arasindaki Asal Sayilari Bulma==========\n\n");
	
 	printf("Baslangic Degerini Giriniz:\n");
 	scanf("%d",&baslangic);
 	printf("Bitis Degerini Giriniz:\n");
 	scanf("%d",&bitis);
 	
 	for(i=baslangic;i<bitis;i++)
 	{
 		dogrulukkontrolcusu = 'a';
 		for(n=2;n<i;n++)
 		{
 			if(i%n==0)
			{
				dogrulukkontrolcusu = 'd';	
			}	
		}
		if(dogrulukkontrolcusu == 'a')
		{
			printf(" %d ",i);
		}
	}	
*/



/*
	//!Bosluk mantýðý için yardým alýnmýþtýr.
 	//Soru29:* karakteri piramit oluþturan programý yazýnýz.
  	int i, space, rows, k=0;
    printf("Satir Sayisi : ");
    scanf("%d", &rows);
    for (i=1; i<=rows; ++i,k=0) 
	{
        for (space=1; space<=rows-i; ++space)
        {
		printf("  "); 
		}
		
        while (k!=2*i-1) 
		{
            printf("* ");
            ++k;
        }
        printf("\n");
    } 
*/




	//Soru30:Sayý Piramadi Olusturan Program
	int i=0, j=0, yukseklik=0, bosluk=0;
 	
 	printf("Kac Birim Yuksekliginde Olsun?\n");
 	scanf("%d",&yukseklik);
 	printf("\n");

	for(i=1;i<=yukseklik;i++)
	{	
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}


 	return 0;
 }
