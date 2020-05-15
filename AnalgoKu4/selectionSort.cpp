/*
Nama      : Shalvina Zahwa Aulia
NPM       : 140810180052
Kelas     : B
Deskripsi : Program C++ selection sort dari terkecil ke terbesar
*/
#include<iostream>
#include<conio.h>

using namespace std;

int x1[100], x2[100];
int n;

void tukar(int p, int q){
    int temp;
    temp = x1[q];
    x1[q] = x1[p];
    x1[p] = temp;
}

void selectionSort(){
    int pos, i,j;
    for(int i=1; i<=n-1; i++){
        pos=i;
        for(int j=i+1; j<=n; j++){
            if(x1[j]<x1[pos])
                pos = j;
        }
        if(pos!=i)
            tukar(pos,i);
    }
}
int main(){
    cout << "Banyak data : "; cin >> n;
    for(int i=1; i<=n; i++){
        cout << "Angka ke-"<<i<<" : "; cin>>x1[i];
        x2[i]=x1[i];
    }
    selectionSort();
    cout << "Hasil selection sort : \n";
    for(int i=1; i<=n; i++){
        cout<<x1[i]<< " ";
    }
    getch();
}
