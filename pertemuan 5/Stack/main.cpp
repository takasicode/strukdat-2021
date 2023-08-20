#include <iostream>
#define MAX 6

using namespace std;

//Deklarasi struct tumpukan
struct Stack {
    int top, data[MAX];
}Tumpukan;

void init(){
    Tumpukan.top = -1;
}
bool isEmpty(){
    return Tumpukan.top == -1;
}
bool isFull(){
    return Tumpukan.top == MAX-1;
}

void push(){
    if (isFull()) {
        cout << "\nTumpukan penuh"<<endl;
    }
    else {
    Tumpukan.top++;
    cout << "\nMasukkan Data = "; cin >> Tumpukan.data[Tumpukan.top];
    cout << "Nomor Antrian " << Tumpukan.data[Tumpukan.top] << " dimohon menunggu"<<endl;
    }
}

void pop() {
    if (isEmpty()) {
        cout << "\nData kosong\n"<<endl;
    }
    else {
    cout << "\nNomor = "<<Tumpukan.data[Tumpukan.top]<<"Menunggu Giliran"<<endl;
    Tumpukan.top--;
    }
}
void printStack() {
    if (isEmpty()) {
        cout<<"ANTRIAN PEMBAYARAN SKS\n";
    }
    else {
        cout << "\nTumpukan : ";
            for (int i = Tumpukan.top; i >= 0; i--)
                cout << Tumpukan.data[i] << ((i == 0) ? "" : ",");
    }
}
int main()  {
    int pilihan;
    init();
    do {
        printStack();
        cout << "\n1. Antrian Masuk"
        <<"\n2. Nomor urut berikutnya"
        <<"\n3. Keluar dari antrian"
        <<"\nSilahkan input nomor : ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            push();
            break;
        case 2:
            push();
            break;
        default:

    cout << "\nTekan tombol Antrian " << endl;
            break;
        }
    } while (pilihan!=3);
}
