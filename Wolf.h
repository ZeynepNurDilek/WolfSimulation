
 #ifndef WOLF_H
 #define WOLF_H

#include <iostream>
#include <time.h>
#define N 10

using namespace std;

#include "base.h"

class Wolf : virtual public base{ 

public:
	
	Wolf();					//basedeki matrisin �zerinde bir kurt olu�turur

	bool ilerlet();			//kurdu basedeki matrisin �zerinde ilerletir

protected:
	int wx;		//kurdun koordinatlar�n� tutan de�i�kenler
	int wy;		// field class�ndada bu de�i�kenleri kulland���m�zdan dolay� bunlar� protected olarak tan�mlad�k...
					
private :
	char oncekiChar;	// kurt matris i�indeki otlar� yemedi�inden ilerledi�i yerdeki karakteri tutup 
						// daha sonra bu elemandan ayr�l�rken o karakteri tekrar yazd�rmas� gerekir 
						// bunun i�in bu de�i�keni kulland�m
};

#endif