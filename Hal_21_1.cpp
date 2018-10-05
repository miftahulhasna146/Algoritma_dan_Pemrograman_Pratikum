#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
    //Deklarasi Variabel
        double meter,yard,kaki,inchi;
   
    //Masukkan data
        cout<<"Konversi dari Meter ke Yard, Kaki, dan Inchi"<<endl;
        cout<<"Input Meter : ";
        cin>>meter;
   
    //Menghitung Konversi
        //Konversi Meter ke Yard
            yard = meter / 0.9144;
        //Konversi Meter ke Kaki
            kaki = meter / 0.3048;
        //Konversi Meter ke Inchi
            inchi = meter / 0.0254;
   
    //Menampilkan hasil
        cout<<meter<<" meter =  "<<yard<<" yard "<<endl;
        cout<<meter<<" meter =  "<<kaki<<" kaki "<<endl;
        cout<<meter<<" meter =  "<<inchi<<" inchi "<<endl;
   
    return 0;
}
