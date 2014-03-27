#include "Wolf.h"

Wolf::Wolf()
	{									//kurt üretiliyor

		srand(time(NULL));					//rastgele sayý üretmek için gerekli olan fonksiyon çaðýrýlýyor
	
		wx=rand()%N;						//kurdun x ve y koordinatlarý rastgele sayýlardan oluþturuluyor
		wy=rand()%N;				
		
			while(matris[wx][wy]=='k'){		// eðer ilk oluþturulan koordinatlarda kuzu varsa, kurt baþka biryerde oluþturuluyor
			wx=rand()%N;				
			wy=rand()%N;
		}
		
	
		matris[wx][wy]='W';					//kurdun oluþturulduðu yere W harfi atanýyor
		
		oncekiChar=' ';						//oncekiChar deðerine ilk olarak ' ' karakteri atanýyor

	}




bool Wolf::ilerlet(){							//yakýnda kuzu varsa kuzuya doðru kuzu yoksa rastgele ilerliyor
											//fonksiyon field classýnda kullanýlmak üzere eðer kurt kuzuyu yiyorsa true rastgele ilerliyorsa false döndürüyor
	
		
		if( matris[wx+1][wy] == 'k' ){		// +x yönünde bir adým ilerde 'k' karakteri varsa

			matris[wx][wy]=oncekiChar;		// kurdun olduðu yer eski haline getirilir
			
			wx++;							//kurdun x koordinatý bir artýrýlýr
			matris[wx][wy]='W';				//kurdun yeni yerine 'W' karakteri yazýlýr
			
			return true;					//fonksiyon true döndürür yani kurt kuzuyu yer
		}
		
		else if(matris[wx-1][wy]=='k'){		//bu ve aþþadýðaki iki else if durumu yukarýdaki gibidir...
			
			matris[wx][wy]=oncekiChar;		
			wx--;
			matris[wx][wy]='W';
			
			return true;
		}
		
		else if(matris[wx][wy+1]=='k'){
			matris[wx][wy]=oncekiChar;
			wy++;
			matris[wx][wy]='W';
			
			return true;
		}
		
		else if(matris[wx][wy-1]=='k'){
			matris[wx][wy]=oncekiChar;
			wy--;
			matris[wx][wy]='W';
			
			return true;
		} 


		 else if((wx+1)==N){				//matris sýnýrý  ölçülüyor
			
			matris[wx][wy]=oncekiChar;		//kurdun bulunduðu yer eski haline getiriliyor

			oncekiChar=matris[wx-1][wy];	//kurdun ilerleyeceði yerde bulunan karakter kaydediliyor
			
			wx--;							//kurt matrisin en alt satýrýnda bulunduðundan matris bir üst satýra geçiriliyor
			matris[wx][wy]='W';				//kurdun yeni yerine 'W' karakteri atanýyor

			return false;					// wolf yukarýdaki else if leri geçip buraya geldiyse kuzu yememiþ demektir bu yüzden false döndürülür
			
		}
		
		else if((wx-1)==-1){				//bu ve sonraki iki else if koþulu yukarýdakiyle benzerdir matrisin diðer kenarlarýnýn aþýlýp aþýlmadýðý kontrol ediliyor
			matris[wx][wy]=oncekiChar;
			oncekiChar=matris[wx+1][wy];
			wx++;
			matris[wx][wy]='W';
			return false;
		}
		
		else if((wy-1)==-1)
		{	
			matris[wx][wy]=oncekiChar;
			oncekiChar=matris[wx][wy+1];
			wy++;
			matris[wx][wy]='W';
			return false;
			
		}
		
		else if((wy+1)==N)
		{	matris[wx][wy]=oncekiChar;
			oncekiChar=matris[wx][wy-1];
			wy--;
			matris[wx][wy]='W';
			return false;
			
		}
	
		
		else {									//kurdun bulunduðu konum yukarýdaki koþullardan hiçbirine uymuyorsa 
			matris[wx][wy]=oncekiChar;			//bulunduðu yer eski haline getirilir
			
			int a=rand()%4;						//kurdun rastgele gitmesi için 0,1,2,3 sayýlarýndan biri oluþturulur
			
			if(a==0){								//oluþturulan deðer sýfýrsa 
				oncekiChar=matris[wx+1][wy];		//kurdun gideceði yerdeki karakter kaydedilir 
				wx++;								//kurt +x yönünde bir adým ilerler 
				matris[wx][wy]='W';					//kurdun yeni yerine 'W' karakteri atanýyor
			
			}

			else if(a==1){							//oluþturulan deðer birse
				oncekiChar=matris[wx-1][wy];
				wx--;								//kurt -x yönünde bir adým ilerler
				matris[wx][wy]='W';
			}
			
			else if(a==2){							//oluþturulan deðer ikiyse
				oncekiChar=matris[wx][wy+1];
				wy++;								//+y yönünde bir adým ilerler
				matris[wx][wy]='W';
			}
			
			else if(a==3){							//oluþturulan deðer üçse
				oncekiChar=matris[wx][wy-1];
				wy--;								//-y yönünde bir adým ilerler
				matris[wx][wy]='W';
			}
			
		return false; //kurt rastgele ilerlemeye kadar geldiyse kuzu yememiþ demektir ve false döndürülür
		
		}//else bitti
		
		
	}//ilerlet fonksiyonu bitti
