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

bool isEmpty (){
    if (head == NULL){
        return true;
    }
    return false;
}

void tambahAtas(int tambahkanAtas){
    Node *tambahkan;
    tambahkan = new Node;
    tambahkan -> data = tambahkanAtas;
    tambahkan -> next = NULL;
    if(isEmpty()){
        head = tambahkan;
        head -> next = NULL;
    }
    else{
        tambahkan -> next = head;
        head = tambahkan;
    }
    cout << "Buku telah ditambahkan dari atas" << endl;
}

void hapusAtas(){
    Node *hapus;
    int depan;
    if(!isEmpty()){
        if(head -> next!=NULL){
            hapus = head;
            depan = hapus -> data;
            head = hapus -> next;
            delete hapus;
        }else{
        depan = head -> data;
        head = NULL;
        }
        cout << "Buku diatas telah diambil" << endl;
    }else{
        cout << "Kosong, silahkan tambahkan Buku terlebih dahulu!" << endl;
    }
}

void tampil(){
    if(!isEmpty()){
        Node *bantu;
        bantu = head;
        do{
            cout << bantu -> data << endl;
            bantu = bantu -> next;
        }while(bantu != NULL);
        cout << endl;
    }else{
        cout << "Kosong, silahkan tambahkan Buku terlebih dahulu!" << endl;
    }
}

int main(){
    cout << "\n #### NO URUT TUMPUKAN BUKU #### " << endl;
    cout << "--------------------------------- \n" << endl;
    tambahAtas(3);
    tampil();

    tambahAtas(2);
    tampil();

    tambahAtas(1);
    tampil();

    hapusAtas();
    tampil();

    return 0;
}
