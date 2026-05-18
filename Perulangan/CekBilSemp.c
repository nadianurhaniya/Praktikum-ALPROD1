/*Nama File     : CekBilPrima.c*/
/*Deskripsi     : Untuk menentukan apakah N adalah bilangan sempurna atau bukan*/
/*Pembuat       : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan : 18 Maret 2025 - 20.45 */

#include <stdio.h>  /*header file*/

/*Program Utama*/
int main(){
    /*Kamus*/
    int N;
    int i;
    int jumlah;

    /*Algoritma*/
    printf("Masukkan nilai N = ");
    scanf("%d", &N);
    jumlah = 0;

    if (N <= 0) {
        printf("Bilangan harus lebih dari 0", N);
    } else {
        for (i = 1; i < N; i++)
        {
            if (N%i == 0){
                jumlah += i;
            }
        }
        if (jumlah == N) {
            printf("Angka %d adalah bilangan sempurna", N);
        } else {
            printf("Angka %d bukan bilangan sempurna", N);
    
        }
    }
    return 0;
} 