#include <stdio.h>

int main() {
    // Kamus
    int N;
    int T[100000];
    int genap[100000], ganjil[100000];
    int indexgenap = 0, indexganjil = 0;
    int i, j, temp;
    float mediangenap, medianganjil, hasil;

    // Input jumlah elemen dan elemen array
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }

    // Bubble Sort
    for (i = 0; i < N - 1; i++) {
        int swapped = 0;
        for (j = 0; j < N - i - 1; j++) {
            if (T[j] > T[j + 1]) {
                temp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) break;
    }

    // Pisahkan angka genap dan ganjil
    for (i = 0; i < N; i++) {
        if (T[i] % 2 == 0) {
            genap[indexgenap++] = T[i];
        } else {
            ganjil[indexganjil++] = T[i];
        }
    }

    // Cari median genap
    if (indexgenap == 0) {
        mediangenap = 0;
    } else if (indexgenap % 2 == 1) {
        mediangenap = genap[indexgenap / 2];
    } else {
        mediangenap = (genap[indexgenap / 2 - 1] + genap[indexgenap / 2]) / 2.0;
    }

    // Cari median ganjil
    if (indexganjil == 0) {
        medianganjil = 0;
    } else if (indexganjil % 2 == 1) {
        medianganjil = ganjil[indexganjil / 2];
    } else {
        medianganjil = (ganjil[indexganjil / 2 - 1] + ganjil[indexganjil / 2]) / 2.0;
    }

    // Hitung rata-rata dari kedua median
    if (indexgenap > 0 && indexganjil > 0) {
        hasil = (mediangenap + medianganjil) / 2.0;
    } else if (indexgenap > 0) {
        hasil = mediangenap;
    } else if (indexganjil > 0) {
        hasil = medianganjil;
    } else {
        hasil = 0.0;
    }

    printf("%.3f\n", hasil);
    return 0;
}