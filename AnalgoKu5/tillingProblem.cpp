/*
Nama    : Shalvina Zahwa Aulia
NPM     : 140810180052
Tugas Tilling Problem
*/
#include <bits/stdc++.h>

using namespace std;

int hitungCara(int n, int m)
{
    int count[n + 1];
    count[0] = 0;

    for (int i = 1; i <= n; i++) {
        if (i > m)
            count[i] = count[i - 1] + count[i - m];
        else if (i < m)
            count[i] = 1;
        else
            count[i] = 2;
    }
    return count[n];
}
int main()
{
    int n = 7, m = 3;
    cout << "Hasil = "
         << hitungCara(n, m);
    return 0;
}
