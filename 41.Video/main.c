#include <stdio.h>
#include <stdlib.h>

	enum sehirler
	{
		,Sifirinci,Adana,Adiyaman,Afyon,Agri,Amasya,Ankara,Antalya,Artvin,Aydin,Balikesir,Bilecik,Bingol,Bitlis,Bolu,Burdur,Bursa,Canakkale,Cankiri,Corum,Denizli,Diyarbakir,Edirne,Elazig,Erzincan,Erzurum,Eskisehir,Gaziantep,Giresun,Gumushane,Hakkari,Hatay,Isparta,Mersin,Istanbul,Izmir,Kars,Kastamonu,Kayseri,Kirklareli,Kirsehir,Kocaeli,Konya,Kutahya,Malatya,Manisa,Kahramaras,Mardin,Mugla,Mus,Nevsehir,Nigde,Ordu,Rize,Sakarya,Samsun,Siirt,Sinop,Sivas,Tekirdag,Tokat,Trabzon,Tunceli,Sanliurfa,Usak,Van,Yozgat,Zonguldak,Aksaray,Bayburt,Karaman,Kirikkale,Batman,Sirnak,Bartin,Ardahan,Igdir,Yalova,Karabuk,Kilis,Osmaniye,Duzce
	};

int main() {
	
	// Enum yapýsýnda il deðiþkeni oluþturduk.
	enum sehirler il;
	il=Adana;
	printf("%d",il);
	

	return 0;
}
