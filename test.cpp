
#include <iostream>				//kullan�lan fonksiyonlar i�in iostream k�t�phanesi programa ekleniyor

#include "field.h"				//tarla tipinde nesne olu�turulaca�� i�in bu s�n�f�n dosyas� ekleniyor

using namespace std;			

int main(){

	field a;																//tarla tipinde ilerlemelerin ger�ekle�ece�i alan olu�turuluyor...
	
	a.print();																// matrisin ilk hali yazd�r�l�yor
	
	cout<<"Simulasyon boyunca bir adim ilerlemek icin <enter>a basiniz:";		// kullan�c�n�n entera basmas� isteniyor
	
	int secim;					// bas�lan karakteri tutacak olan integer tipinde secim de�i�keni olu�turuluyor
	
	secim=getchar();			//secim de�i�kenine karakter al�n�yor
	
	while(secim==10)			// enter tu�unun say�sal de�eri 10 dur bu de�er secim de�i�keninin de�eriyle kar��la�t�r�l�yor
	{
			if(a.ilerlet())		// ilerlet fonksiyonu simulasyonu bitiyorsa false devam ediyorsa true d�nd�r�yordu burada hem bir ad�m ilerliyor hem de simulasyonun bitip bitmedi�i kontrol ediliyor
			{
				system("CLS");													// ekran temizleniyor
				
				a.print();														// ekrana matrisin son hali yazd�r�l�yor
				secim=getchar();												// secim de�i�kenine tekrar enter girilmesi bekleniyor...
			}

			else {															// ilerlet fonksiyonunda false d�nd�r�ld�yse 

				cout<<"simulasyon bitti =(";								// simulasyon bitti mesaj� g�sterilir





				return 0;													// ve programdan ��k�l�r
			}

				
			
			if(secim!=10){															// e�er kullan�c� entera basmad�ysa 
						
						cout<<"yanlis secim yaptiniz entera basmaniz gerekiyordu";	//hata mesaj� g�sterilir
						
						return 0;													// ve d�ng�den ��k�larak program bitirilir..
			}
	}//while d�ng�s�n�n sonu

}

