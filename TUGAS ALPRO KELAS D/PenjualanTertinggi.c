// Nama File : PenjualanTertinggi.c
// Deskripsi : Untuk menentukan penjualan tertinggi keseluruhan (outputnya kota, bulan, nilai)
// Pembuat   : 24060124120019 - Nadia Azura Nurhaniya
// Tgl Pembuatan : 19 Mei 2025 - 22.17

#include <stdio.h>

// Data Umum
char* kota[3] = {"Semarang", "Jakarta", "Yogyakarta"};
char* bulan[4] = {"Januari", "Februari", "Maret", "April"};

int penjualan[3][4] = {
    {10, 15, 10, 5},
    {20, 25, 20, 15},
    {10, 5, 14, 3}
};

// Penjualan Tertinggi Keseluruhan 
int main() {
    char* kota[3] = {"Semarang", "Jakarta", "Yogyakarta"};
    char* bulan[4] = {"Januari", "Februari", "Maret", "April"};
    int penjualan[3][4] = {
        {10, 15, 10, 5},
        {20, 25, 20, 15},
        {10, 5, 14, 3}
    };

    int max = penjualan[0][0];
    int kota_i = 0, bulan_j = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (penjualan[i][j] > max) {
                max = penjualan[i][j];
                kota_i = i;
                bulan_j = j;
            }
        }
    }

    printf("Penjualan tertinggi: %s - %s (%d)\n", kota[kota_i], bulan[bulan_j], max);
    return 0;
}
