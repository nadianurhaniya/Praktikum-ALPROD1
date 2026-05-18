// Nama File : InputKota.c
// Deskripsi : Untuk menentukan Bulan apa yang menghasilkan penjualan tertinggi berdasarkan inputan Kota
// Pembuat   : 24060124120019 - Nadia Azura Nurhaniya
// Tgl Pembuatan : 19 Mei 2025 - 21.24

#include <stdio.h>
#include <string.h>

// Data Umum
char* kota[3] = {"Semarang", "Jakarta", "Yogyakarta"};
char* bulan[4] = {"Januari", "Februari", "Maret", "April"};

int penjualan[3][4] = {
    {10, 15, 10, 5},
    {20, 25, 20, 15},
    {10, 5, 14, 3}
};

// Penjualan (bulan) tertinggi pada kota X
int main() {
    char* kota[3] = {"Semarang", "Jakarta", "Yogyakarta"};
    char* bulan[4] = {"Januari", "Februari", "Maret", "April"};
    int penjualan[3][4] = {
        {10, 15, 10, 5},
        {20, 25, 20, 15},
        {10, 5, 14, 3}
    };

    char input_kota[20];
    int kota_index = -1;

    printf("Masukkan nama kota (Semarang, Jakarta, Yogyakarta): ");
    scanf("%s", input_kota);

    // Cari indeks kota
    for (int i = 0; i < 3; i++) {
        if (strcasecmp(input_kota, kota[i]) == 0) {
            kota_index = i;
            break;
        }
    }

    if (kota_index == -1) {
        printf("Nama kota tidak valid.\n");
        return 1;
    }

    int max_bulan = 0;
    for (int j = 1; j < 4; j++) {
        if (penjualan[kota_index][j] > penjualan[kota_index][max_bulan]) {
            max_bulan = j;
        }
    }

    printf("Penjualan tertinggi di kota %s adalah pada bulan %s dengan %d penjualan.\n",
           kota[kota_index], bulan[max_bulan], penjualan[kota_index][max_bulan]);

    return 0;
}