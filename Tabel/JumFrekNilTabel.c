/*Nama File 	  : JumFrekNilTabel.c*/
/*Deskripsi 	  : Untuk menampilkan jumlah nilai-nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali*/
/*Pembuat   	  : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan	  : 8 April 2025 - 16.59 */

#include <stdio.h> 

int main(){
    /*Kamus*/
    int N, i, j;

    printf("Masukkan panjang tabel: ");
    scanf("%d", &N);

    int T[N];
    int sudahDicek[N];

    /*Algoritma*/
    for (i = 0; i < N; i++){
        sudahDicek[i] = 0;
    }

    for(i = 0; i < N; i++){
        printf("Masukkan elemen ke-%d: ", i + 1);
        scanf("%d", &T[i]);
    }

    int jumlah = 0;

    for (i = 0; i < N; i++){
        if (sudahDicek[i] == 0){
            int frekuensi = 1;
            for (j = i + 1; j < N; j++){
                if (T[i] == T[j]){
                    frekuensi++;
                    sudahDicek[j] = 1;
                }
            }
            if (frekuensi > 1){
                jumlah += T[i] * frekuensi;
            }
        }
    }
    printf("Jumlah Nilai-nilai yang muncul lebih dari satu kali = %d\n", jumlah);

    return 0;
}