/*Nama File 	  : NilMax2Tabel.c*/
/*Deskripsi 	  : Untuk menampilkan nilai maksimum ke-2*/
/*Pembuat   	  : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan	  : 8 April 2025 - 16.00 */

#include <stdio.h>

int main()
{
    /*Kamus*/
    int i, N, P[N], maxTabel, max2Tabel;

    /*Algoritma*/
    printf("Masukkan panjang tabel: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &P[i]);
    }

    if (P[0] > P[1])
    {
        maxTabel = P[0];
        max2Tabel = P[1];
    }
    else
    {
        maxTabel = P[1];
        max2Tabel = P[0];
    }

    for (i = 2; i < N; i++)
    {
        if (P[i] > maxTabel)
        {
            max2Tabel = maxTabel;
            maxTabel = P[i];
        }
        else if (P[i] > max2Tabel && P[i] < maxTabel)
        {
            max2Tabel = P[i];
        }
    }

    printf("Nilai maksimum kedua: %d\n", max2Tabel);

    return 0;
}

