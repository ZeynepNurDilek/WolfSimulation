#include "Lamb.h"

Lamb::Lamb()
		{					//kuzu olu�turuluyor
		
			srand(time(NULL));
			
			lx=rand()%N;		//kuzunun koordinatlar� rastgele belirleniyor.
			ly=rand()%N;
			
			matris[lx][ly]='k'; // kuzunun koordinatlar�ndaki matris eleman�na 'k' de�eri atan�yor
			
			Wolf();				// kurt olu�turuluyor
			
			acAdimSayisi=0;		// a� ad�m say�s� ba�lang��
		}




void Lamb::ilerlet()
		{			//kuzu i�in ilerleme fonksiyonu 
		
				if( (lx+1) == N){								//matris s�n�r�ndaysa 
					
					if(matris[lx][ly-1]=='*'){				    // ve yak�nda ot varsa
						
						matris[lx][ly]=' ';						//ot yerine bo�luk yaz�l�r
						
						acAdimSayisi=0;							//ot yendi�i i�in acAdimSayisi de�i�keni s�f�rlan�r
						
						ly--;									//ot olan yere do�ru bir ad�m ilerletilir
						
						matris[lx][ly]='k';						//kuzunun oldu�u yere 'k' atan�r
					}



					else if(matris[lx][ly+1]=='*'){				//bu ve di�er else ifadesi yukar�daki gibidir.
						matris[lx][ly]=' ';
						acAdimSayisi=0;
						ly++;
						matris[lx][ly]='k';
					}
			
					else{ 
						matris[lx][ly]=' ';						//burada di�erlerinden farkl� olarak acAdimSayisi art�r�l�r
						acAdimSayisi++;							// ��nk� buraya gelinmi�se etrafta ot yok demektir.
						lx--;
						matris[lx][ly]='k';
					}
				}
			

				else if( (lx-1)==(-1)){							//x koordinat�nda negatif y�nde matris a��l�yorsa 
					
					if(matris[lx][ly-1]=='*'){					//ve y koordinat�nda negatif y�nde ot varsa
						matris[lx][ly]=' ';						//ot yerine bo�luk yaz�l�r
						acAdimSayisi=0;							//ot yendi�i i�in acAdimSayisi s�f�rlan�r
						ly--;									//ot bulunan y�ne do�ru ilerlenir
						matris[lx][ly]='k';						//matriste bu koordinata 'k' yaz�l�r.
					}

					else if(matris[lx][ly+1]=='*'){
						matris[lx][ly]=' ';
						acAdimSayisi=0;
						ly++;
						matris[lx][ly]='k';
					}
					
					else {
						matris[lx][ly]=' ';
						acAdimSayisi++;
						lx++;
						matris[lx][ly]='k';
					}
				}
			
				else if((ly-1)==(-1)){
						
						if(matris[lx-1][ly]=='*'){
							matris[lx][ly]=' ';
							acAdimSayisi=0;
							lx--;
							matris[lx][ly]='k';
						}

						else if(matris[lx+1][ly]=='*'){
							matris[lx][ly]=' ';
							acAdimSayisi=0;
							lx++;
							matris[lx][ly]='k';
						}

						else {
							matris[lx][ly]=' ';
							acAdimSayisi++;
							ly++;
							matris[lx][ly]='k';
						}
				}
			
				else if((ly+1)==N){
					if(matris[lx-1][ly]=='*'){
						matris[lx][ly]=' ';
						acAdimSayisi=0;
						lx--;
						matris[lx][ly]='k';
					}
					else if(matris[lx+1][ly]=='*'){
						matris[lx][ly]=' ';
						acAdimSayisi=0;
						lx++;
						matris[lx][ly]='k';
					}
					else { 
						matris[lx][ly]=' ';
						acAdimSayisi++;
						ly--;
						matris[lx][ly]='k';
					}									//buraya kadar hep kuzunun matris s�n�rlar�nda oldu�u durumlar kontrol edildi
				}
														//buradan sonra kuzunun matrisin ortalar�nda bulunup etraf�nda ot olup olmad��� kontrol edilecektir.

				else if(matris[lx+1][ly]=='*') {				//x + y�n�nde ot varsa
			
						matris[lx][ly]=' ';
						lx++;									//kuzu x y�n�nde bir ad�m ilerletilir
						matris[lx][ly]='k';
						acAdimSayisi=0;							//acAdimSayisi s�f�rlan�r 
				}

				else if(matris[lx-1][ly]=='*'){					//sonraki 3 else ifadesi ayn�d�r
						matris[lx][ly]=' ';
						lx--;
						matris[lx][ly]='k';
						acAdimSayisi=0;
				}

				else if(matris[lx][ly+1]=='*'){
						matris[lx][ly]=' ';
						ly++;
						matris[lx][ly]='k';
						acAdimSayisi=0;
				}

				else if(matris[lx][ly-1]=='*'){
						matris[lx][ly]=' ';
						ly--;
						matris[lx][ly]='k';
						acAdimSayisi=0;
				}
												//program buraya kadar gelmi�se kuzu matrisin kenarlar�nda de�ildir
												// ve etraf�nda hi� ot yoktur
												//bu y�zden kuzu rastgele hareket eder

				else {							
						matris[lx][ly]=' ';		//bulundu�u yer bo� yap�l�r
						
						acAdimSayisi++;			//acAdimSayisi art�r�l�r

						int a=rand()%4;			//kuzunun rastgele ilerlemesi i�in 0-4 aral���nda rastgele bir say� �retilir
			
						if(a==0){				//e�er 0 �retilmi�se 
			
							lx++;				//+x y�n�nde hareket eder
							
							matris[lx][ly]='k'; 
			
						}

						else if(a==1){			//bu ve di�er else ler yukar�dakiyle ayn�d�r.
				
							lx--;
							matris[lx][ly]='k';}
			
						else if(a==2){
							ly++;
							matris[lx][ly]='k';
						}
			
						else if(a==3){
				   
							ly--;
							matris[lx][ly]='k';
						}

				}//else bitti
		
		
		}//ilerlet fonksiyonu bitti
