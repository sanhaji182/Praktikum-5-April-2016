#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
    int angka;
    string romawi;
    char opsi;
    do {
    cout << "Masukkan Angka ( 1 - 10 ): ";
    cin >> angka;
    cout << "Angka Romawi : ";
    switch (angka)
    {
        case 1 : cout<< "I";
        break;

        case 2 : cout <<"II";
        break;

        case 3 : cout<< "III";
        break;

        case 4 : cout <<"IV";
        break;

        case 5 : cout<< "V";
        break;

        case 6 : cout <<"VI";
        break;

        case 7 : cout <<"VII";
        break;

        case 8 : cout <<"VIII";
        break;

        case 9 : cout <<"IX";
        break;

        case 10 : cout <<"X";
        break;

        default : cout <<"Error!"<<endl<<"Masukkan angka antara 1 - 10";

    }

    cout<<endl<<"Ingin mengkonversi angka lain ? (Y/N) : ";
    cin>>opsi;
    system("cls");
    }
    while(opsi=='y');
    cout << endl;
    system("pause");
}
