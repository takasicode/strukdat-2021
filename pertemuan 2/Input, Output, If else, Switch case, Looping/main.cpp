#include <iostream>

using namespace std;

int main()
{
    cout << "Nama : Muhammad Fadhil Abyansyah" << endl;
    cout << "NIM  : A11.2020.12544" << endl;
    cout<<"---------------------------------"<< endl;

//input output
    string nama;
    cout << "Nama: ";
    cin >> nama;

    cout<<"---------------------------------"<< endl;
    cout << "Hi " << nama<< endl;
    cout << "Selamat datang di Universitas Dian Nuswantoro" << endl;
    cout<<"---------------------------------"<< endl;

//if else
	string kata;
	cout<<"Masukan kata Hi"<<endl;
	cin>>kata;

	if (kata=="Hi"){
		cout<<"Success"<<endl;
	}
	else {
		cout<<"Failed"<<endl;
    exit( 3 );
    return 3;
	}

//switch case
    cout<<"---------------------------------"<< endl;
    cout<<"============Handphone============"<< endl;
    cout<<"1. Realme 8"<<endl;
    cout<<"2. Realme 8 Pro"<<endl;
    cout<<"3. Realme 8 5G"<<endl;
    cout<<"4. Realme GT"<<endl;

int Handphone;
    cout<<"Masukan Nomer Handphone Favorite Anda ";
    cin>>Handphone;

    switch(Handphone) {
    case 1 : cout<<"Handphone Favorite Anda adalah Realme 8"<< endl; break;
    case 2 : cout<<"Handphone Favorite Anda adalah Realme 8 Pro"<< endl; break;
    case 3 : cout<<"Handphone Favorite Anda adalah Realme 8 5G"<< endl; break;
    case 4 : cout<<"Handphone Favorite Anda adalah Realme GT"<< endl; break;
    default : cout<<"Handphone tidak tersedia"<< endl;
    exit( 3 );
    return 3;
    cout<<"---------------------------------"<< endl;
    }

//looping1
int j=1, m;
    cout<<"---------------------------------"<< endl;
    do {
    m= j *60;
    cout<<j<<" Jam "<<m<<" Menit "<< endl;
    j +=1;
    } while (j <=24);
    cout<<"---------------------------------"<< endl;

//looping2
int n=1;
    cout<<"---------------------------------"<< endl;
    float jum=0;

    do {
    cout<<""<<n;
    cout<<", ";
    jum+=n;
    n+=3;
    }
    while (n<=10);

    cout<<""<<endl;
    cout<<""<<endl;;
    cout<<"Jumlah : "<<jum<<endl;;
    cout<<"---------------------------------"<< endl;

    return 0;
}
