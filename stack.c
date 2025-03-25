#include "stack.h"

// Membuat Stack baru (kosong)
void createStack(Stack *S) {
    *S = NULL; // Stack kosong ditandai dengan pointer bernilai NULL
}

// Mengecek apakah Stack kosong
bool isStackEmpty(Stack S) {
    return (S == NULL);
}

// Menambahkan elemen ke puncak Stack
void push(Stack *S, int X) {
    // Buat node baru
    address newNode = (address) malloc(sizeof(*newNode));
    if (newNode == NULL) {
        printf("Alokasi memori gagal.\n");
        return;
    }
    newNode->info = X;
    newNode->next = NULL;

    // Tempelkan node baru di depan (puncak)
    if (isStackEmpty(*S)) {
        *S = newNode;
    } else {
        newNode->next = *S;
        *S = newNode;
    }
}

// Menghapus elemen dari puncak Stack
void pop(Stack *S, int *X) {
    if (!isStackEmpty(*S)) {
        // Node teratas
        address temp = *S;
        *X = temp->info;     // Simpan nilai elemen teratas
        *S = temp->next;     // Geser puncak ke node berikutnya
        free(temp);          // Hapus node lama
    } else {
        printf("Stack kosong, tidak bisa pop!\n");
    }
}
