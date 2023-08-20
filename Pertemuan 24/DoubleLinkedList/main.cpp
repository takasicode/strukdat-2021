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

void tambahDepan(int dataBaru){
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
        tail -> next = NULL;
        tail -> prev = NULL;
    }else{
        nodeBaru -> next = head;
        head -> prev = nodeBaru;
        head = nodeBaru;
    }
    cout << "DATA " << dataBaru << " TELAH DITAMBAHKAN DIDEPAN" << endl;
}

void tambahTengah(int setelah, int dataBaru){
    Node *nodeBaru, *current, *current2;
    nodeBaru = new Node;
    int i;
    bool indikator = false;

    nodeBaru -> data = dataBaru;
    nodeBaru -> next = NULL;
    nodeBaru -> prev = NULL;
    current = head;

    for (i = 0; i < 10; i++){
        if(current -> data == setelah){
            indikator = true;
            break;
        }
        current = current -> next;
    }
    if(isEmpty()){
        cout << "LIST MASING KOSONG" << endl;
    }else{
        if(indikator){
            current2 = current -> next;
            nodeBaru -> next = current2;
            nodeBaru -> prev = current;
            current2 -> prev = nodeBaru;
            cout << "DATA BERHASIL DITAMBAHKAN" << endl;
            if(current == head){
                cout << "SETELAH BERADA DI HEAD" << endl;
            }else if(current == tail){
                cout << "SETELAH BERADA DI TAIL" << endl;
            }else{
                cout << "DATA TIDAK BERADA DI HEAD DAN TAIL" << endl;
            }
        }else{
            cout << "DATA SETELAH TIDAK DITEMUKAN" << endl;
        }
    }
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

void hapusDepan(){
    Node *hapus;
    if(isEmpty()){
        cout << "DATA KOSONG, SILAHKAN TAMBAHKAN DATA" << endl;
    }else{
        if(head -> next != NULL){
            hapus = head;
            head = head -> next;
            head -> prev = NULL;
        }else{
            hapus = head;
            head = NULL;
            tail = NULL;
        }
        delete hapus;
        cout << "DATA PALING DEPAN TELAH DIHAPUS" << endl;
    }
}

void hapusTengah (int setelah){
    Node *hapus, *current, *current2;
    hapus = new Node;
    int i;
    bool indikator = false;
    current = head;

    for (i = 0; i < 10; i++){
        if(current -> data == setelah){
            indikator = true;
            break;
        }
        current = current -> next;
    }
    if(isEmpty()){
        cout << "LIST MASIH KOSONG" << endl;
    }else{
        if(indikator){
            hapus = current;
            current2 = hapus -> next;
            current = hapus -> prev;
            current -> next = current2;
            current2 -> prev = current;
            cout << "DATA " << setelah << " TELAH DIHAPUS" << endl;
            delete hapus;
        }else{
            cout << "DATA SETELAH TIDAK DITEMUKAN" << endl;
        }
    }
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
             << "\n1. TAMBAH DEPAN           "
             << "\n2. TAMBAH TENGAH          "
             << "\n3. TAMBAH BELAKANG        "
             << "\n4. HAPUS DEPAN            "
             << "\n5. HAPUS TENGAH           "
             << "\n6. HAPUS BELAKANG         "
             << "\n7. TAMPILKAN DATA         "
             << "\n8. KELUAR                 "
             << "\n=========================="
             << "\nSilahkan pilih menu : ";
             cin >> pilih;
             switch(pilih){
        case 1:
            tambahDepan(15);
            tambahDepan(10);
            tambahDepan(5);
            break;

        case 2:
            tambahTengah(15,20);
            break;

        case 3:
            tambahBelakang(20);
            tambahBelakang(25);
            break;

        case 4:
            hapusDepan();
            break;

        case 5:
            hapusTengah(15);
            break;

        case 6:
            hapusBelakang();
            break;

        case 7:
            tampil();
            break;

        case 8:
            break;

        default:
            cout << "TIDAK VALID, SILAHKAN INPUT SESUAI MENU" << endl;
            break;
        }
    }
    while (pilih!=8);
}
