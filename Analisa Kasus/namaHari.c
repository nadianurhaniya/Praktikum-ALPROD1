/*Nama File     : namaHari.c*/
/*Deskripsi     : Mengecek nama hari dalam satu minggu sesuai dengan nomor hari yang diberikan*/
/*Pembuat       : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan : 03 Maret 2025 - 20.25*/

#include <stdio.h>  /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int i;
    
    /*Algoritma*/
    printf("======Masukkan hari dari nomor 1 sampai 7======\n");
    printf("\nMasukkan nomor hari == ");
    scanf("%d",&i);
    if (i == 1) {
        printf("\nNomor %d adalah hari Senin", i);
    } else if (i == 2) {
        printf("\nNomor %d adalah hari Selasa", i);
    } else if (i == 3) {
        printf("\nNomor %d adalah hari Rabu", i);
    } else if (i == 4) {
        printf("\nNomor %d adalah hari Kamis", i);
    } else if (i == 5) {
        printf("\nNomor %d adalah hari Jum'at", i);
    } else if (i == 6) {
        printf("\nNomor %d adalah hari Sabtu", i);
    } else if (i == 7) {
        printf("\nNomor %d adalah hari Minggu", i);
    } else {
        printf("\nMasukan nomor hari tidak tepat");
    }
    return 0;
}