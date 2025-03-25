#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // untuk tipe bool pada C99

// Definisi struktur node dan pointer
typedef struct tNode *address;
struct tNode {
    int info;
    address next;
};

// Tipe data Stack kita representasikan sebagai pointer ke node teratas
typedef address Stack;

// Membuat Stack baru (kosong)
void createStack(Stack *S);

// Mengecek apakah Stack kosong
bool isStackEmpty(Stack S);

// Menambahkan elemen ke puncak Stack
void push(Stack *S, int X);

// Menghapus elemen dari puncak Stack
void pop(Stack *S, int *X);

#endif
