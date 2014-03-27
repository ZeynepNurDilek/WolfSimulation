#include "Wolf.h"

Wolf::Wolf()
	{									//kurt �retiliyor

		srand(time(NULL));					//rastgele say� �retmek i�in gerekli olan fonksiyon �a��r�l�yor
	
		wx=rand()%N;						//kurdun x ve y koordinatlar� rastgele say�lardan olu�turuluyor
		wy=rand()%N;				
		
			while(matris[wx][wy]=='k'){		// e�er ilk olu�turulan koordinatlarda kuzu varsa, kurt ba�ka biryerde olu�turuluyor
			wx=rand()%N;				
			wy=rand()%N;
		}
		
	
		matris[wx][wy]='W';					//kurdun olu�turuldu�u yere W harfi atan�yor
		
		oncekiChar=' ';						//oncekiChar de�erine ilk olarak ' ' karakteri atan�yor

	}




bool Wolf::ilerlet(){							//yak�nda kuzu varsa kuzuya do�ru kuzu yoksa rastgele ilerliyor
											//fonksiyon field class�nda kullan�lmak �zere e�er kurt kuzuyu yiyorsa true rastgele ilerliyorsa false d�nd�r�yor
	
		
		if( matris[wx+1][wy] == 'k' ){		// +x y�n�nde bir ad�m ilerde 'k' karakteri varsa

			matris[wx][wy]=oncekiChar;		// kurdun oldu�u yer eski haline getirilir
			
			wx++;							//kurdun x koordinat� bir art�r�l�r
			matris[wx][wy]='W';				//kurdun yeni yerine 'W' karakteri yaz�l�r
			
			return true;					//fonksiyon true d�nd�r�r yani kurt kuzuyu yer
		}
		
		else if(matris[wx-1][wy]=='k'){		//bu ve a��ad��aki iki else if durumu yukar�daki gibidir...
			
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


		 else if((wx+1)==N){				//matris s�n�r�  �l��l�yor
			
			matris[wx][wy]=oncekiChar;		//kurdun bulundu�u yer eski haline getiriliyor

			oncekiChar=matris[wx-1][wy];	//kurdun ilerleyece�i yerde bulunan karakter kaydediliyor
			
			wx--;							//kurt matrisin en alt sat�r�nda bulundu�undan matris bir �st sat�ra ge�iriliyor
			matris[wx][wy]='W';				//kurdun yeni yerine 'W' karakteri atan�yor

			return false;					// wolf yukar�daki else if leri ge�ip buraya geldiyse kuzu yememi� demektir bu y�zden false d�nd�r�l�r
			
		}
		
		else if((wx-1)==-1){				//bu ve sonraki iki else if ko�ulu yukar�dakiyle benzerdir matrisin di�er kenarlar�n�n a��l�p a��lmad��� kontrol ediliyor
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
	
		
		else {									//kurdun bulundu�u konum yukar�daki ko�ullardan hi�birine uymuyorsa 
			matris[wx][wy]=oncekiChar;			//bulundu�u yer eski haline getirilir
			
			int a=rand()%4;						//kurdun rastgele gitmesi i�in 0,1,2,3 say�lar�ndan biri olu�turulur
			
			if(a==0){								//olu�turulan de�er s�f�rsa 
				oncekiChar=matris[wx+1][wy];		//kurdun gidece�i yerdeki karakter kaydedilir 
				wx++;								//kurt +x y�n�nde bir ad�m ilerler 
				matris[wx][wy]='W';					//kurdun yeni yerine 'W' karakteri atan�yor
			
			}

			else if(a==1){							//olu�turulan de�er birse
				oncekiChar=matris[wx-1][wy];
				wx--;								//kurt -x y�n�nde bir ad�m ilerler
				matris[wx][wy]='W';
			}
			
			else if(a==2){							//olu�turulan de�er ikiyse
				oncekiChar=matris[wx][wy+1];
				wy++;								//+y y�n�nde bir ad�m ilerler
				matris[wx][wy]='W';
			}
			
			else if(a==3){							//olu�turulan de�er ��se
				oncekiChar=matris[wx][wy-1];
				wy--;								//-y y�n�nde bir ad�m ilerler
				matris[wx][wy]='W';
			}
			
		return false; //kurt rastgele ilerlemeye kadar geldiyse kuzu yememi� demektir ve false d�nd�r�l�r
		
		}//else bitti
		
		
	}//ilerlet fonksiyonu bitti
