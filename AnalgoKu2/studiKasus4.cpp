/*
Nama        : Shalvina Zahwa Aulia
NPM         : 140810180052
Deskripsi   : Program mencari index key nilai y
*/

#include <iostream>
using namespace std;

int x[100], x1[100], n;

void insertionSort(){
    int temp,j;
    for(int i=1; i<=n; i++){
        temp = x[i];
        j=i-1;
        while(x[j]>temp && j>=0){
            x[j+1] = x[j];
            j--;
        }
        x[j+1] = temp;
    }
}

int main(){
    cout << "Jumlah angka : "; cin >> n;
    for(int i=1; i<=n; i++){
        cout << "Angka ke-"<<i<<" : "; cin >> x[i];
        x1[i]=x[i];
    }
    insertionSort();
    cout << "Hasil insertion sort : \n";
    for(int i=1; i<=n; i++){
        cout << x[i] <<", ";
    }
    return 0;
}

