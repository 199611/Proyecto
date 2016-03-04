//============================================================================
// Name        : Numero.cpp
// Author      : Jose Castro
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int sifra;
	cout<<"Ingrese Sifra";
	cin>> sifra;
	if (sifra % 4==0) {
		cout<< "\n" << (sifra);
		cout<< " Es multiplo del numero 4";
	}
	else{
		cout<< "\n" << (sifra);
		cout<< " No se multiplo del numero 4";
	}
	return 0;
}
