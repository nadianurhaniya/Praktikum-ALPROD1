/*Nama File     : BiayaKirim.c*/
/*Deskripsi     : Menghitung biaya pengiriman barang berdasarkan berat dan jarak*/
/*Pembuat       : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan : 02 Maret 2025 - 14.44*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int kg; /*Mempresentasikan berat barang*/
    int km; /*Jarak Pengiriman*/
    int BiayaKirim;

    /*Algoritma*/
    printf("======Menghitung Biaya Kirim======\n");
    printf("\nMasukkan berat barang = ");
    scanf("%d",&kg);
    printf("\nMasukkan jarak pengiriman = ");
    scanf("%d",&km);

    BiayaKirim = 10000 + (kg * 5000) + (km * 2000);
    
    printf("Biaya Kirim = %d", BiayaKirim);

    return 0;
}