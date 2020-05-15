/*
Nama        : Shalvina Zahwa Aulia
NPM         : 140810180052
Deskripsi   : Program mencari index key nilai y
*/


#include <iostream>
using namespace std;

int main(){
    int n, index,y;
    bool found = false;

    cout << "Masukkan jumlah banyak data : "; cin >> n;
    int x[n];

    for(int i=0; i<n; i++){
        cout << "Angka ke-"<<i<< " : "; cin >> x[i];
    }
    cout << "Angka yang dicari : "; cin >> y;
    for(int i=0; i<n; i++){
        if(x[i] == y){
            found = true;
            index = i;
            i = n;
        }
    }
    if (found = true){
        cout << "Data ketemu\n";
        cout << "Index angka yang dicari : " << index + 1;
    }
    else{
        cout << "Data tidak ditemukan";
        cout << "Index = 0";
    }
    return 0;
}
