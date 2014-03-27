
#ifndef BASE_H
#define BASE_H

#include <time.h>				// time(NULL) için
#include <iostream>				// srand, rand ve cout için
#define N 20					// bu tanýmlama matris boyutu deðiþtirileceði zaman bu iþlemi kolaylaþtýrmak için kullanýlmýþtýr
using namespace std;

class base {

protected: 
	char matris[N][N];			//tüm ilerlemelerin olduðu ve üzerinde kurt ve kuzu oluþturulacak matris tanýmlanýyor.

public: 
	~base();					//matrisi boþaltýr
	base();						//otlardan oluþan matris oluþturur
	void print();				//matrisi yazdýrýr


}; //base classýnýn sonu

#endif
