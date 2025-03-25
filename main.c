#include <stdio.h>
#include "stack.h"

int main() {
    Stack S;
    createStack(&S);

    int decimalNumber;
    printf("Masukkan bilangan desimal: ");
    scanf("%d", &decimalNumber);

    // Salin ke variabel sementara
    int temp = decimalNumber;

    // Proses: bagi dengan 2, masukkan sisa bagi ke Stack
    while (temp > 0) {
        int remainder = temp % 2;
        push(&S, remainder);
        temp /= 2;
    }

    printf("Hasil konversi biner dari %d adalah: ", decimalNumber);

    // Keluarkan sisa bagi dari Stack untuk mendapatkan urutan biner yang benar
    while (!isStackEmpty(S)) {
        int bit;
        pop(&S, &bit);
        printf("%d", bit);
    }
    printf("\n");

    return 0;
}
