#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *head;
Node *tail;

void awal(){
    head=NULL;
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
    nodeBaru->data = dataBaru;
    nodeBaru->next = NULL;

    if(isEmpty()){
        head = nodeBaru;
        head->next= NULL;
    }else{
        nodeBaru->next = head;
        head = nodeBaru;
    }
    cout << "Data depan ditambahkan" << endl;
}

void tampil(){

    if (!isEmpty()){
        Node *bantu;
        bantu = head;
        do{
            cout << bantu->data << " -> ";
            bantu = bantu->next;
        }while(bantu!=NULL);
        cout << endl;
    }

}

int main()
{
    tambahDepan(20);
    tampil();

    tambahDepan(7);
    tampil();

    tambahDepan(1);
    tampil();
    return 0;
}
