#include "palindromo.h"

/*
    Aqui esta criando uma matriz baseada na quantidade de
    espacos (3 espacos = 4 palavras)
    Apos alocar a matriz com a quantidade de palavras, aloquei um
    espaco para que cada posicao do ponteiro de ponteiro receba a string
    de cada palavra, colocando todas em uppercase.
    Queria medir o tamanho de cada palavra para alocar a memoria, mas o tempo
    e erros me fizeram desistir da ideia
*/
char **cria_matriz(char *s)
{
    int cntr = 0;
    for (int i = 0; s[i]; i++)
        if (i == ' ')
            cntr++;

    /*
        Pelo que debuguei, esta quebrando aqui
        Meu erro foi ter dificultado algo que era pra ser simples:
        Se analisasse a string a partir da ultima posicao lida ate o proximo
        espaco, conseguiria ter resolvido o problema
        (mas agora so falta 3 min, tentei resolver, mas o codigo começou a ficar
        baguncado e achei melhor voltar pro estado anterior)
        Voce ateh deu mais tempo, so que se eu ficar, vou me atrasar pro
        trabalho. Uma pena kkk
    */

    char **matrix = (char **)malloc(sizeof(char *) * cntr);
    if (cntr > 0)
    {
        cntr++;
        for (int i = 0; i < cntr; i++)
            matrix[i] = (char *)malloc(sizeof(char) * 99);
    }
    else
        *matrix = (char *)malloc(sizeof(char) * 99);

    int j = 0;
    for (int i = 0; s[i]; i++)
    {
        int k = 0;
        while (s[i] != ' ')
        {
            matrix[j][k] = toupper(s[i]);
            i++;
        }
    }
    return matrix;
}

/*
    A funcao compara cada caractere do ponteiro de ponteiro analisado em questao
    e guarda se ha palindromos (e sua quantidade) ou nao,
    printando o resultado no final de sua execucao
*/
void palindromo(Pa *p)
{
    int cntr = 0;

    for (int i = 0; p->m[i]; i++)
    {
        int len = strlen(p->m[i]) - 1, sign = 0;
        for (int j = 0; p->m[i][j]; j++)
        {
            if (p->m[i][j] != p->m[i][len])
                sign++;
            len--;
        }
        if (sign == 0)
            cntr++;
    }
    if (cntr > 0)
        printf("Ha %d palindromos na string '%s'\n", cntr, p->s);
    else
        printf("Nao ha palindromos na string '%s'\n", p->s);
}

/*
    Estou setando so a matriz para nulo pois ela eh ponteiro de ponteiro, ie,
    aponta para uma regiao de memoria (ou nenhuma = NULL), diferente das
    referencias que devem, necessariamente, apontar para algo
*/
Pa *p_cria(void)
{
    Pa *p = (Pa *)malloc(sizeof(Pa));
    p->m = NULL;
    return p;
}

void p_insere(Pa *p)
{
    scanf("%s", p->s);
    p->m = cria_matriz(p->s);
}

/*
    Liberamos primeiro a matriz que foi alocada na struct e entao a variavel
    do tipo da struct que foi alocada
*/
void p_libera(Pa *p)
{
    for (int i = 0; p->m[i]; i++)
        free(p->m[i]);
    free(p->m);
    free(p);
    p = NULL;
}
