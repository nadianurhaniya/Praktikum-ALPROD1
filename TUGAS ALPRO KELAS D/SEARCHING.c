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