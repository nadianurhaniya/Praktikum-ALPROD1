/*Nama File     : LuasKellLayang.c*/
/*Deskripsi     : Menghitung luas dan keliling layang-layang dari sebuah layang-layang
                  dengan sisi s1 dan s2, serta diagonal d1 dan d2*/
/*Pembuat       : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan : 02 Maret 2025 - 14.36*/

#include <stdio.h> /*Header File*/

/*program Utama*/
int main()
{   /*Kamus*/
    float s1; /*Sisi satu layang-layang dalam meter*/
    float s2; /*Sisi dua layang-layang dalam meter*/
    float d1; /*diagonal satu layang-layang dalam meter*/
    float d2; /*diagonal dua layang-layang dalam meter*/
    float Luas; /*Luas Layang-layang*/
    float Kell; /*Keliling layang-layang*/

    /*Algoritma*/
    printf("======Menghitung Luas dan Keliling Layang-Layang======\n");
    printf("\nMasukkan nilai s1 = ");
    scanf("%f",&s1);
    printf("\nMasukkan nilai s2 = ");
    scanf("%f",&s2);
    printf("\nMasukkan nilai d1 = ");
    scanf("%f",&d1);
    printf("\nMasukkan nilai d2 = ");
    scanf("%f",&d2);


    Luas = 0.5 * d1 * d2;
    Kell = 2 * (s1 + s2);

    printf("Luas Layang-layang = %.2f\n", Luas);
    printf("Keliling Layang-layang = %.2f\n", Kell);

    return 0;
}
