#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

main()
{
double tot_beli, potongan = 0, jumlah_bayar = 0;
cout<<"Total pembelian Rp. ";cin>>tot_beli;

if(tot_beli >= 50000)
potongan = 0.2*tot_beli;
else
potongan = 0.05*tot_beli;

cout<<"Besarnya potongan Rp."<<potongan<<endl;
jumlah_bayar = tot_beli - potongan;

cout<<"Jumlah yang harus dibayarkan Rp."<<jumlah_bayar;

getch();
return 0 ;
}

                                                                                                                     
