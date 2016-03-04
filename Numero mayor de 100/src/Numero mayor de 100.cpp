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
	if (sifra > 100){
		cout<< "\n" << (sifra);
		cout<< " Es mayor que 100";
	}
	else {
		cout<< "\n" << (sifra);
		cout<< " Es menor que 100";
	}
	return 0;
}
