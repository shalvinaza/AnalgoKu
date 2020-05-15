/*
Nama      : Shalvina Zahwa Aulia
NPM       : 140810180052
Kelas     : B
Deskripsi : Program C++ selection sort dari terkecil ke terbesar
*/
#include <iostream>
#include <conio.h>

using namespace std;

int data[100],data2[100],n;

void insertion_sort()
{
	int temp,i,j;
	for(i=1;i<=n;i++){
	    temp = data[i];
		j = i -1;
	    while(data[j]>temp && j>=0){
			data[j+1] = data[j];
	   	    j--;
	    }
	    data[j+1] = temp;
	}
}
int main()
{
	cout<<"Jumlah Data : "; cin>>n;
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
	  cout<<"Angka ke-"<<i<<" : ";
	  cin>>data[i];
	  data2[i]=data[i];
	}
	insertion_sort();
	cout<<"\nHasil insertion sort : "<<endl;
	for(int i=1; i<=n; i++)
	{
	  cout<<data[i]<<" ";
	}
	getch();
}
