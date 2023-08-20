#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
};

string data;

Node *head;
Node *tail;

void awal(){
    head = NULL;
    tail = NULL;
}

bool isEmpty(){
    if(head == NULL){
        return true;
    }
    return false;
}

void tambahDepan (int dataBaru){
    // node baru
    Node *nodeBaru;
    nodeBaru = new Node;

    // node baru dengan data inputan
    nodeBaru -> data = dataBaru;
    nodeBaru -> next = NULL;
    nodeBaru -> prev = NULL;

    // jika data kosong
    if(isEmpty()){
        head = nodeBaru;
        tail = nodeBaru;
        head -> next = NULL;
        head -> prev = NULL;

        tail -> next = NULL;
        tail -> prev = NULL;
    }else{
        nodeBaru -> next = head;
        head -> prev = nodeBaru;
        head = nodeBaru;
    }
    cout << "DATA " << dataBaru << " TELAH DITAMBAHKAN DIDEPAN" << endl;
}

void tambahBelakang (int dataBaru){
    // node baru
    Node *nodeBaru;
    nodeBaru = new Node;

    // node baru dengan data inputan
    nodeBaru -> data = dataBaru;
    nodeBaru -> next = NULL;
    nodeBaru -> prev = NULL;

    // jika data kosong
    if(isEmpty()){
        head = nodeBaru;
        tail = nodeBaru;
        head -> next = NULL;
        head -> prev = NULL;

        tail -> next = NULL;
        tail -> prev = NULL;
    }else{
        tail -> next = nodeBaru;
        nodeBaru -> prev = tail;
        tail = nodeBaru;
    }
    cout << "DATA " << dataBaru << " TELAH DITAMBAHKAN DIBELAKANG" << endl;
}

void hapusBelakang(){
    Node *hapus;
    if(isEmpty()){
        //jika data kosong
        cout << "DATA KOSONG, SILAHKAN TAMBAHKAN DATA" << endl;
    }else{
        if(head -> next != NULL){
            hapus = tail;
            tail = tail -> prev;
            tail -> next = NULL;
        }else{
            // data cuman satu
            hapus = head;
            head = NULL;
            tail = NULL;
        }
        cout << "DATA PALING BELAKANG TELAH DIHAPUS" << endl;
        delete hapus;
    }
}

void hapusDepan(){
    Node *hapus;
    if(isEmpty()){
        // jika data kosong
        cout << "DATA KOSONG, SILAHKAN TAMBAHKAN DATA" << endl;
    }else{
        if(head -> next != NULL){
            hapus = head;
            head = head -> next;
            head -> prev = NULL;
        }else{
            // data cuman satu
            hapus = head;
            head = NULL;
            tail = NULL;
        }
        cout << "DATA PALING DEPAN TELAH DIHAPUS" << endl;
        delete hapus;
    }
}

void tampil(){
    Node *current;

    current = head;
    if(!isEmpty()){
       while(current != NULL){
            cout << "<- [" << current -> data << "] ->";
            current = current -> next;
       }
       cout << endl;
    }else{
        cout << "BELUM ADA DATA YANG MASUK" << endl;
    }
}

int main(){
    int pilih;
    do{
        cout << "\n===== DOUBLE LINKED LIST ====="
             << "\n=============================="
             << "\nMENU:                         "
             << "\n   1.   TAMBAH DIDEPAN        "
             << "\n   2.   TAMBAH DIBELAKANG     "
             << "\n   3.   HAPUS DEPAN           "
             << "\n   4.   HAPUS BELAKANG        "
             << "\n   5.   TAMPILKAN DATA        "
             << "\n=============================="
             << "\nSilahkan pilih menu : ";
             cin >> pilih;
             switch(pilih){
        case 1:
            cout << endl;
            tambahDepan(5);
            tambahDepan(3);
            tambahDepan(1);
            break;
        case 2:
            cout << endl;
            tambahBelakang(7);
            tambahBelakang(9);
            tambahBelakang(11);
            break;

        case 3:
            cout << endl;
            hapusDepan();
            break;

        case 4:
            cout << endl;
            hapusBelakang();
            break;
        case 5:
            cout << endl;
            tampil();
            break;
        }
    }
    while (pilih!=0);
}
