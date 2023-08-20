#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *head;
Node *tail;

void kosong(){
    head = NULL;
}

bool isEmpty(){
    if (head==NULL){
        return true;
    }
    return false;
}

void tambahBelakang(int dataBaru){
    Node *nodeBaru, *bantu;
    nodeBaru = new Node;
    nodeBaru -> data = dataBaru;
    nodeBaru -> next = NULL;

    if(isEmpty()){
        head = nodeBaru;
        head -> next = NULL;
    }else{
        bantu = head;
        while (bantu -> next != NULL){
            bantu = bantu -> next;
        }
        bantu -> next = nodeBaru;
    }
    cout << "Nomor Urut [" << dataBaru << "] Silahkan Mengantri" << endl;
}

void hapusDepan(){
    Node *hapus;
    int depan;
    if (!isEmpty()){
        if (head -> next != NULL){
            hapus = head;
            depan = hapus -> data;
            head = hapus -> next;
            delete hapus;
        }else{
        depan = head -> data;
        head = NULL;
        }
        cout << "Nomor Urut Terdepan telah Masuk" << endl;
    }else{
        cout << "Kosong" << endl;
    }
}

void tampil(){
    if (!isEmpty()){
        Node *bantu;
        bantu = head;
        do{
            cout << "->[" << bantu -> data << "]";
            bantu = bantu -> next;
        }while (bantu != NULL);
        cout << endl;
    }else{
        cout << "Kosong";
        }
}

int main(){
    cout << "================================== " << endl;
    cout << "==== ANTRIAN PENGAMBILAN BUKU ==== " << endl;
    cout << "================================== \n" << endl;
    tambahBelakang(1);
    tampil();

    tambahBelakang(2);
    tampil();

    tambahBelakang(3);
    tampil();

    hapusDepan();
    tampil();

    tambahBelakang(4);
    tampil();

    return 0;
}
