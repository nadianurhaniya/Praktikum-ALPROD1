// Nama File : BulanRataTinggi.c
// Deskripsi : Untuk menentukan Bulan apa yang menghasilkan rata-rata penjualan tertinggi
// Pembuat   : 24060124120019 - Nadia Azura Nurhaniya
// Tgl Pembuatan : 19 Mei 2025 - 20.30

#include <stdio.h>

// Data Umum
char* kota[3] = {"Semarang", "Jakarta", "Yogyakarta"};
char* bulan[4] = {"Januari", "Februari", "Maret", "April"};

int penjualan[3][4] = {
    {10, 15, 10, 5},
    {20, 25, 20, 15},
    {10, 5, 14, 3}
};

// Bulan dengan rata-rata penjualan tertinggi
int main() {
    char* bulan[4] = {"Januari", "Februari", "Maret", "April"};
    int penjualan[3][4] = {
        {10, 15, 10, 5},
        {20, 25, 20, 15},
        {10, 5, 14, 3}
    };

    int mean_bulan[4] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            mean_bulan[j] += penjualan[i][j];
        }
    }

    int max = mean_bulan[0] / 3, index = 0;
    for (int j = 1; j < 4; j++) {
        int rata = mean_bulan[j] / 3;
        if (rata > max) {
            max = rata;
            index = j;
        }
    }

    printf("Bulan dengan rata-rata penjualan tertinggi: %s (%d)\n", bulan[index], max);
    return 0;
}