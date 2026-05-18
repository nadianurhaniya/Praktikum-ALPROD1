/*Nama File     : JumDeret.c*/
/*Deskripsi     : Menghitung jumlah total deret sebanyak N bilangan*/
/*Pembuat       : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan : 18 Maret 2025 - 16.36*/

#include <stdio.h>  /*header file*/

/*Program Utama*/
int main(){
    /*Kamus*/
    int N;  /*Banyaknya bilangan*/
    int total = 0;  /*counter*/

    /*Algoritma*/
    printf("Masukkan nilai N: ");  /*Input Nilai N*/
    scanf("%d", &N);

    if (N <= 0) {         /*Validasi Input*/
        printf("Bilangan harus positif\n");
    } else {
        for (int i = 1; i <= N; i++) {     /*Menghitung jumlah deret*/
            total += i;
        }
        printf("Jumlah total deret : %d\n", total);    /*Menampilkan hasil*/
    }
    return 0;
}