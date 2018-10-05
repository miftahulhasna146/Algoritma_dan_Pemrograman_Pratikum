#include <iostream>
#include <conio.h>
using namespace std;

struct {
int jam;
int menit;
int detik;
} masuk, keluar, selisih;

int main()

{
cout <<"Masuk kan waktu pertama" <<endl;
cout <<" Jam : "; cin >>masuk.jam;
cout <<" Menit : "; cin >>masuk.menit;
cout <<" Detik : "; cin >>masuk.detik;

cout <<endl <<endl;

cout <<"masukan waktu ke dua" <<endl;
cout <<" Jam : "; cin >>keluar.jam;
cout <<" Menit : "; cin >>keluar.menit;
cout <<" Detik : "; cin >>keluar.detik;

if ((keluar.detik - masuk.detik) < 0) {
selisih.detik = (60 + keluar.detik) - masuk.detik;
keluar.menit;
}
else {
selisih.detik = keluar.detik - masuk.detik;
}
if ((keluar.menit- masuk.menit) < 0) {
selisih.menit= (60 + keluar.menit) - masuk.menit;
keluar.jam;
selisih.jam = keluar.jam - masuk.jam-1;
}
else {
selisih.menit = keluar.menit- masuk.menit;
selisih.jam = keluar.jam - masuk.jam;
}
cout<<endl<<endl;

cout <<"Selisih --------" <<endl;
cout <<" Jam : " << selisih.jam <<endl;
cout <<" Menit : " << selisih.menit <<endl;
cout <<" Detik : " << selisih.detik <<endl;

getch ();
return 0;
}
