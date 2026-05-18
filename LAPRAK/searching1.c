#include <stdio.h>

int sequentialSearchSentinel(int T[], int N, int X) {
    int i = 0;
    T[N] = X; // Pasang sentinel di akhir

    while (T[i] > X) {
        i++;
    }

    if (i < N && T[i] == X) {
        return i; // Ditemukan di posisi ke-i
    } else {
        return -1; // Tidak ditemukan
    }
}

int main() {
    int T[101]; // Indeks 0..100, indeks ke-100 adalah sentinel
    int N, X;

    printf("Masukkan jumlah elemen (maks 100): ");
    scanf("%d", &N);

    printf("Masukkan elemen dalam urutan menurun:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }

    printf("Masukkan nilai yang dicari: ");
    scanf("%d", &X);

    int hasil = sequentialSearchSentinel(T, N, X);
    if (hasil != -1) {
        printf("Elemen ditemukan di indeks ke-%d\n", hasil);
    } else {
        printf("Elemen tidak ditemukan\n");
    }

    return 0;
}
