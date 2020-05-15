/*
Nama        : Shalvina Zahwa Aulia
NPM         : 140810180052
Deskripsi   : Program mencari index key nilai y
*/

#include <iostream>
using namespace std;

int main(){

    int n, y, first, mid, last;

    cout << "Masukkan banyak angka : "; cin >>  n;
    int x[n];
    for(int i=0; i<n; i++){
        cout << "Angka ke-"<<i<< " : "; cin >> x[i];
    }
    cout << "Angka yang dicari : "; cin >> y;
    first = 0;
    last = n-1;

    while(first <= last){
        mid = (first+last)/2;
        if(x[mid] < y){
            first = mid +1;
        }
        else if(x[mid] == y){
            cout << "Angka " << y << " ditemukan di array ke-" << mid+1 << endl;
            break;
        }
        else{
            last = mid-1;
        }
        mid = (first+last)/2;
    }
    if(first>last){
        cout << "angka tidak ditemukan\n";
    }
    return 0;
}
