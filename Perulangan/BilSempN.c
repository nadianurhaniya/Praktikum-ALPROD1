/*Nama File     : BilSempN.c*/
/*Deskripsi     : Menampilkan bilangan sempurna sampai dengan N*/
/*Pembuat       : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan : 19 Maret 2025 09.10 - */

#include <stdio.h>  /*header file*/

/* Program Utama */
int main(){
    /*Kamus*/
    int N;
    int i;
    int j;
    int jumlah;

    /*Algoritma*/
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N harus positif\n");
    } else {
        printf("Bilangan sempurna hingga %d:\n", N);
        for (i = 1; i <= N; i++) {
            jumlah = 0;
            for (j = 1; j < i; j++){
                if (i % j == 0) {
                    jumlah += j;
                }
            }
            if (jumlah == i) {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}