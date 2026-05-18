/*Nama File     : dekripsiCaesar.c*/
/*Deskripsi     : Mendekripsi pesan yang telah dienkripsi menggunakan metode Caesar Cipher*/
/*Pembuat       : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan : 08 April 2025 - 15.11*/

#include <stdio.h>

int hitungPanjang(const char *str) {
    int panjang = 0;
    while (str[panjang] != '\0'){
        panjang++;
    }
    return panjang;
}

void dekripsiCaesar(char *pesan, int n){
    int i = 0;
    while (pesan[i] != '\0'){
        pesan [i] = (pesan[i] - 'a' - n + 26) %26 + 'a';
        i++;
    }
}

int main(){
    /*Kamus*/
    int kode;
    char pesan[255];

    /*Algoritma*/
    printf("Masukkan kode: ");
    scanf("%d", &kode);

    printf("Pesan terenkripsi: ");
    scanf("%s", pesan);

    dekripsiCaesar(pesan, kode);

    printf("Pesan asli: %s\n", pesan);

    return 0;


}