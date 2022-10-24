#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main (){
    float nilaiPraktikum = 75, nilaiUTS = 70, nilaiUAS = 88;
    float NilaiAkhir;

    cout << "Nilai praktikum = " << nilaiPraktikum << endl;
    cout << "Nilai uts = " << nilaiUTS << endl;
    cout << "Nilai uas = " << nilaiUAS << endl;

    NilaiAkhir = (nilaiPraktikum * 20/100) + (nilaiUTS * 30/100) + (nilaiUAS * 50/100);

    cout << "Nilai akhirnya adalah = " << NilaiAkhir << endl;

    return 0;
}
