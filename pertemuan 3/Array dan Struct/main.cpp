#include <iostream>

using namespace std;

    struct Mhs{
    string Nama;
    string NIM;
    string Fakultas;
    string Jurusan;
    string Universitas;
};

int main(){
    Mhs Mahasiswa[2];

    Mahasiswa[0].Nama= "Muhammad Fadhil Abyansyah";
    Mahasiswa[0].NIM= "A11.2020.12544";
    Mahasiswa[0].Fakultas= "Fakultas Ilmu Komputer";
    Mahasiswa[0].Jurusan= "Teknik Informatika";
    Mahasiswa[0].Universitas= "Universitas Dian Nuswantoro";

    Mahasiswa[1].Nama= "Muhammad Fadhil Abyansyah";
    Mahasiswa[1].NIM= "A11.2020.12544";
    Mahasiswa[1].Fakultas= "Fakultas Ilmu Komputer";
    Mahasiswa[1].Jurusan= "Teknik Informatika";
    Mahasiswa[1].Universitas= "Universitas Dian Nuswantoro";

    cout << "BIODATA MAHASISWA" << endl;
    printf("\n-----------------------------------------\n");
    cout << "Nama : "<<Mahasiswa[0].Nama << endl;
    cout << "NIM : "<<Mahasiswa[0].NIM << endl;
    cout << "Fakultas : "<<Mahasiswa[0].Fakultas << endl;
    cout << "Jurusan : "<<Mahasiswa[0].Jurusan << endl;
    cout << "Universitas : "<<Mahasiswa[0].Universitas << endl;
    printf("\n-----------------------------------------\n");
    cout << "Nama : "<<Mahasiswa[1].Nama << endl;
    cout << "NIM : "<<Mahasiswa[1].NIM << endl;
    cout << "Fakultas : "<<Mahasiswa[1].Fakultas << endl;
    cout << "Jurusan : "<<Mahasiswa[1].Jurusan << endl;
    cout << "Universitas : "<<Mahasiswa[1].Universitas << endl;
    return 0;
}
