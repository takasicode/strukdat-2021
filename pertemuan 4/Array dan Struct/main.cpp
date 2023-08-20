#include <iostream>

using namespace std;

int main(){
    string Nama;
    string NIM;
    string Jurusan;

    cout << "MASUKKAN DATA ANDA" << endl;

    cout << "Nama       : ";
    getline (cin, Nama);

    cout << "NIM        : ";
    getline (cin, NIM);

    cout << "Jurusan    : ";
    getline (cin, Jurusan);

    cout<<endl;

    cout << "DATA MAHASISWA BARU" <<endl;
    cout << "Nama       : "<<Nama<<endl;
    cout << "NIM        : "<<NIM<<endl;
    cout << "Jurusan    : "<<Jurusan<<endl;
    return 0;

}
