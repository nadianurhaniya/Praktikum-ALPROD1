// Nama File : InputBulan.c
// Deskripsi : Untuk menentukan Kota apa yang menghasilkan penjualan tertinggi berdasarkan inputan bulan
// Pembuat   : 24060124120019 - Nadia Azura Nurhaniya
// Tgl Pembuatan : 19 Mei 2025 - 20.58

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

// Penjualan (kota) tertinggi pada bulan X
int main() {
    char* kota[3] = {"Semarang", "Jakarta", "Yogyakarta"};
    char* bulan[4] = {"Januari", "Februari", "Maret", "April"};
    int penjualan[3][4] = {
        {10, 15, 10, 5},
        {20, 25, 20, 15},
        {10, 5, 14, 3}
    };

    char input_bulan[20];
    int bulan_index = -1;

    printf("Masukkan nama bulan (Januari, Februari, Maret, April): ");
    scanf("%s", input_bulan);

    // Cari indeks bulan
    for (int i = 0; i < 4; i++) {
        if (strcasecmp(input_bulan, bulan[i]) == 0) {
            bulan_index = i;
            break;
        }
    }

    if (bulan_index == -1) {
        printf("Nama bulan tidak valid.\n");
        return 1;
    }

    int max_kota = 0;
    for (int i = 1; i < 3; i++) {
        if (penjualan[i][bulan_index] > penjualan[max_kota][bulan_index]) {
            max_kota = i;
        }
    }

    printf("Penjualan tertinggi pada bulan %s adalah kota %s dengan %d penjualan.\n",
           bulan[bulan_index], kota[max_kota], penjualan[max_kota][bulan_index]);

    return 0;
}