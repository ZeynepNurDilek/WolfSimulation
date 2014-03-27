
 #ifndef FÝELD_H
 #define FÝELD_H

#include <iostream>
#include <time.h>

#include "Lamb.h"		//tarla classý lamb ve 						
#include "Wolf.h"		//wolf classýndan türetildiði için bu classlarýn dosyalarýný burda tanýttým

#define N 10
using namespace std;
class field:  public Lamb, public Wolf{

public:
	field(){}			// field classý oluþurken önce base constructor'ýna sonra lamb constructor'ýna daha sonra wolf constructorýna giderek buradaki iþlemler yapýlýr

	bool ilerlet();

	//void print(){printM();}

};

#endif
