
 #ifndef LAMB_H
 #define LAMB_H

#define N 10
#include "base.h"
#include "Wolf.h"
using namespace std;
class Lamb : virtual public base{
	
	public:
		
		Lamb();				// base deki matrisin içine bir kuzu oluþturur
		void ilerlet();		// basedeki matris üzerinde kuzuyu ilerletir
	
		


protected:
	int lx;				// kuzunun matris içindeki yerini belirten koordinatlarý tanýmlanýyor
	int ly;
	int acAdimSayisi;	// kuzu 5 adým boyunca çim yemezse programdan çýkýlacaðý için kuzunun çim yemediði adýmlarýnýn sayýsý bu deðiþkenle saklanýyor.

};

#endif
