/*Nama File     : FaktorBil.c*/
/*Deskripsi     : Untuk menentukan faktor bilangan yang dapat dibentuk oleh bilangan N*/
/*Pembuat       : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan : 18 Maret 2025 - 17.25 */

#include <stdio.h>  /*header file*/

/*Program Utama*/
int main(){
     /*Kamus*/
    int N;

   /*Algoritma*/
   printf("Masukkan nilai N: ");
   scanf("%d", &N);

   if (N <= 0) {
        printf("Bilangan harus positif\n");
   } else {
        printf("Faktor dari %d adalah: ", N);

        for (int i = 1; i <= N; i++) {
            if (N % i == 0) {
                printf("%d", i);

            }
        }
        printf("\n");
   }
   return 0;
}