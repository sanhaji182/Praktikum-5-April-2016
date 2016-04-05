#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int rumah,jumlah,bonus,total;
    string nama;

    cout<<"Masukkan nama karyawan : ";
    cin>>nama;

    cout<<"Masukkan type rumah yang dijual : ";
    cin>>rumah;

    switch(rumah)
    {

    case 45 :
        cout<<"Masukkan jumlah yang terjual : ";
        cin>>jumlah;
        if (jumlah>5) {
            bonus=500000;
            }
            else {bonus=250000;}
        break;
    case 54 :
        cout<<"Masukkan jumlah yang terjual : ";
        cin>>jumlah;
        if (jumlah>5) {
            bonus=1000000;
            }
            else {bonus=500000;}
        break;
    case 70 :
        cout<<"Masukkan jumlah yang terjual : ";
        cin>>jumlah;
        if (jumlah>5) {
            bonus=1250000;
            }
            else {bonus=1000000;}
        break;
    default : cout <<"Type rumah yang tersedia hanya 45 , 54 dan 70";
    }
    total=jumlah*bonus;
    system("cls");

    cout<<"Karyawan "<<nama<<", menjualkan rumah sebagai berikut : "<<endl;
    cout<<"Tipe rumah : "<<rumah<<endl;
    cout<<"Jumlah : "<<rumah<<endl;
    cout<<"Bonus yang diterima : "<<total<<endl;
    return 0;
}
