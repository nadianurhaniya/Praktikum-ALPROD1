#include <stdio.h>

void tambahMataKuliah(int TABMK[], int *NMK, int MKX) {
    int i = 0;

    // Cari posisi penyisipan
    while (i < *NMK && TABMK[i] < MKX) {
        i++;
    }

    // Cek apakah sudah ada
    if (i < *NMK && TABMK[i] == MKX) {
        printf("MKX sudah ada dalam tabel. Tidak ditambahkan.\n");
        return;
    }

    // Geser elemen untuk memberi ruang
    for (int j = *NMK; j > i; j--) {
        TABMK[j] = TABMK[j - 1];
    }

    // Sisipkan MKX
    TABMK[i] = MKX;
    (*NMK)++;

    printf("MKX berhasil ditambahkan pada posisi ke-%d\n", i);
}

int main() {
    int TABMK[100];
    int NMK, MKX;

    printf("Masukkan jumlah mata kuliah awal: ");
    scanf("%d", &NMK);

    printf("Masukkan kode mata kuliah terurut menaik:\n");
    for (int i = 0; i < NMK; i++) {
        scanf("%d", &TABMK[i]);
    }

    printf("Masukkan kode MKX yang akan ditambahkan: ");
    scanf("%d", &MKX);

    tambahMataKuliah(TABMK, &NMK, MKX);

    printf("Tabel setelah update:\n");
    for (int i = 0; i < NMK; i++) {
        printf("%d ", TABMK[i]);
    }

    printf("\n");
    return 0;
}
