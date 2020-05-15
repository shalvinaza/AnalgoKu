/*
Nama      : Shalvina Zahwa Aulia
NPM       : 140810180052
Kelas     : B
Deskripsi : Program C++ bubble sort dari terkecil ke terbesar
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int arr[100],n,temp;
	cout<<"Banyak data : ";cin>>n;

	for(int i=0;i<n;++i){
		cout<<"Angka ke-"<<i+1<<" : ";cin>>arr[i];
	}

	for(int i=1;i<n;i++){
		for(int j=0;j<(n-1);j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"\nHasil Bubble Sort : "<<endl;
	for(int i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
}
