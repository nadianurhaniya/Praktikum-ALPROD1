/*Nama File     : namaBulan.c*/
/*Deskripsi     : Mengecek nama bulan dalam satu tahun sesuai dengan nomor bulan yang diberikan*/
/*Pembuat       : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan : 03 Maret 2025 - 20.32*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int i;
    
    /*Algoritma*/
    printf("======Masukkan bulan dari nomor 1 sampai 12======\n");
    printf("\nMasukkan nomor bulan == ");
    scanf("%d",&i);
    if (i == 1) {
        printf("\nNomor %d adalah bulan Januari", i);
    } else if (i == 2) {
        printf("\nNomor %d adalah bulan Februari", i);
    } else if (i == 3) {
        printf("\nNomor %d adalah bulan Maret", i);
    } else if (i == 4) {
        printf("\nNomor %d adalah bulan April", i);
    } else if (i == 5) {
        printf("\nNomor %d adalah bulan Mei", i);
    } else if (i == 6) {
        printf("\nNomor %d adalah bulan Juni", i);
    } else if (i == 7) {
        printf("\nNomor %d adalah bulan juli", i);
    } else if (i == 8) {
        printf("\nNomor %d adalah bulan Agustus", i);
    } else if (i == 9) {
        printf("\nNomor %d adalah bulan September", i);
    } else if (i == 10) {
        printf("\nNomor %d adalah bulan Oktober", i);
    } else if (i == 11) {
        printf("\nNomor %d adalah bulan November", i);
    } else if (i == 12) {
        printf("\nNomor %d aadalah bulan Desember", i);
    } else {
        printf("\nMasukan nomor bulan tidak tepat");
    }
    return 0;
}