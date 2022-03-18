#include <stdio.h>
#include <stdlib.h>

int maValor(int v[], const int N)
{
    int maior = v[0], i;

    for (i = 1; i < N; i++)
        if (v[i] > maior)
            maior = v[i];

    return maior;
}

int meValor(int v[], const int N)


{
    int menor = v[0], i;

    for (i = 1; i < N; i++)
        if (v[i] < menor)
            menor = v[i];

    return menor;
}

void meMaValor(int v[], const int N, int *menor, int *maior)
{
    int  i;
    *menor = v[0];
    *maior = v[0];

    for (i = 1; i < N; i++)
        if (v[i] < *menor)
            *menor = v[i];
        if  (v[i] > *maior)
            *maior = v[i];

}

/*void meMaValor2(int v[], const int N, int *menor, int *maior)
{
    int  i;
    int mm[2];
    mm[0] = v[0];
    mm[1] = v[0];

    for (i = 1; i < N; i++)
        if (v[i] < mm[0])
            mm[0] = v[i];
        if  (v[i] > mm[1])
            mm[1] = v[i];
    return mm;

}*/

int main(){

    int v[] = {2,3,5,7,11,13,1};
    int maior, menor;
    int *mm;

    maior = maValor(v, 7);
    printf("Maior Valor do Vetor = %d\n", maior);

    menor = meValor(v, 7);
    printf("Menor Valor do Vetor = %d\n", menor);

    meMaValor(v, 7, &menor, &maior);
    printf("Menor Valor do Vetor = %d\n", menor);
    printf("Maior Valor do Vetor = %d\n", maior);

    mm = meMaValor2(v, 7);
    printf("Menor Valor do Vetor = %d\n", mm[0]);
    printf("Maior Valor do Vetor = %d\n", mm[1]);

    return 0;
}