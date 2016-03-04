//============================================================================
// Name        : Numeros.cpp
// Author      : Jose Castro
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(int argo, char*argv[]) {
	int a [5];
	int b=4;
	cout<< " Ingrese 5 sifras";
	for(int c=0; c<=4; c++){
		cin>> a[c];
		if (a[c]==0){
			b=c;
			c=5;
			cout<<" Has ingresado la sifra 0 \n";
		}}
	cout<<" Sifras ingresadas en orden inversa \n";
	for (int c=b; c>=0; c--){
		cout<<a[c];
		cout<<"\c";
	}
	return 0;
	}
