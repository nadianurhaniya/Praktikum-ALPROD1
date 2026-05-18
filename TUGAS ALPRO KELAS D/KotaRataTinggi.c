// Nama File : KotaRataTinggi.c
// Deskripsi : Untuk menentukan kota mana yang menghasilkan rata-rata penjualan tertinggi
// Pembuat   : 24060124120019 - Nadia Azura Nurhaniya
// Tgl Pembuatan : 19 Mei 2025 - 19.57

#include <stdio.h>

// Data Umum
char* kota[3] = {"Semarang", "Jakarta", "Yogyakarta"};
char* bulan[4] = {"Januari", "Februari", "Maret", "April"};

int penjualan[3][4] = {
    {10, 15, 10, 5},
    {20, 25, 20, 15},
    {10, 5, 14, 3}
};

// Kota dengan rata-rata penjualan tertinggi
int main() {
    char* kota[3] = {"Semarang", "Jakarta", "Yogyakarta"};
    int penjualan[3][4] = {
        {10, 15, 10, 5},
        {20, 25, 20, 15},
        {10, 5, 14, 3}
    };

    int mean_kota[3];
    for (int i = 0; i < 3; i++) {
        int total = 0;
        for (int j = 0; j < 4; j++) {
            total += penjualan[i][j];
        }
        mean_kota[i] = total / 4;
    }

    int max = mean_kota[0], index = 0;
    for (int i = 1; i < 3; i++) {
        if (mean_kota[i] > max) {
            max = mean_kota[i];
            index = i;
        }
    }

    printf("Kota dengan rata-rata penjualan tertinggi: %s (%d)\n", kota[index], max);
    return 0;
}