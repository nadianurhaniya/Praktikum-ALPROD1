/*Nama File     : jarakPBola.c*/
/*Deskripsi     : Menghitung jarak yang ditempuh benda yang mengalami gerak parabola dengan
                  kecepatan awal dalam waktu t dengan gravitasi g*/
/*Pembuat       : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan : 02 Maret 2025 - 14.18*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int v0;  /*Kecepatan awal dalam meter per detik*/
    int t;   /*waktu dalam detik*/
    int g;   /*gravitasi dalam meter per detik kuadrat*/
    float y;   /*Jarak yang ditempuh benda yang mengalami gerak parabola*/

    /*Algoritma*/
    printf("======Menghitung Jarak Parabola======\n");
    printf("\nMasukkan Kecepatan Awal (v0) = ");
    scanf("%d",&v0);
    printf("\nMasukkan Waktu (t) = ");
    scanf("%d",&t);
    printf("\nMasukkan gravitasi (g) = ");
    scanf("%d",&g);

    y = v0 * t - (0.5 * (g * (t*t)));
    printf("Jarak Parabola (y) = %.2f\n", y);

    return 0;
}