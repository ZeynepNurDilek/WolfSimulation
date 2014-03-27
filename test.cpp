
#include <iostream>				//kullanýlan fonksiyonlar için iostream kütüphanesi programa ekleniyor

#include "field.h"				//tarla tipinde nesne oluþturulacaðý için bu sýnýfýn dosyasý ekleniyor

using namespace std;			

int main(){

	field a;																//tarla tipinde ilerlemelerin gerçekleþeceði alan oluþturuluyor...
	
	a.print();																// matrisin ilk hali yazdýrýlýyor
	
	cout<<"Simulasyon boyunca bir adim ilerlemek icin <enter>a basiniz:";		// kullanýcýnýn entera basmasý isteniyor
	
	int secim;					// basýlan karakteri tutacak olan integer tipinde secim deðiþkeni oluþturuluyor
	
	secim=getchar();			//secim deðiþkenine karakter alýnýyor
	
	while(secim==10)			// enter tuþunun sayýsal deðeri 10 dur bu deðer secim deðiþkeninin deðeriyle karþýlaþtýrýlýyor
	{
			if(a.ilerlet())		// ilerlet fonksiyonu simulasyonu bitiyorsa false devam ediyorsa true döndürüyordu burada hem bir adým ilerliyor hem de simulasyonun bitip bitmediði kontrol ediliyor
			{
				system("CLS");													// ekran temizleniyor
				
				a.print();														// ekrana matrisin son hali yazdýrýlýyor
				secim=getchar();												// secim deðiþkenine tekrar enter girilmesi bekleniyor...
			}

			else {															// ilerlet fonksiyonunda false döndürüldüyse 

				cout<<"simulasyon bitti =(";								// simulasyon bitti mesajý gösterilir





				return 0;													// ve programdan çýkýlýr
			}

				
			
			if(secim!=10){															// eðer kullanýcý entera basmadýysa 
						
						cout<<"yanlis secim yaptiniz entera basmaniz gerekiyordu";	//hata mesajý gösterilir
						
						return 0;													// ve döngüden çýkýlarak program bitirilir..
			}
	}//while döngüsünün sonu

}

