
 #ifndef WOLF_H
 #define WOLF_H

#include <iostream>
#include <time.h>
#define N 10

using namespace std;

#include "base.h"

class Wolf : virtual public base{ 

public:
	
	Wolf();					//basedeki matrisin üzerinde bir kurt oluşturur

	bool ilerlet();			//kurdu basedeki matrisin üzerinde ilerletir

protected:
	int wx;		//kurdun koordinatlarını tutan değişkenler
	int wy;		// field classındada bu değişkenleri kullandığımızdan dolayı bunları protected olarak tanımladık...
					
private :
	char oncekiChar;	// kurt matris içindeki otları yemediğinden ilerlediği yerdeki karakteri tutup 
						// daha sonra bu elemandan ayrılırken o karakteri tekrar yazdırması gerekir 
						// bunun için bu değişkeni kullandım
};

#endif