/*Nama File 	  : IsiMatrik.c*/
/*Deskripsi 	  : Untuk mengisikan nilai pada elemen-elemen matrik yang memiliki ordo sama*/
/*Pembuat   	  : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan	  : 8 April 2025 - 20.45 */

#include <stdio.h>

int main(){
    /*Kamus*/
    int M, N;

    /*Algoritma*/
    printf("Masukkan nilai M: ");
    scanf("%d", &M);
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (M != N){
        printf("Nilai M dan N harus sama\n");
    } else {
        int matriks[M][N];

        for (int i = 0; i < M; i++){
            for (int j = 0; j < N; j++){
                if (i == j){
                    matriks[i][j] = 1;   
                } else if (j > i){
                    matriks[i][j] = 0;
                } else {
                    matriks[i][j] = 2;
                }
            }
        }

        printf("Hasil Matriks:\n");
        for (int i = 0; i < M; i++){
            for (int j = 0; j < N; j++){
                printf("%d", matriks[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

