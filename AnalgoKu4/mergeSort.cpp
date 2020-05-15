/*
Nama      : Shalvina Zahwa Aulia
NPM       : 140810180052
Kelas     : B
Deskripsi : Program C++ merge sort dari terkecil ke terbesar
*/
#include <iostream>
#include<chrono>

using namespace std;

void gabung(int* A, int p, int q, int r){
    int n1 = q-p+1;
    int n2 = r-q;
    int kiri[n1+1];
    int kanan[n2+1];
    for(int i=1; i<=n1; i++){
        kiri[i-1]=A[(p-1)+i-1];
    }
    for(int j=1; j<=n2; j++){
        kanan[j-1]=A[(q-1)+j];
    }

    int i=0, j=0;
    kiri[n1]=2147483647;
    kanan[n2]=2147483647;

    for(int k=(p-1); k<r; k++){
        if(kiri[i]<=kanan[j]){
            A[k]=kiri[i];
            i+=1;
        }
        else{
            A[k]=kanan[j];
            j+=1;
        }
    }
}
void mergeSort(int* A, int p, int r){
    int q;
    if(p<r){
        q=(p+r)/2;
        mergeSort(A,p,q);
        mergeSort(A,q+1,r);
        gabung(A,p,q,r);
    }
}

int main(){
    int A[100];
    int n;
    cout << "Banyak data\t : "; cin >> n;
    for(int i=0; i<n; i++){
        cout << "Angka ke-"<<i+1<<" : "; cin >>A[i];
    }
    auto start = chrono::steady_clock::now();
    mergeSort(A,1,n);
    auto end = chrono::steady_clock::now();
    cout << "Hasil merge sort: ";
    for(int i=0; i<n; i++){
        cout << A[i] << " ";
    }
    cout<<endl;
    cout << "Elapsed time in nanoseconds : "
		<< chrono::duration_cast<chrono::nanoseconds>(end - start).count()
		<< " ns" << endl;

    return 0;
}

