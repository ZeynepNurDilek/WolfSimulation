
#ifndef BASE_H
#define BASE_H

#include <time.h>				// time(NULL) i�in
#include <iostream>				// srand, rand ve cout i�in
#define N 20					// bu tan�mlama matris boyutu de�i�tirilece�i zaman bu i�lemi kolayla�t�rmak i�in kullan�lm��t�r
using namespace std;

class base {

protected: 
	char matris[N][N];			//t�m ilerlemelerin oldu�u ve �zerinde kurt ve kuzu olu�turulacak matris tan�mlan�yor.

public: 
	~base();					//matrisi bo�alt�r
	base();						//otlardan olu�an matris olu�turur
	void print();				//matrisi yazd�r�r


}; //base class�n�n sonu

#endif
