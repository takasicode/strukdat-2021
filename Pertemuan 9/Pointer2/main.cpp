#include <iostream>

using namespace std;

int main()
{
    // & untuk melihat memory
    // * untuk melihat data dari memory

    int panjang=20;
    int *alamatPanjang = &panjang;

    cout << "Isi data di variabel panjang: " << panjang << endl;
    cout << "Letak alamat memory variabel panjang: " << &panjang << endl;
    cout << "Letak alamat memory variabel panjang: " << alamatPanjang << endl;

    cout << "Isi data dari alamat memory variabel panjang: " << *alamatPanjang << endl;

    return 0;
}
