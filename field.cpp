#include "field.h"

bool field::ilerlet(){					// ilerleyebilecek elemanlar�n bir ad�m ilerletilmesi sa�lan�yor

		if(Lamb::acAdimSayisi<50){	//kuzunun ot yemedi�i ad�m say�s�n�n 5 ten k���k olup olmad��� kontrol ediliyor
			bool a=Wolf::ilerlet();	//kurt ilerletiliyor ve bu fonksiyon simulasyonun bitip bitmedi�ini d�nd�rd���nden bir bool de�i�kenine at�l�yor
			Lamb::ilerlet();		//kuzu ilerletiliyor
			
			

			if(a){					//kurdun ilerlet fonksiyonu true d�nd�rm��se 
				print();			//matrisin son hali yazd�r�l�yor
				cout<<" kurt kuzuyu yedi =(";
				return false;		//ve ilerlet fonksiyonu false de�eri d�nd�r�yor yani main fonksiyonunda programdan ��k�l�yor...
			}

			else if(lx==wx&& ly==wy){	// kurt ve kuzu matrisin ayn� eleman�ndaysa 

				print();				//matris yazd�r�l�yor
				cout<<" kurt kuzuyu yedi =(";
				return false;			//false de�eri d�nd�r�l�yor 
			}
			
			else
			return true;				//matrisin durumu yukar�daki if ve else if kontrollerine uymuyorsa kurt kuzuyu yememi� demektir true d�nd�r�l�r yani d�ng� devam ettirilir
		}
		
		else {
			print(); cout<< "kuzu 5 adim boyunca ot yemedi=("; // ac ad�m say�s� 5 ten b�y�kse false d�nd�r�l�r yani main fonksiyonunda programdan ��k�� sa�lan�r
			return false;	//ot yemedi  
		}    

	}