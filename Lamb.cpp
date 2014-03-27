#include "Lamb.h"

Lamb::Lamb()
		{					//kuzu oluþturuluyor
		
			srand(time(NULL));
			
			lx=rand()%N;		//kuzunun koordinatlarý rastgele belirleniyor.
			ly=rand()%N;
			
			matris[lx][ly]='k'; // kuzunun koordinatlarýndaki matris elemanýna 'k' deðeri atanýyor
			
			Wolf();				// kurt oluþturuluyor
			
			acAdimSayisi=0;		// aç adým sayýsý baþlangýç
		}




void Lamb::ilerlet()
		{			//kuzu için ilerleme fonksiyonu 
		
				if( (lx+1) == N){								//matris sýnýrýndaysa 
					
					if(matris[lx][ly-1]=='*'){				    // ve yakýnda ot varsa
						
						matris[lx][ly]=' ';						//ot yerine boþluk yazýlýr
						
						acAdimSayisi=0;							//ot yendiði için acAdimSayisi deðiþkeni sýfýrlanýr
						
						ly--;									//ot olan yere doðru bir adým ilerletilir
						
						matris[lx][ly]='k';						//kuzunun olduðu yere 'k' atanýr
					}



					else if(matris[lx][ly+1]=='*'){				//bu ve diðer else ifadesi yukarýdaki gibidir.
						matris[lx][ly]=' ';
						acAdimSayisi=0;
						ly++;
						matris[lx][ly]='k';
					}
			
					else{ 
						matris[lx][ly]=' ';						//burada diðerlerinden farklý olarak acAdimSayisi artýrýlýr
						acAdimSayisi++;							// çünkü buraya gelinmiþse etrafta ot yok demektir.
						lx--;
						matris[lx][ly]='k';
					}
				}
			

				else if( (lx-1)==(-1)){							//x koordinatýnda negatif yönde matris aþýlýyorsa 
					
					if(matris[lx][ly-1]=='*'){					//ve y koordinatýnda negatif yönde ot varsa
						matris[lx][ly]=' ';						//ot yerine boþluk yazýlýr
						acAdimSayisi=0;							//ot yendiði için acAdimSayisi sýfýrlanýr
						ly--;									//ot bulunan yöne doðru ilerlenir
						matris[lx][ly]='k';						//matriste bu koordinata 'k' yazýlýr.
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
					}									//buraya kadar hep kuzunun matris sýnýrlarýnda olduðu durumlar kontrol edildi
				}
														//buradan sonra kuzunun matrisin ortalarýnda bulunup etrafýnda ot olup olmadýðý kontrol edilecektir.

				else if(matris[lx+1][ly]=='*') {				//x + yönünde ot varsa
			
						matris[lx][ly]=' ';
						lx++;									//kuzu x yönünde bir adým ilerletilir
						matris[lx][ly]='k';
						acAdimSayisi=0;							//acAdimSayisi sýfýrlanýr 
				}

				else if(matris[lx-1][ly]=='*'){					//sonraki 3 else ifadesi aynýdýr
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
												//program buraya kadar gelmiþse kuzu matrisin kenarlarýnda deðildir
												// ve etrafýnda hiç ot yoktur
												//bu yüzden kuzu rastgele hareket eder

				else {							
						matris[lx][ly]=' ';		//bulunduðu yer boþ yapýlýr
						
						acAdimSayisi++;			//acAdimSayisi artýrýlýr

						int a=rand()%4;			//kuzunun rastgele ilerlemesi için 0-4 aralýðýnda rastgele bir sayý üretilir
			
						if(a==0){				//eðer 0 üretilmiþse 
			
							lx++;				//+x yönünde hareket eder
							
							matris[lx][ly]='k'; 
			
						}

						else if(a==1){			//bu ve diðer else ler yukarýdakiyle aynýdýr.
				
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
