/*Nama File     : KalkSS.c*/
/*Deskripsi     : Membuat kalkulator sederhana dengan 2 buah inputan 
                  berupa bilangan integer dan 1 inputan berupa character
                  sebagai operator*/
/*Pembuat       : 24060124120019-Nadia Azura Nurhaniya*/
/*Tgl Pembuatan : 03 Maret 2025 - 21.10*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int a;
    int b;
    char operator;

     /*Algoritma*/
    printf("\n==========KALKULATOR SEDERHANA==========");
    printf("\nMasukkan nilai a = ");
    scanf("%d", &a);
    printf("\nMasukkan nilai b = ");
    scanf("%d", &b);
    printf("OPERATOR :\na = +\nb = -\nc = *\nd = /\ne = div\nf = mod\nMasukkan operator = ");
    scanf(" %c", &operator);

    if (operator != 'a' && operator != 'b' && operator != 'c' && operator != 'd' && operator != 'e' && operator != 'f') {
        printf("Bukan pilihan menu yang benar");
    }
    
    else {
        switch (operator) {
            case 'a':
                printf("Hasil Jumlah = %d", a + b);
                break;
            case 'b':
                printf("Hasil Kurang = %d", a - b);
                break;
            case 'c':
                printf("Hasil Kali = %d", a * b);
                break;
            case 'd':
                if (b == 0) {
                    printf("Pembagi tidak boleh 0");
                    break;
                }
                else {
                    printf("Hasil Bagi = %.2f", (float) a / b);
                break;
                }
                
            case 'e':
                if (b == 0) {
                    printf("Pembagi tidak boleh 0");
                    break;
                }
                else {
                    printf("Hasil div = %d", a / b);
                    break;
                }
            case 'f':
                printf("Hasil modulo = %d", a % b);
                break;
        }
    }
    return 0;
}