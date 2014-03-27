#include "field.h"

bool field::ilerlet(){					// ilerleyebilecek elemanlarýn bir adým ilerletilmesi saðlanýyor

		if(Lamb::acAdimSayisi<50){	//kuzunun ot yemediði adým sayýsýnýn 5 ten küçük olup olmadýðý kontrol ediliyor
			bool a=Wolf::ilerlet();	//kurt ilerletiliyor ve bu fonksiyon simulasyonun bitip bitmediðini döndürdüðünden bir bool deðiþkenine atýlýyor
			Lamb::ilerlet();		//kuzu ilerletiliyor
			
			

			if(a){					//kurdun ilerlet fonksiyonu true döndürmüþse 
				print();			//matrisin son hali yazdýrýlýyor
				cout<<" kurt kuzuyu yedi =(";
				return false;		//ve ilerlet fonksiyonu false deðeri döndürüyor yani main fonksiyonunda programdan çýkýlýyor...
			}

			else if(lx==wx&& ly==wy){	// kurt ve kuzu matrisin ayný elemanýndaysa 

				print();				//matris yazdýrýlýyor
				cout<<" kurt kuzuyu yedi =(";
				return false;			//false deðeri döndürülüyor 
			}
			
			else
			return true;				//matrisin durumu yukarýdaki if ve else if kontrollerine uymuyorsa kurt kuzuyu yememiþ demektir true döndürülür yani döngü devam ettirilir
		}
		
		else {
			print(); cout<< "kuzu 5 adim boyunca ot yemedi=("; // ac adým sayýsý 5 ten büyükse false döndürülür yani main fonksiyonunda programdan çýkýþ saðlanýr
			return false;	//ot yemedi  
		}    

	}