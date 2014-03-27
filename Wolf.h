
 #ifndef WOLF_H
 #define WOLF_H

#include <iostream>
#include <time.h>
#define N 10

using namespace std;

#include "base.h"

class Wolf : virtual public base{ 

public:
	
	Wolf();					//basedeki matrisin üzerinde bir kurt oluþturur

	bool ilerlet();			//kurdu basedeki matrisin üzerinde ilerletir

protected:
	int wx;		//kurdun koordinatlarýný tutan deðiþkenler
	int wy;		// field classýndada bu deðiþkenleri kullandýðýmýzdan dolayý bunlarý protected olarak tanýmladýk...
					
private :
	char oncekiChar;	// kurt matris içindeki otlarý yemediðinden ilerlediði yerdeki karakteri tutup 
						// daha sonra bu elemandan ayrýlýrken o karakteri tekrar yazdýrmasý gerekir 
						// bunun için bu deðiþkeni kullandým
};

#endif