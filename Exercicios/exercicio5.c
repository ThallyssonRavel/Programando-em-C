#include <stdio.h>
#include <stdlib.h>

int main(void){
   int i=0, peso[2], contador=0, pesos=0, erro=0, multiplicatorio=0, nota[2], media_ponderada;

   printf("Seja bem vindo(a)\n");
   do{
      do{
         printf("Digite a %i nota\n", i+1);
         scanf("%i", &nota[i]);
         printf("Digite o peso da %i nota\n", i+1);
         scanf("%i", &peso[i]);
         if(nota[i]<0 || nota[i]>10){
            printf("Erro! digite a nota novamente!\n");
            scanf("%i", &nota[i]);
         }
         if(peso[i]<0){
            printf("Erro! o peso tem que ser maior que 0\n");
            printf("%i", &peso[i]);
         }
         contador = i+1;
         i = i+1;
      }while(nota[i]<0 || nota[i]>10 || peso[i]<0);
      for(i=0; i<contador; i++){
         multiplicatorio = multiplicatorio + (nota[i]*peso[i]);
         pesos = pesos + peso[i];
      }
      if(pesos<0){
         printf("Erro! incie novamente\n");
         erro = 1;
      }
   }while(erro == 1);
   media_ponderada = multiplicatorio/pesos;
   printf("As notas foram:\n");
   for(i=0; i<contador; i++){
      printf("%i com peso %i\n", nota[i], peso[i]);
   }
   printf("A media ponderada e: %i", media_ponderada);
}
