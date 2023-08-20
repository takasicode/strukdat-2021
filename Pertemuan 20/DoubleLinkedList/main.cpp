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

void tambahDepan (int dataBaru){    Node *nodeBaru;
    nodeBaru = new Node;

    nodeBaru -> data = dataBaru;
    nodeBaru -> next =  NULL;
    nodeBaru -> prev = NULL;

    if (isEmpty()){
        head = nodeBaru;
        tail = nodeBaru;
        head -> next = NULL;
        head -> prev = NULL;
    }else{
        nodeBaru -> next = head;
        head -> prev = nodeBaru;
        head = nodeBaru;
    }
    cout << "DATA " << dataBaru << " TELAH DITAMBAHKAN" << endl;
}

void tampil(){
     Node *current;

     current = head;
     if (!isEmpty()){
        while (current != NULL){
            cout << "<- [" << current -> data <<"] ->";
            current = current -> next;
        }
        cout << endl;
     }else{
        cout << " BELUM ADA DATA YANG MASUK" << endl;
     }
}

int main(){
    cout << "======================== " << endl;
    cout << "==== TAMBAHKAN DATA ==== " << endl;
    cout << "======================== \n" << endl;
    tambahDepan(30);
    tampil();

    tambahDepan(20);
    tampil();

    tambahDepan(10);
    tampil();

    return 0;
}
