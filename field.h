
 #ifndef F�ELD_H
 #define F�ELD_H

#include <iostream>
#include <time.h>

#include "Lamb.h"		//tarla class� lamb ve 						
#include "Wolf.h"		//wolf class�ndan t�retildi�i i�in bu classlar�n dosyalar�n� burda tan�tt�m

#define N 10
using namespace std;
class field:  public Lamb, public Wolf{

public:
	field(){}			// field class� olu�urken �nce base constructor'�na sonra lamb constructor'�na daha sonra wolf constructor�na giderek buradaki i�lemler yap�l�r

	bool ilerlet();

	//void print(){printM();}

};

#endif
