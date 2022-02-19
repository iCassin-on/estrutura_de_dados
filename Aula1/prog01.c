#include <time.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int v[500];
    int i;

    srand(time(0));
    v[0] = 7;
    for (i=0 ; i<500 ; i++) 
        v[i] = v[i-1] + rand()%10;
    
    for (i=0 ; i<500 ; i++)
        printf("%d ", v[i]);
    printf("\n");

    return 0;
}

// O programa vai pedir um numero ao usuario e informar se o numero encontra-se dentro do range setado.