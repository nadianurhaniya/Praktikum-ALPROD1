/*Nama File     : cekBillAll.c*/
/*Deskripsi     : Menentukan apakah bilangan N adalah prima, sempurna, atau bilangan biasa*/
/*Pembuat       : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan : 19 Maret 2025 - 11.35*/

#include <stdio.h>  /*header file*/

/* Program Utama */
int main(){
    /*Kamus*/
    int N;
    int i;
    int jumlahFaktor;
    int countfaktor;

    /*Algoritma*/
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N harus positif\n");
    } else {
        jumlahFaktor = 0;
        countfaktor = 0;

        for (i = 1; i <= N; i++) {
            if (N % i == 0) {
                jumlahFaktor += i;
                countfaktor++;
            }
        }
        if (jumlahFaktor - N == N) {
            printf("Bilangan Sempurna\n");
        } else if (countfaktor == 2) {
            printf("Bilangan Prima\n");
        } else {
            printf("Bilangan Biasa\n");
        }
    }
    return 0;
}