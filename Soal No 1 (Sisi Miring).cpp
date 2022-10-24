#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main (){
    // Perhitungan

    float sisiAlas = 8, sisiTinggi = 10;
    float sisiMiring;

    cout << "Nilai Alas = " << sisiAlas <<endl;

    cout << "Nilai tinggi = "<< sisiTinggi <<endl;

    sisiMiring = sqrt ( pow(sisiAlas,2) + pow(sisiTinggi,2) );

    cout << "Nilai sisi miring = " << sisiMiring << endl;

    return 0;
}
