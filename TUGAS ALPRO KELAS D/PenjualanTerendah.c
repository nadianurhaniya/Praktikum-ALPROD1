// Nama File : PenjualanTerendah.c
// Deskripsi : Untuk menentukan penjualan terendah keseluruhan (outputnya kota, bulan, nilai)
// Pembuat   : 24060124120019 - Nadia Azura Nurhaniya
// Tgl Pembuatan : 19 Mei 2025 - 22.43

#include <stdio.h>

// Data Umum
char* kota[3] = {"Semarang", "Jakarta", "Yogyakarta"};
char* bulan[4] = {"Januari", "Februari", "Maret", "April"};

int penjualan[3][4] = {
    {10, 15, 10, 5},
    {20, 25, 20, 15},
    {10, 5, 14, 3}
};

// Penjualan Terendah Keseluruhan 
int main() {
    char* kota[3] = {"Semarang", "Jakarta", "Yogyakarta"};
    char* bulan[4] = {"Januari", "Februari", "Maret", "April"};
    int penjualan[3][4] = {
        {10, 15, 10, 5},
        {20, 25, 20, 15},
        {10, 5, 14, 3}
    };

    int min = penjualan[0][0];
    int kota_i = 0, bulan_j = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (penjualan[i][j] < min) {
                min = penjualan[i][j];
                kota_i = i;
                bulan_j = j;
            }
        }
    }

    printf("Penjualan terendah: %s - %s (%d)\n", kota[kota_i], bulan[bulan_j], min);
    return 0;
}