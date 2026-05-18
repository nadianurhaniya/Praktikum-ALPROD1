/*Nama File     : BilPrimaN.c*/
/*Deskripsi     : Menampilkan bilangan prima sampai dengan N*/
/*Pembuat       : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan : 19 Maret 2025 - 08.20 */

#include <stdio.h>  /*header file*/

/* Program Utama */
int main() {
    /* Kamus */
    int N;
    int i;
    int j;
    int jumlahFaktor;

    /* Algoritma */
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N harus positif\n");
    } else {
        for (i = 1; i <= N; i++) {
            jumlahFaktor = 0;

            for (j = 1; j <= i; j++) {
                if (i % j == 0) {
                    jumlahFaktor++;
                }
            }
            if (jumlahFaktor == 2) { 
                printf("%d ", i); 
            }
        }
        printf("\n"); 
    }
    return 0;
}
