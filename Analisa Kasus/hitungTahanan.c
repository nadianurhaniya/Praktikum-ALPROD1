/*Nama File     : hitungTahanan.c*/
/*Deskripsi     : Menjumlahkan 3 buah input tahanan berupa bilangan integer 
                  positif dan tidak boleh bernilai negatif*/
/*Pembuat       : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan : 03 Maret 2025 - 20.45*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int i;
    int j;
    int k;
    int total;

    /*Algoritma*/
    printf("======Menentukan jumlah tahanan======\n");
    printf("\nMasukkan tahanan 1 = ");
    scanf("%d",&i);
    printf("\nMasukkan tahanan 2 = ");
    scanf("%d",&j);
    printf("\nMasukkan tahanan 3 = ");
    scanf("%d",&k);
    if (i < 0 || j < 0 || k < 0) {
        printf("\nMasukkan tahanan tidak boleh negatif", i,j,k);}
        else {
            total = i + j + k ;
            printf("\nJadi total tahanan adalah %d", total);
        }
        return 0;
    }
