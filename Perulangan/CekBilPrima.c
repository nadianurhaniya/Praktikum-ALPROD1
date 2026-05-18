/*Nama File     : CekBilPrima.c*/
/*Deskripsi     : Untuk menentukan apakah N adalah bilangan prima atau bukan*/
/*Pembuat       : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan : 18 Maret 2025 - 20.04*/

#include <stdio.h>  /*header file*/

/*Program Utama*/
int main(){
    /*Kamus*/
    int N;
    int count = 0;

    /*Algoritma*/
    printf("Masukkan nilai N: ");
    scanf("%d", &N);
    
    if (N <= 0) {
        printf("Bilangan harus lebih dari 0\n");
    } else {
        for (int i = 1; i <= N; i++) {
            if (N % i == 0) {
                count++;
            }
        }
        if (count == 2) {
            printf("%d adalah Bilangan Prima\n", N);
        } else {
            printf("%d adalah Bukan Bilangan Prima\n", N);
        }
    }
    return 0;
}