/*
Nama        : Shalvina Zahwa Aulia
NPM         : 140810180052
Deskripsi   : Program selection sort
*/

#include <iostream>
using namespace std;

int x[100], x1[100], n;

void swipe(int a, int b){
    int t;
    t = x[b];
    x[b]=x[a];
    x[a]=t;
}

void selectionSort(){
    int temp,i,j;
    for(int i=1; i<=n-1; i++){
        temp = i;
        for(j=i+1; j<=n; j++){
            if(x[j]<x[temp])
            temp =j;
        }
        if(temp!=i)
            swipe(temp,i);
    }
}

int main(){
    cout << "Jumlah angka : "; cin >> n;
    for(int i=1; i<=n; i++){
        cout << "Angka ke-"<<i<<" : "; cin >> x[i];
        x1[i]=x[i];
    }
    selectionSort();
    cout << "Hasil insertion sort : \n";
    for(int i=1; i<=n; i++){
        cout << x[i] <<", ";
    }
    return 0;
}

