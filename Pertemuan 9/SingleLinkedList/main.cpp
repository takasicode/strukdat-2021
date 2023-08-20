#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *head;
Node *tail;

void awal(){
     head = NULL;
}

bool isEmpty(){
    if (head==NULL){
        return true;
    }
    return false;
}

void tambahHead(int tambahkanHead){
    Node *tambahkan;
    tambahkan = new Node;
    tambahkan -> data = tambahkanHead;
    tambahkan -> next = NULL;
    if(isEmpty()){
        head = tambahkan;
        head -> next = NULL;
    }
    else{
        tambahkan -> next = head;
        head = tambahkan;
    }
    cout << "Nomor urut Nasabah" << endl;
}

void tampil(){
    if (!isEmpty()){
        Node *bantu;
        bantu = head;
        do{
            cout << "->["<< bantu->data << "]";
            bantu = bantu->next;
        }while(bantu != NULL);
        cout<<endl;
    }else{
        cout<< "Kosong, silahkan tambahkan Nasabah terlebih dahulu!";
        }
}

int main(){
    cout << "\n=====NOMOR URUT NASABAH====="<<endl;
    cout << "============================"<< endl;
    tambahHead(3);
    tambahHead(2);
    tambahHead(1);
    tampil();
    return 0;
}
