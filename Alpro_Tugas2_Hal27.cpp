#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std ;

main (void) {
	
	int angka ;
	
	cout<<"Masukan angka = " ;
	cin >> angka ;
	
	(angka>35) ? cout<<"Suhu saat ini Panas" : cout << "Suhu saat ini Dingin" ;
	
	return 0 ;
	
}
