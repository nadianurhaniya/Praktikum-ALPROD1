/*Nama File     : bilInteger.c*/
/*Deskripsi     : Untuk mengecek apakah suatu bilangan termasuk positif atau negatif atau bilangan nol*/
/*Pembuat       : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan : 03 Maret 2025 - 20.18*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int i;

    /*Algoritma*/
    printf("======Menentukan jenis bilangan bulat======\n");
    printf("\nMasukkan bilangan bulat = ");
    scanf("%d", &i);

    if (i == 0)
    {
        printf("\nBilangan %d adalah bilangan nol", i);
    }
    else if (i > 0)
    {
        printf("\nBilangan %d adalah bilangan bulat positif", i);
    }
    else if (i < 0)
    {
        printf("\nBilangan %d adalah bilangan bulat negatif", i);
    }
    return 0;
}