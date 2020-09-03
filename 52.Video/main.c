#include <stdio.h>
#include <stdlib.h>

#define puan 2.19
#define puan2 3.47
#define puan3  2.48
#define puan4 1.75

int main() {
	
	int Turkce, matematik,sosyal,fen;
	float sozelpuan,sayisalpuan,sosyalpuan,fenpuan;
	
	printf("Turkce Netiniz: ");
	scanf("%d",&Turkce);
	
	printf("Matematik Netiniz: ");
	scanf("%d",&matematik);
	
	printf("Sosyal Netiniz: ");
	printf("%d",&sosyal);
	
	printf("Fen Netiniz: ");
	printf("%d",&fen);
	
	
	
	sozelpuan=Turkce*puan+50.25;
	printf("Toplam Puanininz: %5.2f \n",sozelpuan);
	
	sayisalpuan=matematik*puan2+51.45;
	printf("Toplam Puanininz: %5.2f \n",sayisalpuan);
	
	sosyalpuan=sosyal*puan3+50.10;
	printf("Toplam Puaniniz: %5.2f \n"sosyalpuan);
	
	fenpuan=fen*puan4*50.16;
	printf("Toplam Puanininz: %5.2f \n",fenpuan);
	

	return 0;
}
