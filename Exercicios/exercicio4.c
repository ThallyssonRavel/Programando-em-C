#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Obejetivo: Apresentar ao usuario(a) as operações descritas abaixo
//Quadrado de um numero
//O cubo de um numero
//A raiz de um numero
//Caso o numero for negativo, o programa ira apreserntar o resultado 0a cada uma das operaçoes;

int main(void){
    int numero, quadrado, cubo, raiz;
    printf("Seja muito bem vindo(a)\n");
    printf("Para comercamos");

    printf("digite um numero");
    scanf("%i", &numero);
    
    if(numero>0){
        quadrado = numero*numero;
        cubo = numero*numero*numero;
        raiz = sqrt(numero);
        printf("O numero %i ao quadrado e: %i\n", numero, quadrado);
        printf("O numero %i ao cubo e: %i\n", numero, cubo);
        printf("A raiz do numero %i e: %i\n", numero, raiz);

    }
    if(numero<0){
        quadrado = 0;
        cubo = 0;
        raiz = 0;
        printf("O numero %i ao quadrado e: %i\n", numero, quadrado);
        printf("O numero %i ao cubo e: %i\n", numero, cubo);
        printf("A raiz do numero %i e: %i\n", numero, raiz);
    }
}
