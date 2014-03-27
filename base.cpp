#include "base.h"

base::~base()
	{
	for(int i = 0; i<N ; i++)
		for(int j=0 ; j<N ; j++)
			matris[i][j]=NULL;
	}

base::base()
	{									//yalnızca otlar ve matris üretiliyor
			srand(time(NULL));
			
			for(int i=0;i<N;i++){				//matrisin satırları için döngü 
					
				for(int j=0;j<N;j++){			//matrisin sütunları için döngü 
						
						if(rand()%2)			 //0 ve 1 sayısından biri rastgele üretiliyor 
								matris[i][j]='*'; // if in içinde 1 üretildiyse matrisin i. satır j. sütununa '*' karakteri atanıyor
						else	
								matris[i][j]=' '; // ifin içinde 0 üretildiyse matrisin i.satır j. sütununa ' ' karakteri atanıyor

				}//sütun döngüsünün sonu
			}//satır döngüsünün sonu
	}//base constructorının sonu


void base::print()
		{									// matrisi ekrana yazdıracak fonksiyon
				
				for(int i=0;i<N;i++){					//matrisin satırlarında ilerlemeyi sağlayan for döngüsü
					
						for(int j=0;j<N;j++){				//matrisin sütunlarında ilerlemeyi sağlayan for döngüsü 
				
							cout<<matris[i][j]<<" ";		//i. satır j. sütunun yazdırılması 
														//" " ifadesi matrisin daha açık ve orantılı görünmesi için sütun aralarında bir boşluk bırakmak için konmuştur
						}//sütun döngüsünün sonu  
					
					cout<<endl;							// bir sütun bittiğinde alt satıra geçilir
				
				}//satır döngüsünün sonu
		
	}//printM fonksiyonunun sonu
