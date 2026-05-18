/*Nama File     : CekSegitiga.c*/
/*Deskripsi     : Menentukan segitiga apakah jika diberi 3 nilai inputan
                  bilangan integer secara acak*/
/*Pembuat       : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan : 03 Maret 2025 - 20.53*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int s1; /*Sisi satu segitiga*/
    int s2; /*Sisi dua segitiga*/
    int s3; /*Sisi tiga segitiga*/

    /*Algoritma*/
    printf("======Menentukan Segitiga======\n");
    printf("\nMasukkan nilai s1 = ");
    scanf("%d",&s1);
    printf("\nMasukkan nilai s2 = ");
    scanf("%d",&s2);
    printf("\nMasukkan nilai s3 = ");
    scanf("%d",&s3);

    if (s1 <= 0 || s2 <= 0 || s3 <= 0) {
        printf("\nTerdapat nilai yang bukan sisi segitiga", s1, s2, s3);
    } else if (s1 == s2 && s1 == s3 && s2 == s3){
        printf("Segitiga Sama sisi");
    } else if (s1 == s2 || s1 == s3 || s2 == s3){
        printf("Segitiga Sama Kaki");
    } else {
        printf("Segitiga Sembarang");
    }
        return 0;
}