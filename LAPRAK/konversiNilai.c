#include <stdio.h>

int main() {
    int TABNILAI[100];           // Menyimpan nilai-nilai angka
    char KONVERSI[100];          // Menyimpan konversi nilai huruf
    int i, total = 0;            // Untuk rata-rata

    // Variabel hitung huruf
    int countA = 0, countB = 0, countC = 0, countD = 0, countE = 0;

    // Input nilai dan konversi ke huruf
    for (i = 0; i < 100; i++) {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &TABNILAI[i]);
        total += TABNILAI[i];

        // Konversi nilai ke huruf
        if (TABNILAI[i] >= 80) {
            KONVERSI[i] = 'A';
            countA++;
        } else if (TABNILAI[i] >= 70) {
            KONVERSI[i] = 'B';
            countB++;
        } else if (TABNILAI[i] >= 55) {
            KONVERSI[i] = 'C';
            countC++;
        } else if (TABNILAI[i] >= 40) {
            KONVERSI[i] = 'D';
            countD++;
        } else {
            KONVERSI[i] = 'E';
            countE++;
        }
    }

    // Rata-rata
    float rataRata = total / 100.0;

    // Output konversi tiap nilai
    printf("\n--- Hasil Konversi Nilai ---\n");
    for (i = 0; i < 100; i++) {
        printf("Nilai ke-%d: %d => %c\n", i + 1, TABNILAI[i], KONVERSI[i]);
    }

    // Output rata-rata
    printf("\nRata-rata nilai: %.2f\n", rataRata);

    // Output frekuensi jumlah dan relatif
    printf("\n--- Jumlah dan Frekuensi Relatif ---\n");
    printf("A: jumlah = %d, frekuensi relatif = %.2f\n", countA, countA / 100.0);
    printf("B: jumlah = %d, frekuensi relatif = %.2f\n", countB, countB / 100.0);
    printf("C: jumlah = %d, frekuensi relatif = %.2f\n", countC, countC / 100.0);
    printf("D: jumlah = %d, frekuensi relatif = %.2f\n", countD, countD / 100.0);
    printf("E: jumlah = %d, frekuensi relatif = %.2f\n", countE, countE / 100.0);

    return 0;
}
