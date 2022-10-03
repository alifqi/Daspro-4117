#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    cout << "NAMA : MUHAMMAD ALIFQI ANNUR ZAQI\nNIM : A11.2022.14658 \n"<< endl;
    cout << "\n1. bilangan genap antara 25 - 50. " << endl;
    int a;
    cout << "\t masukan angka :  " ;
    cin >> a;
    if ( a > 25 && a < 50 && a % 2 == 0 ) {
    cout << "\t selamat bilangan anda sesuai!" << endl;
    }
    else {
    cout << "\t bilangan tidak sesuai " << endl;
    }
     cout << "2.bilangan ganjil antara lebih dari 5 atau kurang dari 13. " << endl;
    int x;
    cout << "\t masukan angka :  " ;
    cin >> x;
    if ( x > 5 || x < 13 && x % 2 == 1 ) {
    cout << "\t selamat bilangan anda sesuai!" << endl;
    }
    else {
    cout << "\t bilangan tidak sesuai " << endl;
    }
     cout << "3. bilangan bulat antara 25-50 atau bilangan  ganjil antara 3-15. " << endl;
    int y;
    cout << "\t masukan angka :  " ;
    cin >> y;
    if ( y > 25 && a < 50 || y > 3 && y < 15 && a % 2 == 0 ) {
    cout << "\t selamat bilangan anda sesuai!" << endl;
    }
    else {
    cout << "\t bilangan tidak sesuai " << endl;
    }
    int jurusan;
    cout<< "==jurusan==\n1. Teknik Infomatika \n2. Sistem Informasi \n3. DKV"<< endl;
    cout<< "masukan jurusan anda : ";
    cin >> jurusan;
        if (jurusan ==1){
            cout << "jurusan anda adalah teknik informatika" << endl;
        }
    else if (jurusan == 2 ||  3){
            cout << "jurusan anda salah"<<endl;
    }
    return 0;
}
