#include <stdio.h>
#include <stdlib.h>



int main() {
	
	printf("********************");
	printf("\n ");
	printf("**      MENU      **");
	printf("\n");
	printf("********************");
	printf("\n\n");
	printf("1.Toplama Islemi \n");
	printf("2.Cikarma Islemi \n");
	printf("3.Carpma Islemi \n");
	printf("4.Bolme Islemi \n");
	printf("5.Karesini Bul \n");
	printf("6.Kubunu Bul \n");
	
	printf("\n\n");
		
	int islem=0,s1=0,s2=0,sonuc=0;
	printf("Islem Numarasini Giriniz: ");
	scanf("%d",&islem);
	
	switch (islem)
	{
		case 1:
			printf("Toplama Islemini Sectiniz \n");
			printf("Islem yapilacak olan sayilari sirasiyla giriniz:\n");
			scanf("%d%d",&s1,&s2);
			sonuc=s1+s2;
			printf("Toplama Islemi Sonucunuz: %d",sonuc);
			break;
			
		case 2:
			printf("Cikarma Islemini Sectiniz \n");
			printf("Islem yapilacak olan sayilari sirasiyla giriniz:\n");
			scanf("%d%d",&s1,&s2);
			sonuc=s1-s2;
			printf("Cikarma Islemi Sonucunuz: %d",sonuc);
			break;
			
		case 3:
			printf("Carpma Islemini Sectiniz \n");
			printf("Islem yapilacak olan sayilari sirasiyla giriniz:\n");
			scanf("%d%d",&s1,&s2);
			sonuc=s1*s2;
			printf("Carpma Islemi Sonucunuz: %d",sonuc);
			break;
			
		case 4:
			printf("Bolme Islemini Sectiniz \n");
			printf("Islem yapilacak olan sayilari sirasiyla giriniz:\n");
			scanf("%d%d",&s1,&s2);
			sonuc=s1/s2;
			printf("Bolme Islemi Sonucunuz: %d",sonuc);
			break;
			
		case 5:
			printf("Kare Alma Islemini Sectiniz \n");
			printf("Islem yapilacak olan sayiyi giriniz:\n");
			scanf("%d",&s1);
			sonuc=s1*s1;
			printf("Sayinizin Karesi: %d",sonuc);
			break;
			
		case 6:
			printf("Kup Alma Islemini Sectiniz \n");
			printf("Islem yapilacak olan sayiyi giriniz:\n");
			scanf("%d",&s1);
			sonuc=s1*s1*s1;
			printf("Sayinizin Kubu: %d",sonuc);
			break;
			
	}
	
	return 0;
}
