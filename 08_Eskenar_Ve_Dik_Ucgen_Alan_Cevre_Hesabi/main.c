#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
/*		
	//Odev Sorusu:Bir dik üçgenin alan ve çevre hesabýný yapabilen uygulamayý yazýnýz.
		//Bu soruda ilk olarak gerekli olan deðiþkenleri belirler. Taban, yükseklik, sonuçlarý yazdýrmak için alan ve çevre deðiþkenleri olmalý.
	int	taban=0, yukseklik=0, sonkenarkare=0, sonkenar=0, alan=0, cevre=0;
	
	printf("==========Dik Ucgen Icin Alan Ve Cevre Hesaplama Uyg.==========\n\n");
	printf("Taban Olcusunu Giriniz: ");
	scanf("%d",&taban);
	printf("Yukseklik Degerini Giriniz: ");
	scanf("%d",&yukseklik);
	
	//pow komutu üs alma islemini gerçekleþtirir. pow(taban sayi, kaçýncý üstü alanacaðýna dair deger)
	//sqrt komutu ise karakök alma iþlemini gerçekleþtirir. () içerisine karakökü alýnacak olan deðer yazýlýr.
	alan=(taban*yukseklik)/2;
	sonkenarkare=pow(taban,2)+pow(yukseklik,2);
	sonkenar=sqrt(sonkenarkare);
	cevre=sonkenar+taban+yukseklik;
	
	printf("Ucgenin Alani: %d \n",alan);
	printf("Ucgenin Cevresi: %d \n",cevre);
	
	printf("\n===============================================================\n");
*/

	//Eskenar Ucgen Icin Alan Ve Cevre Hesabý
	int kenar=0, alan=0, cevre=0;
	
	printf("\n===========Eskenar Ucgen Alan Ve Cevre Hesabi===========\n");
	printf("Es Kenar Ucgenin Kenarin Olcusunu Giriniz: ");
	scanf("%d",&kenar);
	
	cevre=kenar*3;
	alan=(sqrt(3)/4)*pow(kenar,2);
	
	printf("Eskenar Ucgenin Cevresi:%d \n",alan);
	printf("Eskenar Ucgenin Alani:%d",cevre);
	printf("\n=======================================================\n");

	return 0;
}
