#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    double akhir,tes,uts,uas,tugas;
    string nama;
    char indeks;

    cout << "Masukkan nama anda : ";
    getline(cin,nama);
    cout << "Masukkan nilai tes : ";
    cin>>tes;
    cout << "Masukkan nilai UTS : ";
    cin>>uts;
    cout << "Masukkan nilai UAS : ";
    cin>>uas;
    cout << "Masukkan nilai tugas : ";
    cin>>tugas;
    akhir=0.2*tes+0.3*uts+0.3*uas+0.2*tugas;

    if (akhir<=50){ indeks='D';
    }
        else if ((70>=akhir) && (akhir>50)) {
                indeks='C'; }
        else if ((80>=akhir) && (akhir<70)) {
            indeks='B';}
        else indeks='A';

        system ("cls");
        cout << "Kepada " <<nama<<endl;
        cout << "Nilai tes : " <<tes<<endl;
        cout << "Nilai UTS : " <<uts<<endl;
        cout << "Nilai UAS : " <<uas<<endl;
        cout << "Nilai Tugas : " <<tugas<<endl;
        cout << "Nilai Akhir anda adalah : " <<akhir<<endl<< "Nilai Indeks Anda adalah : "<<indeks<<endl<<endl;
    return 0;
}
