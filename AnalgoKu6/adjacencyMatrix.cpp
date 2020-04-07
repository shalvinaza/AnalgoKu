/*
Nama    : Shalvina Zahwa Aulia
NPM     : 140810180052
Tugas 6 Adjacency Matrix
*/
#include <iostream>
#include<windows.h>
using namespace std;

int vertex[20][20];
int count = 0;
void printMatrix(int v)
{
    int i, j;
    for (i = 0; i < v; i++)
    {
        for (j = 0; j < v; j++)
        {
            cout << vertex[i][j] << " ";
        }
        cout << endl;
    }
}
void add_edge(int a, int b)
{
    vertex[a][b] = 1;
    vertex[b][a] = 1;
}
main(int argc, char *argv[])
{
    int v;
    cout << "Masukkan jumlah matrix : ";cin >> v;

    int pilihan,a,b;
    while(true){
        cout << "Pilihan menu : " << endl;
        cout << "1. Tambah edge " << endl;
        cout << "2. Print " << endl;
        cout << "3. Exit " << endl;
        cout << "Masukan pilihan : "; cin >> pilihan;
        switch (pilihan)
        {
            case 1:
                cout << "Masukkan node A : "; cin >> a;
                cout << "Masukkan node B : "; cin >> b;
                add_edge(a,b);
                cout << "Edge ditambahkan\n";
                system("Pause");
                system("CLS");
                break;
            case 2:
                printMatrix(v);
                system("Pause");
                system("CLS");
                break;
            case 3:
                return 0;
                break;
            default:
                break;
        }
    }
}
