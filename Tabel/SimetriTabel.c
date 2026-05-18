/*Nama File 	  : SimetriTabel.c*/
/*Deskripsi 	  : Untuk menentukan bahwa T1 dan T2 simetri atau tidak, yaitu
                    ukurannya sama dan nilai pada setiap elemen tabel T1 dan T2 sama*/
/*Pembuat   	  : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan	  : 8 April 2025 - 17.35*/

#include <stdio.h>

int main(){
    /*Kamus*/
    int N1, N2, i;

    /*Algoritma*/

    printf("Masukkan jumlah elemen T1: ");
    scanf("%d", &N1);

    printf("Masukkan jumlah elemen T2: ");
    scanf("%d", &N2);

    int T1[N1], T2[N2];

    if (N1 != N2) {
        printf("T1 dan T2 Tidak Simetri\n");
    } else {
        /*Input T1*/
        printf("Masukkan elemen T1:\n");
        for (i = 0; i < N1; i++) {
            printf("T1[%d] = ", i);
            scanf("%d", &T1[i]);
        }

        /*Input T2*/
        printf("Masukkan elemen T2:\n");
        for (i = 0; i < N2; i++) {
            printf("T2[%d] = ", i);
            scanf("%d", &T2[i]);
        }

        /*Cek elemen satu per satu*/
        for (i = 0; i < N1; i++) {
            if (T1[i] != T2[i]) {
                printf("T1 dan T2 Tidak Simetri\n");
                return 0;
            }
        }

        /*Jika semua elemen sama*/
        printf("T1 dan T2 Simetri\n");
    }

    return 0;
}