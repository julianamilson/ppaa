#include "q1.h"

void dequeued(Fila *f, int i)
{
    int n = 0;

    printf("dequeued %c\n", f->content[f->head]);
    printf("index : ");
    for (int j = 0; j < f->index; j++)
        printf("%d ", j);
    f->content[f->head] = '.';
    f->head++;
    printf("\ncontent:");
    for (int j = 0; j < f->index; j++)
        printf(" %c ", f->content[j]);
    printf("\n         H: %d T: %d\n\n", f->head, f->tail);
    f->index /= 2;
}

void enqueued(Fila *f, int i)
{
    int n = 0;

    for (int j = 0; j < f->index; j++)
    {
        if (j <= i)
            f->content[j] = f->s[j];
        else
            f->content[j] = '.';
    }
    printf("enqueued %c\nindex  : ", f->s[i]);
    for (int j = 0; j < f->index; j++)
        printf("%d  ", j);
    printf("\ncontent:");
    for (int j = 0; j < f->index; j++)
        printf(" %c ", f->content[j]);
    for (n; f->content[n] != '.'; n++);
    f->tail = n;
    printf("\n         H: %d T: %d\n\n", f->head, f->tail);
    if (i + 2 == f->index)
        f->index *= 2;
}

void queue(Fila *f)
{
    for (int i = 0; f->s[i]; i++)
    {
        if (f->s[i] == '-')
            dequeued(f, i);
        else
            enqueued(f, i);
    }
}
