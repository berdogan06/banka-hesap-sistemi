banka-hesap-sistemi
===================
#include<stdio.h>//Temel giriş çıkış elemanlarını kullanmamızı sağlayan kütüphane
#include<stdlib.h>//Bu kütüphaneyi system("pause") kodu için kullandım
#include<math.h>//Matematiksel ve aritmetik işlemleri yapmamızı sağlayan kütüphane
#include<Windows.h>//Sleep ve system(cls) kodları için kullandım

int main() 
{
	int secim1, secim2, hesapnumarasi=1905314, sifre=6634, yatırma=0, cekme=0, bakiye_1905314=2500, gonderme=0, hesapno=1234567, hatalı;

	
	while(1) // İlk menüye dönmek için şartsız döngü.
	{
	printf("\t\t\t        TURKIYE BARIS BANKASI \n\n");
	printf("\t\t\t             ANA MENU\n\n");
	printf("1- GIRIS\n");
	printf("2- CIKIS\n\n");

	printf("Secim<1-2>: ");
	scanf("%d", &secim1);

	if(secim1!=1 && secim1!=2) // 1 ve 2'den farklı giriş yapıldığında uyarı mesajı.
	{
		printf("Hatali giris yaptiniz. Lutfen tekrar deneyiniz..\a\n");
	}
		switch(secim1)
	{
	case 1: // giriş seçeneği seçildiyse
		system("CLS"); // ekranı temizleyen kod
		
		for(hatalı=1;hatalı<=3;) // 3 yanlış giriş hakkı
		{
			printf("Lutfen Hesap Bilgilerinizi Giriniz:\n\n");
			printf("HESAP NUMARASI: ");
			scanf("%d", &hesapnumarasi);
			printf("SIFRE: ");
			scanf("%d", &sifre);

			printf("\nBilgiler kontrol ediliyor. . .");
			printf("\n\n");
		
		if((hesapnumarasi==1905314 && sifre==6634))
		{
			system("CLS");//ekranı temizleyen kod

			do
			{
				if(hesapnumarasi=1905314)
         	printf("\t\t\t        TURKIYE BARIS BANKASI \n");
			printf("\t\t\t  BANKAMIZA HOSGELDINIZ SN.RECEP EROL \n");
		
		    printf("\t\t\t        BANKA ISLEMLERI MENUSU\n\n");
			printf("1=> PARA YATIRMA\n");
			printf("2=> PARA CEKME\n");
			printf("3=> BAKIYE GORUNTULEME\n");
			printf("4=> PARA GONDERME\n");
			printf("5=> OTURUMU KAPAT\n\n");
		
			printf("Secim<1-5>: ");
			scanf("%d", &secim2);
		
			if(secim2!=1 && secim2!=2 && secim2!=3 && secim2!=4 && secim2!=5) // 1,2,3,4,5'den farklı seçim yapıldığında uyarı mesajı
			{
				printf("Hatali giris yaptiniz. Lutfen tekrar deneyiniz..\a\n");
			}

			switch(secim2)
			{
			case 1: // para yatırma
				printf("Yatiracaginiz Para Miktari (TL): ");
				scanf("%d", &yatırma);
					if(hesapnumarasi=1905314)
					{
						bakiye_1905314 = bakiye_1905314 + yatırma;
						printf("\nHesabiniza %d TL yatiriliyor. . .\n", yatırma);
						Sleep(1500);//ekrandaki yazıyı 1.5 saniye bekletir
						printf("Isleminiz onaylandi.\n");
						printf("Mevcut Bakiye: %d TL.\n\n", bakiye_1905314);
						break;
					}
		
					
			case 2: // para çekme
				printf("Cekeceginiz Para Miktari -TL-: ");
				scanf("%d", &cekme);
					if(hesapnumarasi=1905314 && cekme<=bakiye_1905314)
					{
						bakiye_1905314 -= cekme;
						printf("\nHesabinizdan %d TL cekiliyor. . .\n", cekme);
						Sleep(1500);//ekrandaki yazıyı 1.5 saniye bekletir
						printf("Isleminiz onaylandi.\n");
						printf("Kalan Bakiye: %d TL.\n\n", bakiye_1905314);
						break;
					}
									
				
					else if(cekme>bakiye_1905314) // çekmek istenilen miktar mevcut bakiyeden büyükse uyarı mesajı.
					{
								printf("\nHesabinizdan %d TL cekiliyor. .\n", cekme);
								Sleep(1500);//ekrandaki yazıyı 1.5 saniye bekletir
								printf("\nBakiye yetersiz! \a\n");
								printf("Uzgunuz isleminiz gercekleştirilemedi..\n\n");
								Sleep(500);//ekrandaki yaziyi 0.5 saniye bekletir
								break;
					}
			
			case 3: // bakiye görüntüleme
				if(hesapnumarasi=1905314)
					printf("Mevcut Bakiyeniz: %d TL.\n\n", bakiye_1905314);
			
					
				break;

			case 4: // para gonderme

				printf("Para gondermek istediginiz hesap numarasi:");
				scanf("%d", &hesapno);
				printf("\nHesap kontrol ediliyor. . .\n");
				Sleep(2500);//ekrandaki yazıyı 2.5 saniye bekletir
				
				if(hesapno!=1234567) // eğer başka hesap numarası girilirse
			{
				printf("Hatali giris yaptiniz. Lutfen gireceginiz hesap numarasini kontrol ediniz..\a\n\n");
	            Sleep(2500);//ekrandaki yazıyı 2.5 saniye bekletir
				break;
			}

                if(hesapnumarasi=1905314) // eğer hesap numarası doğru ise

				printf("\nHesap Sahibi : Baris Erdogan");
			    printf("\n\n");
				Sleep(1500);//ekrandaki yazıyı 2.5 saniye bekletir
			    
				if(hesapno=1234567);
			
				{
					printf("Gondereceginiz para miktari -TL-:");
				scanf("%d", &gonderme);
				if(hesapnumarasi=1905314 && gonderme<=bakiye_1905314)
				{
					bakiye_1905314 -= gonderme;
					printf("\nHesabinizdan %d TL gonderiliyor. . .\n", gonderme);
						Sleep(1500);//ekrandaki yazıyı 1.5 saniye bekletir
						printf("Isleminiz onaylandi.\n");
						printf("Kalan Bakiye: %d TL.\n\n", bakiye_1905314);
						break;
				}}

			   if(gonderme>bakiye_1905314) // gondermek istenilen miktar mevcut bakiyeden büyükse uyarı mesajı.
					{
								printf("\nHesabinizdan %d TL gonderiliyor. .\n", gonderme);
								Sleep(1500);//ekrandaki yazıyı 1.5 saniye bekletir
								printf("\nBakiyeniz yetersiz! \a\n");
								printf("Uzgunuz isleminiz gerceklestirilemedi..\n\n");
								Sleep(500);//ekrandaki yazıyı 0.5 saniye bekletir
								break;
					}

			case 5: // oturum kapatma
				printf("Oturumunuz Kapatiliyor. . .");
				Sleep(2000);//ekrandaki yazıyı 2 saniye bekletir
				system("CLS");//ekranı temizleyen kod
				break;
			}
			}
			while(secim2!=5);
			
			break;
		}
		}
		if (hatalı==4) // 4 kere hatalı giriş yapınca menüye geri döndür.
		{
					printf ("3 yanlis giris yaptiniz. Oturum acma menusune geri yonlendiriliyorsunuz..\a");
					Sleep(2500);//ekrandaki yazıyı 2.5 saniye bekletir
					system("CLS");//ekrandaki yazıyı temizleyen kod
					
					break;
		}
		break;
	
	case 2: // çıkış mesajı
		printf("\nGULE GULE SN.RECEP EROL. BARIS BANKASI IYI GUNLER DILER. \n\n");
		Sleep(2000);//ekrandaki yazıyı 2 saniye bekletir
		break;
	}
	if(secim1==2) // ilk menüde çıkış seçilirse direk çık.
		return 0;
	}
	system("pause");
	return 0;
}


