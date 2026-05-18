/*Nama File     :volBolaKerct.c*/
/*Deskripsi     : Menghitung volume bola dan volume kerucut dari sebuah lingkaran
                  dengan jari-jari r dan konstanta PHI sebesar 3.1415*/
/*Pembuat       : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan : 02 Maret 2025 - 14.30*/

#include <stdio.h> /*Header File*/

/*Program Utama*/
int main()
{   /*Kamus*/
    float r;  /*jari-jari lingkaran dalam meter*/
    float phi = 3.1415; 
    float Vb; /*volume bola*/
    float Vk; /*volume kerucut*/

    /*Algoritma*/
    printf("======Menghitung Volume Bola dan Kerucut======\n");
    printf("\nMasukkan nilai jari-jari (r) = ");
    scanf("%f",&r);
    
    Vb = (4.0/3.0) * (phi * (r*r*r));
    Vk = 1.0/2.0 * Vb;

    printf("Volume Bola = %.2f\n", Vb);
    printf("Volume Kerucut = %.2f\n", Vk);

    return 0;
}