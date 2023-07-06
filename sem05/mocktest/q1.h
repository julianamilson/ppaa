#include <stdio.h>
#include <stdlib.h>

struct Fila {
    char s[100];
    int index;
    char content[100];
    int head;
    int tail;
} typedef Fila;

void queue(Fila *f);
