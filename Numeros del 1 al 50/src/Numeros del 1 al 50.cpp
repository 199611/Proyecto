//============================================================================
// Name        : Numeros.cpp
// Author      : Jose Castro
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(int argc,char*argv[]) {
	int a [50];
	int b=49;
	cout<< "Ingrese 50 Sifra";
	for (int c=0; c<=49; c++){
		cin>> a[c];
		if (a[c]==0){
			b=c;
			c=50;
			cout<< " Has ingresado la sifra 0 \n";
		}
	}
	cout<<" sifras ingresadas en orden asendentes \n";
	for (int c=0; c<=b; c++){
		cout<<a[c];
		cout<<"\t";
	}
	return 0;
}
