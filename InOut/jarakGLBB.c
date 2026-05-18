/*Nama File     : jarakGLBB.c*/
/*Deskripsi     : Menentukan jarak yang ditempuh benda yang mengalami gerak lurus
                  berubah beraturan dengan input kecepatan awal, waktu, dan percepatan*/
/*Pembuat       : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan : 02 Maret 2025 - 14.12*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{   /*Kamus*/
    float t;  /*waktu dalam detik*/
    float v0; /*kecepatan awal dlam meter per detik*/
    float a;  /*percepatan dalam meter per detik kuadrat*/
    float S; /*Jarak yang akan dicari nilainya*/

    /*Algoritma*/
    printf("======Menghitung Jarak GLBB======\n");
    printf("\nMasukkan Waktu (t) = ");
    scanf("%f",&t); 
    printf("\nMasukkan Kecepatan Awal (v0) = ");
    scanf("%f",&v0);
    printf("\nMasukkan Percepatan (a) = ");
    scanf("%f",&a);
    
    S = v0 * t + (0.5 * (a * (t*t)));
    printf("Jarak (S) = %.2f\n", S);
    
    return 0;
}