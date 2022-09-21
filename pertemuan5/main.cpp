#include <iostream>

using namespace std;

int main()
{
    float r;
    float luas;

    cout << "|=============================================|" << endl;
    cout << "|    Program C++ Menghitung Luas Lingkaran    |" << endl;
    cout << "|=============================================|" << endl;

    cout << "\nInput jari-jari lingkaran: ";
    cin >> r;

    luas = 3.14 * r * r;
    cout << "Luas lingkaran = "<< luas << endl;
    return 0;
}
