/*Nama File     : tukarInt.c*/
/*Deskripsi     : Berfungsi untuk menukar nilai dari dua buah bilangan a dan b*/
/*Pembuat       : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan : 08 April 2025 - 14.52*/

#include <stdio.h>

void tukarInt(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    /*Kamus*/
    int a, b;

    /*Algoritma*/
    printf("Masukkan dua bilangan: ");
    scanf("%d %d", &a, &b);

    printf("Sebelum ditukar: %d %d\n", a,b);

    tukarInt(&a, &b);

    printf("Sesudah ditukar: %d %d\n", a,b);

    return 0;
}