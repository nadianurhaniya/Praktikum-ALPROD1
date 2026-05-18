/*Nama File 	  : NilMax2Tabel.c*/
/*Deskripsi 	  : Untuk menampilkan nilai elemen tabel T yang frekuensi kemunculannhya lebih dari satu kali*/
/*Pembuat   	  : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan	  : 8 April 2025 - 16.32 */

#include <stdio.h>

int main() {
    /*Kamus*/
    int i, j, N;

    printf("Masukkan panjang tabel: ");
    scanf("%d", &N);

    int T[N];              
    int sudahDicek[N];      
    
    /*Algoritma*/
    for (i = 0; i < N; i++) {
        sudahDicek[i] = 0;
    }

    for (i = 0; i < N; i++) {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &T[i]);
    }

    printf("Elemen tabel yang muncul lebih dari satu kali:\n");

    /*Cek frekuensi*/
    for (i = 0; i < N; i++) {
        if (sudahDicek[i] == 0) {
            int frekuensi = 1;
            for (j = i + 1; j < N; j++) {
                if (T[i] == T[j]) {
                    frekuensi++;
                    sudahDicek[j] = 1;  
                }
            }
            if (frekuensi > 1) {
                printf("%d ", T[i]);
            }
        }
    }

    return 0;
}