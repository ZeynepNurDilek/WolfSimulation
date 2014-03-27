#include "base.h"

base::~base()
	{
	for(int i = 0; i<N ; i++)
		for(int j=0 ; j<N ; j++)
			matris[i][j]=NULL;
	}

base::base()
	{									//yaln�zca otlar ve matris �retiliyor
			srand(time(NULL));
			
			for(int i=0;i<N;i++){				//matrisin sat�rlar� i�in d�ng� 
					
				for(int j=0;j<N;j++){			//matrisin s�tunlar� i�in d�ng� 
						
						if(rand()%2)			 //0 ve 1 say�s�ndan biri rastgele �retiliyor 
								matris[i][j]='*'; // if in i�inde 1 �retildiyse matrisin i. sat�r j. s�tununa '*' karakteri atan�yor
						else	
								matris[i][j]=' '; // ifin i�inde 0 �retildiyse matrisin i.sat�r j. s�tununa ' ' karakteri atan�yor

				}//s�tun d�ng�s�n�n sonu
			}//sat�r d�ng�s�n�n sonu
	}//base constructor�n�n sonu


void base::print()
		{									// matrisi ekrana yazd�racak fonksiyon
				
				for(int i=0;i<N;i++){					//matrisin sat�rlar�nda ilerlemeyi sa�layan for d�ng�s�
					
						for(int j=0;j<N;j++){				//matrisin s�tunlar�nda ilerlemeyi sa�layan for d�ng�s� 
				
							cout<<matris[i][j]<<" ";		//i. sat�r j. s�tunun yazd�r�lmas� 
														//" " ifadesi matrisin daha a��k ve orant�l� g�r�nmesi i�in s�tun aralar�nda bir bo�luk b�rakmak i�in konmu�tur
						}//s�tun d�ng�s�n�n sonu  
					
					cout<<endl;							// bir s�tun bitti�inde alt sat�ra ge�ilir
				
				}//sat�r d�ng�s�n�n sonu
		
	}//printM fonksiyonunun sonu
