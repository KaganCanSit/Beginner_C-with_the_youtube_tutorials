#include <stdio.h>
#include <stdlib.h>


int main() {

/*	
	//Soru31:Kuulanýcý negatif bir sayý girene kadar kullanýcýdan sayý girmesini isteyen ve negatif sayý girildiðinde ekrana yazdýran program.
	int sayi=0;
	
	while(sayi>=0)		
	{
		printf("Sayi Degeri Giriniz: ");
		scanf("%d",&sayi);
	}
	printf("Tebrikler, dongu kirildi! %d Sayi Degeri Negatif Bir Degerdir.",sayi);
*/
	
	
/*	
	//Soru32:Kullanýcý istediði sürece yeniden çalýþan basit hesap makinesi uygulamasý yazýnýz.
	int sayi1=0, sayi2=0, sonuc=0;
	char islem, cevap;
	
	yeniden:
	
	printf("Isleminizi (+,-,/,*) seciniz: ");
	scanf("%s",&islem);
	
	printf("Islemin gerceklesecegi sayilari giriniz.\n");
	printf("1.Sayi: ");
	scanf("%d",&sayi1);
	printf("2.Sayi: ");
	scanf("%d",&sayi2);
	
	
	switch(islem)
	{
		case '+':
			sonuc=sayi1+sayi2;
			printf("Toplama Islemi Sonucunuz:%d\n",sonuc);
			break;
		case '-':
			sonuc=sayi1-sayi2;
			printf("Cikarma Islemi Sonucunuz:%d\n",sonuc);
			break;
		case '/':
			sonuc=sayi1/sayi2;
			printf("Bolme Islemi Sonucunuz:%d\n",sonuc);
			break;
		case '*':
			sonuc=sayi1*sayi2;
			printf("Carpma Islemi Sonucunuz:%d\n",sonuc);
			break;
		default:
		{
			printf("Yanlis Islem Secimi Yaptýnýz. Karakteri Kontrol Ediniz.\n\n");
			goto yeniden;
		}
	}		
	printf("Yeniden Islem Yapmak Istermisiniz?(e/h)\n");
	scanf("%s",&cevap);
	if(cevap=='e' || cevap=='E')
	{
		goto yeniden;
	}
	else
	{
		printf("Tesekkur Ederiz.");
	}	
*/



/*	
	//Soru33:Girilen bir sayýdaki rakamlarýn toplamýný bulan program.
	int sayi=0, birler=0, toplam=0;
	
	printf("Sayi Degeri Giriniz: ");
	scanf("%d",&sayi);
	
 	while( sayi > 0 )
 	{
 		birler = sayi%10;
 		toplam = toplam + rakam;
 		sayi = sayi/10;
	}
 
 	printf("\nGirilen Degerin Rakamlari toplami %i",toplam);
*/	



/*
	//Soru34:Girilen bir sayinin “mükemmel sayi” olup olmadýðýný bulan program.

	//MÜKEMMEL SAYI NEDÝR? 
	//Kendisi hariç bütün pozitif bölenlerinin toplamý kendisine eþit olan sayýlara mükemmel sayý denir. 6 bir mükemmel sayýdýr. 
	//Çünkü 6'nýn pozitif bölenleri 1,2,3 ve 6'dýr. Kendisi hariç diðer bölenlerini toplarsak 1+2+3=6 eder.
	//Kaynak : http://www.bilimist.com/blog-41/mukemmel-sayilar-nedir-.html

	int sayi=0, i=0, toplam=0;
	
	printf("\n==========Mukemmel Sayi Kontrolu==========\n");
	
	printf("Kontrol Edilecek Olan Sayi Degerini Giriniz: \n"),
	scanf("%d",&sayi);
	
	for(i=1;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			toplam=toplam+i;
		}
	}
	if(sayi==toplam)
	{
		printf("Sayi Mukemmel Sayidir.");
	}
	else
	{
		printf("Sayi Mukemmel Sayi Degildir.");
	}
*/	



/*
	//!Bu soruda yardým alýnmýþtýr.
	//Soru35:Girilen bir sayý asal sayý ise, bundan sonraki 10 asal sayýyý da listeleyen program.
	int sayi=0, n=0, sayac=0;
	char asal = 'E';
 
 
	printf("\n Bir sayi giriniz: ");
 	scanf("%d",&sayi);
 
 	for(n=2;n<sayi;n++)
 	{
  		if(sayi%n==0)
  		{
   			asal='H';
   			break;
  		}
 	}
 
 	if(asal=='E' )
 	{
  		printf("\n %d asal sayisindan sonraki 10 asal sayi",sayi);
  		sayi= sayi + 1;
 
		while(sayac < 10)
  		{
   			asal = 'E';

   			for(n=2;n<sayi;n++)
	   		{
   				if(sayi%n==0)
    			{
     				asal = 'H';
     				break;
    			}
   			}
   			
   		if(asal=='E')
   		{
    		printf("%d\t",sayi);
    		sayac++;
   		}
 
   		sayi++;
  		}
	}
 	else
 	{
 	printf("\n %i asal sayi degildir.",sayi);
	}
*/



/*	
	//Soru36:Kullanýcýnýn vereceði sayýda öðrencinin puanlarýný sorarak bu puanlarýn toplamýný ve ortalamasýný bulan program.
	int ogrencisayisi=0, vize=0, final=0, ortalama=0, toplam=0, i=1;
	
	printf("Kac Adet Ogrenci Bilgisi Giriceksiniz: ");	
	scanf("%d",&ogrencisayisi);
	
	for(i=1;i<=ogrencisayisi;i++)
	{
		
		printf("\n========================================\n");
		
		printf("\n%d.Ogrencinin Vize Notu: ",i);
		scanf("%d",&vize);
		printf("%d.Ogrencinin Final Notu: ",i);
		scanf("%d",&final);
		
		ortalama= (vize* 0.4)+(final*0.6);
		toplam=vize+final;
		
		printf("%d.Ogrencinin Ortalamasi:%d\n",i,ortalama);
		printf("%d.Ogrencinin Puanlari Toplami:%d\n",i,toplam);
		printf("\n========================================\n");
	}
*/


	
/*	
	//Soru37:Girilen 10 sayý içerisinde en büyük ve en küçük olan sayýlarý bulan program.
	int sayi[10], i=0, kucuk=200, buyuk=0;
	
	for(i=0;i<10;i++)
	{
		printf("Sayi Degeri Giriniz: ");
		scanf("%d",&sayi[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(sayi[i]<kucuk)
		{
			kucuk=sayi[i];
		}
		if(sayi[i]>buyuk)
		{
			buyuk=sayi[i];
		}
	}
	
	
	printf("\n\nDizide Bulanan En Kucuk Sayi: %d\n",kucuk);
	printf("Dizide Bulanan En Buyuk Sayi: %d\n",buyuk);
*/	
		


/*
	//Soru38:Kullanýcýnýn girdiði 5 sayýyý büyükten küçüðe doðru sýralayýp listeleyen program
	int sayi[5], i=0, j=0, degistirme=0;
	
	for(i=0;i<5;i++)
	{
		printf("Bir Sayi Giriniz: ");
		scanf("%d",&sayi[i]);
	}

	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(sayi[i]>sayi[j])
			{
				degistirme=sayi[i];
				sayi[i]=sayi[j];
				sayi[j]=degistirme;
			}			
		}
	}
	
	printf("\n========== Siralama ==========\n\n");
	for(i=0;i<5;i++)
	{
		printf("%d \n",sayi[i]);
	}
	printf("\n========== ======== ==========\n");
*/
		


/*
	//Soru39:10 tane sayýnýn çift, tek ve asal olanlarýný ayrý ayrý listeleyen program.
	int sayidizi[10], i=0, j=0;
	char asal = 'h';
	
	for(i=0;i<10;i++)
	{
		printf("Sayi Degerini Giriniz: ");
		scanf("%d",&sayidizi[i]);
	}
	
	
	printf("\n========== Cift Sayilar ==========\n\n");
	
	for(j=0;j<10;j++)
	{	
		if(sayidizi[j]%2==0)
		{
			printf("%d sayisi cifttir.\n",sayidizi[j]);
		}
	}
	
		printf("\n========== Tek Sayilar ==========\n\n");
	
	for(j=0;j<10;j++)
	{	
		if(sayidizi[j]%2!=0)
		{
			printf("%d sayisi tektir.\n",sayidizi[j]);
		}
	}
	
		printf("\n========== Asal Sayilar ==========\n\n");
	
	for(j=0;j<10;j++)
	{
		asal ='e';
		for(i=2;i<sayidizi[j];i++)
		{
			if(sayidizi[j]%i==0)
			{
				asal = 'h';
			}
		}
		
		if(asal == 'e')
		{
			printf("%d sayisi asaldir.\n",sayidizi[j]);
		}
	}
*/



/*	
	//Soru40:Bir dizi içerisinde verilen sayýlar arasýndan aranan bir sayýyý bulan program.
	int aranan=0, i=0;
	int dizi[10]={41,78,59,49,62,11,27,1,8,66};
	char aranandeger='e';
	
	yeniden:
	
	printf("Aradiginiz Sayi Degerini Giriniz: ");
	scanf("%d",&aranan);
	
	for(i=0;i<10;i++)
	{
		aranandeger='h';
		if(dizi[i]==aranan)
		{
			aranandeger='e';
			break;
		}
	}
	if(aranandeger=='e')
	{
		printf("Girmis Oldugunuz Deger Sayi Dizisi Icerisinde Mevcut. \n");
		printf("Aranan Sayi:%d - Dizinin %d. Elemani \n",aranan,i+1);	
	}
	else
	{
		printf("Aradiginiz Deger Sayi Dizisi Icerisinde Bulunmuyor. Yeniden deneyiniz.\n");
		goto yeniden;
	}
*/			

	

/*	
	//Soru41:5 öðrencinin boylarýný ve kilolarýný sorarak boy ve kilo ortalamasýný bulan program.
	int boy[5], kilo[5], i=0, boytoplam=0, kilotoplam=0, ortboy=0, ortkilo=0;
	
	for(i=0;i<5;i++)
	{
		printf("%d. Ogrencinin Boyunu Giriniz: ",i+1);
		scanf("%d",&boy[i]);
		printf("%d. Ogrencinin Kilosunu Giriniz: ",i+1);
		scanf("%d",&kilo[i]);
	}
	
	for(i=0;i<5;i++)
	{
		boytoplam=boytoplam+boy[i];
		kilotoplam=kilotoplam+kilo[i];
	}
	
	ortboy=boytoplam/5;
	ortkilo=kilotoplam/5;
	
	printf("\n\n================================\n");
	printf("Ogrencilerin Boy Ortalamasi:%d\n",ortboy);
	printf("Ogrenciler Kilo Ortalamasi:%d",ortkilo);	
	printf("\n================================\n");
*/



/*
	//Soru42:Kullanýcýnýn gireceði 5 sayýyý kullanýcýnýn istediði düzende sýralayýp ekrana listeleyen program.
	int sayi[5], i=0, j=0, araci=0;
	int secim;
	
	printf("=============================\n\n");
	
	for(i=0;i<5;i++)
	{
		printf("Sayi Giriniz: ");
		scanf("%d",&sayi[i]);
	}
	
	printf("\n=============================");
	
	printf("\n\n");
	printf("Sayilari Siralamak Istediginiz Duzeni Seciniz.\n");
	printf("Kucuge Buyukten Icin 1, Buyukten Kucuge Icin 2 Yaziniz: ");
	scanf("%d",&secim);
	
	if(secim == 1)
	{
		for(i=0;i<5;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(sayi[i]>sayi[j])
				{
					araci=sayi[i];
					sayi[i]=sayi[j];
					sayi[j]=araci;
				}
			}
		}
	}
	
	if(secim == 2)
	{
		for(i=0;i<5;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(sayi[i]<sayi[j])
				{
					araci=sayi[i];
					sayi[i]=sayi[j];
					sayi[j]=araci;
				}
			}
		}
	}
	
	printf("\n========= Siralama =========\n");
	
	for(i=0;i<5;i++)
	{
		printf("\n %d",sayi[i]);
	}
		
	printf("\n\n============================\n");
*/



/*
	//Yardým alýnmýþtýr!
	//Soru43:Girilen sayýnýn hangi aralýkta olduðunu binary arama metodu ile bulan program.
	
	//Binary Search çalýþma zamaný olarak Linear Search’den daha iyidir. Her iterasyonda arama uzayýný yarýya indirmek üzere tasarlanmýþtýr. Öncelikle dizinin ortasýndaki deðeri aranan deðer ile karþýlaþtýrýr.
	//Eðer aranan deðer ortanca deðerden küçükse dizinin ikinci yarýsýný görmezden gelerek ilk yarýsýnda aramaya devam eder. Daha sonra tekrar ilk yarýnýn ortanca deðeri ile karþýlaþtýrýr.
	//Eðer aranan deðer ortanca deðerden küçükse sol yarý, büyükse sað yarý ile devam eder. Bu þekilde aranan deðeri bulana kadar sürer. Aranan deðer ilk iterasyonda da bulunabilir son iterasyonda da.
	//Ancak Linear Search’den farklý olarak her bir elemaný gezmediði için aranan deðeri daha hýzlý bulacaktýr. Ýki algoritmanýn karþýlaþtýrmasýný aþaðýda görebilirsiniz. Aralarýnda ciddi bir hýz farký bulunuyor.
	
	int sayi[10]={3,14,25,36,44,47,66,85,96,101};
	int aralik=0, gbasi=0, gsonu=0, aranan=0;
	char bulundu='h';
	
	printf("Aradiginiz Degeri Giriniz: ");
	scanf("%d",&aranan);
	
	 while( gbasi <= gsonu && bulundu == 'h' )
 	{
  		aralik = (gbasi+gsonu)/2;
 
  		if( sayi[aralik] == aranan )
  		{
    		bulundu == 'e';
		}
  		else if( sayi[aralik] > aranan )
  		{
  			gsonu =aralik -1;	
		}
   		else if( sayi[aralik] < aranan )
   		{
   			gbasi = aralik + 1;	
		}
 
  		printf("\n Grup %i : %i",aralik,sayi[aralik]);
 	}
 
	printf("\n%i. grup icinde.",aralik);
*/	
	

/*
	//Soru44:3*3'lük bir matrisin degerlerini kullanýcýya soran ve matrisi ekrana yazdýran program.
	int matris[3][3], i=0, j=0;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Sayi Degerini Giriniz: ");
			scanf("%d",&matris[i][j]);
		}
	}
	
	printf("\n========= Matris Degerleriniz =========\n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",matris[i][j]);
		}
		printf("\n");
	}
	
	printf("\n========================================\n");
*/



	
	//Soru45:Kullanýcýnýn gireceði iki adet 3*3'lük bir matrisin toplamýný ekrana yazdýran program.
	int matris[3][3], matris2[3][3], toplam[3][3], i=0, j=0, tekrar=0;
	
	yeniden:
	
	printf("\n\n 1.Matris \n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Sayi Degerini Giriniz: ");
			scanf("%d",&matris[i][j]);
		}
	}
	
	printf("\n\n 2.Matris \n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Sayi Degerini Giriniz: ");
			scanf("%d",&matris2[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			toplam[i][j]=matris[i][j]+matris2[i][j];
		}
		printf("\n");
	}
	
	
	printf("\n=========== Matrislerin Toplam Degerleri =========\n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",toplam[i][j]);
		}
		printf("\n");
	}
	
	printf("\n==================================================\n");
	
	printf("Yeni Bir Islem Yapmak Ister Misiniz?(Evet = 1 / Hayýr = 0)");
	scanf("%d",&tekrar);
	if(tekrar==1)
	{
		goto yeniden;
	}
	else
	{
		printf("Isleminiz Sonlanmistir. Tesekkür Ederiz.");	
	}

	
	return 0;
}
