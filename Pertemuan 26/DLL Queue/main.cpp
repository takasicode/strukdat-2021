#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
};

Node *head;
Node *tail;

void awal(){
    head = NULL;
    tail = NULL;
}

bool isEmpty(){
    if (head == NULL){
        return true;
    }
    return false;
}

void tambahBelakang (int dataBaru){
    Node *nodeBaru;
    nodeBaru = new Node;
    nodeBaru -> data = dataBaru;
    nodeBaru -> next = NULL;
    nodeBaru -> prev = NULL;
    if(isEmpty()){
        head = nodeBaru;
        tail = nodeBaru;
        head -> next = NULL;
        head -> prev = NULL;
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
        cout << "DATA KOSONG, SILAHKAN TAMBAHKAN DATA" << endl;
    }else{
        if(head -> next != NULL){
            hapus = tail;
            tail = tail -> prev;
            tail -> next = NULL;
        }else{
            hapus = head;
            head = NULL;
            tail = NULL;
        }
        delete hapus;
        cout << "DATA PALING BELAKANG TELAH DIHAPUS" << endl;
    }
}

void tampil(){
    Node *current;
    current = head;

    if(!isEmpty()){
        while(current != NULL){
            cout << "<-" << current -> data << "->";
            current = current -> next;
        }
        cout << endl;
    }else{
        cout << "BELUM ADA DATA DIDALAM DOUBLE LINKED LIST" << endl;
    }
}

int main(){
    int pilih;
    do{
        cout << "\n=== DOUBLE LINKED LIST ==="
             << "\n=========================="
             << "\nMENU:                     "
             << "\n1. TAMBAH DIBELAKANG      "
             << "\n2. HAPUS BELAKANG         "
             << "\n3. TAMPILKAN DATA         "
             << "\n4. KELUAR                 "
             << "\n=========================="
             << "\nSilahkan pilih menu : ";
             cin >> pilih;
             switch(pilih){
        case 1:
            tambahBelakang(7);
            tambahBelakang(5);
            tambahBelakang(3);
            tambahBelakang(1);
            break;

        case 2:
            hapusBelakang();
            break;

        case 3:
            tampil();
            break;

        case 4:
            break;

        default:
            cout << "TIDAK VALID, SILAHKAN INPUT SESUAI MENU" << endl;
            break;
        }
    }
    while (pilih!=4);
}
