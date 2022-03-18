#include <stdio.h>
#include <stdlib.h>

//Função para escrever os divisores
void divisores(int numero, int cont)
{
   if(numero >= cont)
   {
      if((numero % cont) == 0)
         printf("%d\n", cont);
      divisores(numero,cont + 1);
      return;
   }
   else
      return;
}

//Função principal
int main()
{
   int numero= 0;
   printf("Numero: ");
   scanf("%d", &numero);
   printf("Divisores\n");
   divisores(numero,1);
   return 0;
}