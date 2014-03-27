
 #ifndef LAMB_H
 #define LAMB_H

#define N 10
#include "base.h"
#include "Wolf.h"
using namespace std;
class Lamb : virtual public base{
	
	public:
		
		Lamb();				// base deki matrisin i�ine bir kuzu olu�turur
		void ilerlet();		// basedeki matris �zerinde kuzuyu ilerletir
	
		


protected:
	int lx;				// kuzunun matris i�indeki yerini belirten koordinatlar� tan�mlan�yor
	int ly;
	int acAdimSayisi;	// kuzu 5 ad�m boyunca �im yemezse programdan ��k�laca�� i�in kuzunun �im yemedi�i ad�mlar�n�n say�s� bu de�i�kenle saklan�yor.

};

#endif
