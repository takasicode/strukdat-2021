#include <iostream>
#define MAX 6

using namespace std;

struct Qeue{
    int top, data[MAX];
}Antrian;

bool isEmpty(){
    return Antrian.top == -1;
}

bool isFull(){
    return Antrian.top == MAX-1;
}

void push(int data){
    if(isFull()){
        cout << "Sudah Penuh" << endl;
    }else{
        Antrian.top = Antrian.top + 1;

        Antrian.data[Antrian.top] = data;
        cout << " Data " << Antrian.data[Antrian.top] << " Masuk ke Antrian" << endl;
    }
}

void printSemua(){
    if(isEmpty()){
        cout << "Antrian Kosong" << endl;
    }else{
        cout << "Antrian Sekarang: " << endl;

        for (int i= Antrian.top; i>0; i--)
            cout << " _ " << Antrian.data[i];
        //for (int i= 1; i<= Antrian.top; i++)
            //cout << Antrian.data[i] << endl;
    }
}

void pop(){
    if(isEmpty()){
        cout << "Antrian Kosong" << endl;
    }else{

        for(int i=0; i< Antrian.top; i++)
            Antrian.data[i] = Antrian.data[i+1];
        Antrian.top = Antrian.top - 1;
        cout << endl;
    }
}

int main()
{
    push(10);
    push(7);
    push(1);
    printSemua();

    pop();
    printSemua();

    push(99);
    printSemua();
    return 0;
}
