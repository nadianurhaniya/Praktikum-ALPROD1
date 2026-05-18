/*Nama File     : gayaSentr.c*/
/*Deskripsi     : Menghitung gaya yang terjadi dari massa m, kecepatan v, dan jari-jari r*/
/*Pembuat       : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan : 02 Maret 2024 - 14.23*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    float m;    /*massa dalam kg*/
    float v;    /*kecepatan dalam meter per detik*/
    float r;    /*Jari-jari dalam meter*/
    float F;  /*Gaya*/

    /*Algoritma*/
    printf("======Menghitung Gaya======\n");
    printf("\nMasukkan massa (m) = ");
    scanf("%f",&m);
    printf("\nMasukkan kecepatan (v) = ");
    scanf("%f",&v);
    printf("\nMasukkan jari-jari (r) = ");
    scanf("%f",&r);

    F = m * (v*v/r);
    printf("Gaya (F) = %.2f\n", F);

    return 0;
}